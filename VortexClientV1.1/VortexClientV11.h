#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VortexClientV11.h"
#include<qtcpsocket.h>
#include<qfile.h>
#include <windows.h>
#include <QMessageBox>
#include<QFileDialog>
#include<WinSock2.h>

#define TX1ADDR "192.168.102.1"
#define TX2ADDR "192.168.102.1"
#define TX3ADDR "192.168.102.1"
#define TX4ADDR "192.168.102.1"

#define TX1PORT "8080"
#define TX2PORT "8080"
#define TX3PORT "8080"
#define TX4PORT "8080"


#define Tx1Num 0
#define Tx2Num 1
#define Tx3Num 2
#define Tx4Num 3


#define TCPCONNECTTIMEOUT 2000
#define WriteBuffSize 1024
#define TX1HEAD "EF35830"
#define TX2HEAD "EF35831"
#define TX3HEAD "EF35832"
#define TX4HEAD "EF35833"
class VortexClientV11 : public QMainWindow
{
	Q_OBJECT

public:
	VortexClientV11(QWidget *parent = Q_NULLPTR);
	int InputAddrFormatCheck(QString Addr,QString Port);
signals:
	void Tx1IsConnected();
	void Tx2IsConnected();
	void Tx3IsConnected();
	void Tx4IsConnected();

	void Tx1IsDisconnected();
	void Tx2IsDisconnected();
	void Tx3IsDisconnected();
	void Tx4IsDisconnected();

private slots:
	void Tx1Connecton_Clicked();
	void Tx2Connecton_Clicked();
	void Tx3Connecton_Clicked();
	void Tx4Connecton_Clicked();

	void Tx1ConnectedProc();
	void Tx2ConnectedProc();
	void Tx3ConnectedProc();
	void Tx4ConnectedProc();

	void Tx1DisconnectedProc();
	void Tx2DisconnectedProc();
	void Tx3DisconnectedProc();
	void Tx4DisconnectedProc();

	void Tx1Open_Clicked();
	void Tx2Open_Clicked();
	void Tx3Open_Clicked();
	void Tx4Open_Clicked();

	void Tx1Transmit_Clicked();
	void Tx2Transmit_Clicked();
	void Tx3Transmit_Clicked();
	void Tx4Transmit_Clicked();

	void Tx1ClearScrean_Clicked();
	void Tx2ClearScrean_Clicked();
	void Tx3ClearScrean_Clicked();
	void Tx4ClearScrean_Clicked();

private:
	Ui::VortexClientV11Class ui;
	QTcpSocket *TcpSocketList;
	QString *FileNameList;
	QFile **FileList;
	////QString *Addr;
	QString *Port;
	QString *WriteBuff;
};
