#include <QDebug>
#include <QFile>
#include <QSerialPortInfo>
#include <QTextStream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialcommunication.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
    debug_log("RGB Controller started");
	// disable some buttons etc
	ui->DisconnectButton->setEnabled(false);
	ui->ConnectButton->setEnabled(false);
	ui->redButton->setEnabled(false);
	ui->greenButton->setEnabled(false);
	ui->blueButton->setEnabled(false);
    ui->offButton->setEnabled(false);
    ui->reloadpresetsButton->setEnabled(false);
    ui->presetsSetButton->setEnabled(false);
    ui->presetsDropdown->setEnabled(false);
	// we will first populate our serial list
    populate_serial_list();
    presetindex = 0;
    load_presets(); /* load presets */
	r = 0;
	g = 0;
	b = 0;
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::debug_log(QString Text)
{ // displays debug information
	ui->DebugOutput->append(Text);
}

void MainWindow::populate_serial_list()
{ // this function will populate our serial port list
	// first remove all the current items
	for (int x = 0; x < ui->SerialList->count() + 1; x++)
	{
		ui->SerialList->removeItem(x);
	}
	for (int x = 0; x < QSerialPortInfo::availablePorts().size(); x++)
	{
		if (!QSerialPortInfo::availablePorts().at(x).description().isEmpty())
			ui->SerialList->addItem(QSerialPortInfo::availablePorts().at(x).portName());
	}
	if (!ui->SerialList->itemText(0).isEmpty())
	{
		ui->ConnectButton->setEnabled(true);
        debug_log("Serial port list populated");
	} else
	{
        debug_log("No serial port found!");
		ui->SerialList->addItem("None");
	}
}

void MainWindow::on_ConnectButton_clicked()
{ // serial connect button
	SerialPort = ui->SerialList->currentText();
	if (SerialCommunication::SerialConnect(SerialPort))
	{ // if true we are connected
        debug_log("Connected");
		ui->StatusInfoLabel->setText("<font color=green>Connected</font>");
		ui->DisconnectButton->setEnabled(true);
		ui->ConnectButton->setEnabled(false);
		ui->redButton->setEnabled(true);
		ui->greenButton->setEnabled(true);
		ui->blueButton->setEnabled(true);
        ui->offButton->setEnabled(true);
        ui->presetsSetButton->setEnabled(true);
        ui->presetsDropdown->setEnabled(true);
        ui->reloadpresetsButton->setEnabled(true);
		ui->refreshButton->setEnabled(false);
		ui->rSlider->setValue(0);
		ui->gSlider->setValue(0);
		ui->bSlider->setValue(0);

	} else
	{
        debug_log("Connection error..");
	}
}

void MainWindow::on_DisconnectButton_clicked()
{ // serial disconnect button
	if (SerialCommunication::SerialDisconnect())
	{ // if true we are disconnected
        debug_log("Disconnected..");
		ui->StatusInfoLabel->setText("<font color=red>Disconnected</font>");
		ui->DisconnectButton->setEnabled(false);
		ui->ConnectButton->setEnabled(true);
		ui->refreshButton->setEnabled(true);
		ui->redButton->setEnabled(false);
		ui->greenButton->setEnabled(false);
        ui->offButton->setEnabled(false);
		ui->blueButton->setEnabled(false);
        ui->reloadpresetsButton->setEnabled(false);
        ui->presetsDropdown->setEnabled(false);
        ui->presetsSetButton->setEnabled(false);
		ui->rSlider->setValue(0);
		ui->gSlider->setValue(0);
		ui->bSlider->setValue(0);

	} else
	{ // fail
        debug_log("Can not disconnect right now..");
	}
}


void MainWindow::on_rSlider_valueChanged(int value)
{
	r = value;
	serialRGB();
}

void MainWindow::on_gSlider_valueChanged(int value)
{
	g = value;
	serialRGB();
}

void MainWindow::on_bSlider_valueChanged(int value)
{
	b = value;
	serialRGB();
}

void MainWindow::serialRGB()
{
	SerialCommunication::rgbChange(r, g, b);
}

void MainWindow::on_redButton_clicked()
{
	ui->rSlider->setValue(255);
	ui->gSlider->setValue(0);
	ui->bSlider->setValue(0);
}

void MainWindow::on_greenButton_clicked()
{
	ui->rSlider->setValue(0);
	ui->gSlider->setValue(255);
	ui->bSlider->setValue(0);
}

void MainWindow::on_blueButton_clicked()
{
	ui->rSlider->setValue(0);
	ui->gSlider->setValue(0);
	ui->bSlider->setValue(255);
}

void MainWindow::on_refreshButton_clicked()
{
    populate_serial_list();
}

void MainWindow::load_presets()
{
    /*
     * this function will load presets from file and put them into a drop down box
     * How i plan for it to work:
     * -> load file
     * -> parse line by line
     * -> split line at delimeter
     * -> add [0] to dropdown (name), add [1] to an array that stores all the values
     */

    debug_log("Loading presets..");
    QFile inputFile("presets.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
           QString line = in.readLine();
           if (line.contains("="))
           {
                ui->presetsDropdown->addItem(line.split("=")[0]);
                presets.append(line.split("=")[1]);
           }
       }
       inputFile.close();
       debug_log("Presets loaded.");
    } else
           debug_log("Presets file not found.");
}





void MainWindow::on_presetsDropdown_currentIndexChanged(int index)
{
    if (!presets.isEmpty())
    {
        //qDebug() << presets.at(index);
        presetindex = index;
    }
}

void MainWindow::on_presetsSetButton_clicked()
{
    if (!presets.isEmpty())
    {
        QString tempstore = presets.at(presetindex);
        QStringList temparray = tempstore.split(",");
        debug_log("Preset selected: " + temparray[0] + " " + temparray[1] + " " + temparray[2]);
        ui->rSlider->setValue(temparray[0].toInt());
        ui->gSlider->setValue(temparray[1].toInt());
        ui->bSlider->setValue(temparray[2].toInt());
    }
}

void MainWindow::on_offButton_clicked()
{
    ui->rSlider->setValue(0);
    ui->gSlider->setValue(0);
    ui->bSlider->setValue(0);
}

void MainWindow::on_reloadpresetsButton_clicked()
{

    ui->presetsDropdown->clear();
    presets.clear();
    presetindex = 0;
    load_presets();
}
