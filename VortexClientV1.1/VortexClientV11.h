#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VortexClientV11.h"
#include<qtcpsocket.h>
#include<qfile.h>
#include <windows.h>
#include <QMessageBox>
#include<QFileDialog>
#include <QDataStream>
#include <QIODevice>
#include <vector>

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
#define DATA_STREAM_VERSION  QDataStream::Qt_5_9
#define PARAMETERFRAMELENGTH 55
#define PARAMENUM 11
#define PARAME0LENGTH 5
#define PARAME1LENGTH 5
#define PARAME2LENGTH 5
#define PARAME3LENGTH 5
#define PARAME4LENGTH 5
#define PARAME5LENGTH 5
#define PARAME6LENGTH 5
#define PARAME7LENGTH 5
#define PARAME8LENGTH 5
#define PARAME9LENGTH 5
#define PARAME10LENGTH 5

using std::vector;
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

	void Tx1ParamToDisplay(QString RecvFrame);
	void Tx2ParamToDisplay(QString RecvFrame);
	void Tx3ParamToDisplay(QString RecvFrame);
	void Tx4ParamToDisplay(QString RecvFrame);

	void Tx1DisplayParam(QString Param);
	void Tx2DisplayParam(QString Param);
	void Tx3DisplayParam(QString Param);
	void Tx4DisplayParam(QString Param);

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

	void Tx1ContinueTransmit(qint64);
	void Tx2ContinueTransmit(qint64);
	void Tx3ContinueTransmit(qint64);
	void Tx4ContinueTransmit(qint64);

	void Tx1ClearScrean_Clicked();
	void Tx2ClearScrean_Clicked();
	void Tx3ClearScrean_Clicked();
	void Tx4ClearScrean_Clicked();

	void Tx1ReceiveData();
	void Tx2ReceiveData();
	void Tx3ReceiveData();
	void Tx4ReceiveData();

	void Tx1ParamDisplay(QString);
	void Tx2ParamDisplay(QString);
	void Tx3ParamDisplay(QString);
	void Tx4ParamDisplay(QString);

	//void Tx1ParamDisplay(vector<QString>);
	void Tx1ParamParse(QString Frame);
	void Tx2ParamParse(QString Frame);
	void Tx3ParamParse(QString Frame);
	void Tx4ParamParse(QString Frame);
private:
	Ui::VortexClientV11Class ui;
	QTcpSocket *TcpSocketList;
	QTcpSocket *RcvTcpSocketList;
	QString *FileNameList;
	QFile **FileList;
	QString *Addr;
	QString *Port;
	QByteArray *WriteBuff;
	QString *ReadBuff;
	vector<int> ParamLengthList;
	vector<QLineEdit*> Tx1ParamList;
	vector<QLineEdit*> Tx2ParamList;
	vector<QLineEdit*> Tx3ParamList;
	vector<QLineEdit*> Tx4ParamList;
	vector<QString> Tx1Param, Tx2Param, Tx3Param, Tx4Param;
	bool *TransmitState;
	int Tx1BytesToSend, Tx1RestBytes;
	int Tx2BytesToSend, Tx2RestBytes;
	int Tx3BytesToSend, Tx3RestBytes;
	int Tx4BytesToSend, Tx4RestBytes;
};
