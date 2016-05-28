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
        void debug_log(QString Text);
        void populate_serial_list();
		QString SerialPort;
		int r;
		int g;
		int b;
        QStringList presets;
        int presetindex;
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

        void load_presets();


        void on_presetsDropdown_currentIndexChanged(int index);

        void on_presetsSetButton_clicked();

        void on_offButton_clicked();

        void on_reloadpresetsButton_clicked();

private:
		Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
