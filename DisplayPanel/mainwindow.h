#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serialcommunication.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void DebugLog(QString Text);
    void PopulateSerialList();
    QString SerialPort;
    int r;
    int g;
    int b;

private slots:
    void on_ConnectButton_clicked();

    void on_DisconnectButton_clicked();


    void on_rSlider_valueChanged(int value);

    void on_gSlider_valueChanged(int value);

    void on_bSlider_valueChanged(int value);
    void serialRGB();

    void on_redButton_clicked();

    void on_greenButton_clicked();

    void on_blueButton_clicked();

    void on_refreshButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
