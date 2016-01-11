#ifndef SERIALCOMMUNICATION_H
#define SERIALCOMMUNICATION_H
#include <QSerialPort>
#include <QSerialPortInfo>

#include "mainwindow.h"

class SerialCommunication
{
public:
    SerialCommunication();
    ~SerialCommunication();
    QString PortName;
    static bool SerialConnect(QString PortName);
    static bool SerialDisconnect();
    static void rgbChange(int r, int g, int b);
};

#endif // SERIALCOMMUNICATION_H
