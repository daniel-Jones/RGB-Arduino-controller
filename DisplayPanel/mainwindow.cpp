#include <QSerialPortInfo>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serialcommunication.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    DebugLog("RGB Controller started");
    // disable some buttons etc
    ui->DisconnectButton->setEnabled(false);
    ui->ConnectButton->setEnabled(false);
    ui->redButton->setEnabled(false);
    ui->greenButton->setEnabled(false);
    ui->blueButton->setEnabled(false);
    // we will first populate our serial list
    PopulateSerialList();
    r = 0;
    g = 0;
    b = 0;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::DebugLog(QString Text) { // displays debug information
    ui->DebugOutput->append(Text);
}

void MainWindow::PopulateSerialList()
{ // this function will populate our serial port list
    for (int x = 0; x < QSerialPortInfo::availablePorts().size(); x++)
    {
        if (!QSerialPortInfo::availablePorts().at(x).description().isEmpty())
            ui->SerialList->addItem(QSerialPortInfo::availablePorts().at(x).portName());
    }
    if (!ui->SerialList->itemText(0).isEmpty())
    {
        ui->ConnectButton->setEnabled(true);
        DebugLog("Serial port list populated");
    } else
    {
        DebugLog("No serial port found!");
        ui->SerialList->addItem("None");
    }
}

void MainWindow::on_ConnectButton_clicked()
{ // serial connect button
    SerialPort = ui->SerialList->currentText();
    if (SerialCommunication::SerialConnect(SerialPort))
    { // if true we are connected
        DebugLog("Connected");
        ui->StatusInfoLabel->setText("<font color=green>Connected</font>");
        ui->DisconnectButton->setEnabled(true);
        ui->ConnectButton->setEnabled(false);
        ui->redButton->setEnabled(true);
        ui->greenButton->setEnabled(true);
        ui->blueButton->setEnabled(true);
    } else
    {
        DebugLog("Connection error..");
    }
}

void MainWindow::on_DisconnectButton_clicked()
{ // serial disconnect button
    if (SerialCommunication::SerialDisconnect())
    { // if true we are disconnected
        DebugLog("Disconnected..");
        ui->StatusInfoLabel->setText("<font color=red>Disconnected</font>");
        ui->DisconnectButton->setEnabled(false);
        ui->ConnectButton->setEnabled(true);
        ui->redButton->setEnabled(false);
        ui->greenButton->setEnabled(false);
        ui->blueButton->setEnabled(false);
    } else
    { // fail
        DebugLog("Can not disconnect right now..");
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
    PopulateSerialList();
}
