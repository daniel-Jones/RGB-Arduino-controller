/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *DebugOutput;
    QPushButton *DisconnectButton;
    QComboBox *SerialList;
    QLabel *RGBLabel;
    QPushButton *ConnectButton;
    QLabel *SerialLabel;
    QPushButton *redButton;
    QLabel *StatusInfoLabel;
    QLabel *SerialStatus;
    QPushButton *blueButton;
    QSlider *gSlider;
    QSlider *rSlider;
    QPushButton *greenButton;
    QSlider *bSlider;
    QPushButton *refreshButton;
    QLabel *debugLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(245, 404);
        QIcon icon;
        icon.addFile(QStringLiteral("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        DebugOutput = new QTextEdit(centralWidget);
        DebugOutput->setObjectName(QStringLiteral("DebugOutput"));
        DebugOutput->setEnabled(true);
        DebugOutput->setReadOnly(true);

        gridLayout->addWidget(DebugOutput, 11, 0, 1, 3);

        DisconnectButton = new QPushButton(centralWidget);
        DisconnectButton->setObjectName(QStringLiteral("DisconnectButton"));

        gridLayout->addWidget(DisconnectButton, 3, 1, 1, 1);

        SerialList = new QComboBox(centralWidget);
        SerialList->setObjectName(QStringLiteral("SerialList"));
        SerialList->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(SerialList, 1, 1, 1, 1);

        RGBLabel = new QLabel(centralWidget);
        RGBLabel->setObjectName(QStringLiteral("RGBLabel"));

        gridLayout->addWidget(RGBLabel, 6, 0, 1, 1);

        ConnectButton = new QPushButton(centralWidget);
        ConnectButton->setObjectName(QStringLiteral("ConnectButton"));
        ConnectButton->setMaximumSize(QSize(80, 16777215));

        gridLayout->addWidget(ConnectButton, 3, 0, 1, 1);

        SerialLabel = new QLabel(centralWidget);
        SerialLabel->setObjectName(QStringLiteral("SerialLabel"));
        SerialLabel->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(SerialLabel, 1, 0, 1, 1);

        redButton = new QPushButton(centralWidget);
        redButton->setObjectName(QStringLiteral("redButton"));

        gridLayout->addWidget(redButton, 7, 1, 1, 1);

        StatusInfoLabel = new QLabel(centralWidget);
        StatusInfoLabel->setObjectName(QStringLiteral("StatusInfoLabel"));

        gridLayout->addWidget(StatusInfoLabel, 0, 1, 1, 1);

        SerialStatus = new QLabel(centralWidget);
        SerialStatus->setObjectName(QStringLiteral("SerialStatus"));
        SerialStatus->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(SerialStatus, 0, 0, 1, 1);

        blueButton = new QPushButton(centralWidget);
        blueButton->setObjectName(QStringLiteral("blueButton"));

        gridLayout->addWidget(blueButton, 9, 1, 1, 1);

        gSlider = new QSlider(centralWidget);
        gSlider->setObjectName(QStringLiteral("gSlider"));
        gSlider->setMaximum(255);
        gSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(gSlider, 8, 0, 1, 1);

        rSlider = new QSlider(centralWidget);
        rSlider->setObjectName(QStringLiteral("rSlider"));
        rSlider->setMaximum(255);
        rSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(rSlider, 7, 0, 1, 1);

        greenButton = new QPushButton(centralWidget);
        greenButton->setObjectName(QStringLiteral("greenButton"));

        gridLayout->addWidget(greenButton, 8, 1, 1, 1);

        bSlider = new QSlider(centralWidget);
        bSlider->setObjectName(QStringLiteral("bSlider"));
        bSlider->setMaximum(255);
        bSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(bSlider, 9, 0, 1, 1);

        refreshButton = new QPushButton(centralWidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        gridLayout->addWidget(refreshButton, 2, 1, 1, 1);

        debugLabel = new QLabel(centralWidget);
        debugLabel->setObjectName(QStringLiteral("debugLabel"));

        gridLayout->addWidget(debugLabel, 10, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RGB Controller", 0));
        DisconnectButton->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        RGBLabel->setText(QApplication::translate("MainWindow", "RGB Colors", 0));
        ConnectButton->setText(QApplication::translate("MainWindow", "Connect", 0));
        SerialLabel->setText(QApplication::translate("MainWindow", "Arduino Serial Port", 0));
        redButton->setText(QApplication::translate("MainWindow", "Red", 0));
        StatusInfoLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Disconnected</span></p></body></html>", 0));
        SerialStatus->setText(QApplication::translate("MainWindow", "Status:", 0));
        blueButton->setText(QApplication::translate("MainWindow", "Blue", 0));
        greenButton->setText(QApplication::translate("MainWindow", "Green", 0));
        refreshButton->setText(QApplication::translate("MainWindow", "Refresh", 0));
        debugLabel->setText(QApplication::translate("MainWindow", "Output:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
