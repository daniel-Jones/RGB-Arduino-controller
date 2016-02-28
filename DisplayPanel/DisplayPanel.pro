#-------------------------------------------------
#
# Project created by QtCreator 2015-06-11T09:17:24
#
#-------------------------------------------------

QT       += core gui serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
win32:RC_ICONS += icon.ico

TARGET = DisplayPanel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialcommunication.cpp

HEADERS  += mainwindow.h \
    serialcommunication.h

FORMS    += mainwindow.ui

RESOURCES +=
