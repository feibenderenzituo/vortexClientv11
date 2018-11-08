#include "VortexClientV11.h"
#pragma execution_character_set("utf-8")
#pragma comment(lib, "ws2_32.lib")  


VortexClientV11::VortexClientV11(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	TcpSocketList = new QTcpSocket[4];
	FileNameList = new QString[4];
	Addr = new QString[4];
	Port = new QString[4];
	FileList = new QFile*[4];
	WriteBuff = new QByteArray[4];
	TransmitState = new bool[4];

	connect(this, SIGNAL(Tx1IsConnected()), this, SLOT(Tx1ConnectedProc()));
	connect(this, SIGNAL(Tx2IsConnected()), this, SLOT(Tx2ConnectedProc()));
	connect(this, SIGNAL(Tx3IsConnected()), this, SLOT(Tx3ConnectedProc()));
	connect(this, SIGNAL(Tx4IsConnected()), this, SLOT(Tx4ConnectedProc()));
	connect(this, SIGNAL(Tx1IsDisconnected()), this, SLOT(Tx1DisconnectedProc()));
	connect(this, SIGNAL(Tx2IsDisconnected()), this, SLOT(Tx2DisconnectedProc()));
	connect(this, SIGNAL(Tx3IsDisconnected()), this, SLOT(Tx3DisconnectedProc()));
	connect(this, SIGNAL(Tx4IsDisconnected()), this, SLOT(Tx4DisconnectedProc()));
	connect(&TcpSocketList[Tx1Num], SIGNAL(bytesWritten(qint64)), this, SLOT(Tx1ContinueTransmit(qint64)));
	connect(&TcpSocketList[Tx2Num], SIGNAL(bytesWritten(qint64)), this, SLOT(Tx2ContinueTransmit(qint64)));
	connect(&TcpSocketList[Tx3Num], SIGNAL(bytesWritten(qint64)), this, SLOT(Tx3ContinueTransmit(qint64)));
	connect(&TcpSocketList[Tx4Num], SIGNAL(bytesWritten(qint64)), this, SLOT(Tx4ContinueTransmit(qint64)));

	//set default
	ui.Tx1Addr->setText(TX1ADDR);
	ui.Tx1Port->setText(TX1PORT);
	ui.Tx2Addr->setText(TX2ADDR);
	ui.Tx2Port->setText(TX2PORT);
	ui.Tx3Addr->setText(TX3ADDR);
	ui.Tx3Port->setText(TX3PORT);
	ui.Tx4Addr->setText(TX4ADDR);
	ui.Tx4Port->setText(TX4PORT);
	TransmitState[Tx1Num] = false;
	TransmitState[Tx2Num] = false;
	TransmitState[Tx3Num] = false;
	TransmitState[Tx4Num] = false;
}

void VortexClientV11::Tx1Connecton_Clicked()
{
	if (TcpSocketList[Tx1Num].state() == QAbstractSocket::ConnectedState)
		emit Tx1IsConnected();
	else if (TcpSocketList[Tx1Num].state() == QAbstractSocket::UnconnectedState)
	{
		Addr[Tx1Num] = ui.Tx1Addr->text();
		Port[Tx1Num] = ui.Tx1Port->text();
		int FormatState = InputAddrFormatCheck(Addr[Tx1Num], Port[Tx1Num]);
		switch (FormatState)
		{
			case 0:

				emit Tx1IsDisconnected(); 
				break;
			case 1:
				QMessageBox::information(this, "输入格式错误", "IP地址输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
				ui.Tx1Addr->setText("");
				break;
			case 2:
				QMessageBox::information(this, "输入格式错误", "端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
				ui.Tx1Port->setText("");
				break;
			case 3:
				QMessageBox::information(this, "输入格式错误", "IP地址及端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
				ui.Tx1Port->setText("");
				ui.Tx1Addr->setText("");
				break;
			default:
				break;
		}
	}
		
}
void VortexClientV11::Tx2Connecton_Clicked()
{
	if (TcpSocketList[Tx2Num].state() == QAbstractSocket::ConnectedState)
		emit Tx2IsConnected();
	else if (TcpSocketList[Tx2Num].state() == QAbstractSocket::UnconnectedState)
	{
		Addr[Tx2Num] = ui.Tx2Addr->text();
		Port[Tx2Num] = ui.Tx2Port->text();
		int FormatState = InputAddrFormatCheck(Addr[Tx2Num], Port[Tx2Num]);
		switch (FormatState)
		{
		case 0:
			emit Tx2IsDisconnected();
			break;
		case 1:
			QMessageBox::information(this, "输入格式错误", "IP地址输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx2Addr->setText("");
			break;
		case 2:
			QMessageBox::information(this, "输入格式错误", "端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx2Port->setText("");
			break;
		case 3:
			QMessageBox::information(this, "输入格式错误", "IP地址及端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx2Port->setText("");
			ui.Tx2Addr->setText("");
			break;
		default:
			break;
		}
	}
}
void VortexClientV11::Tx3Connecton_Clicked()
{
	if (TcpSocketList[Tx3Num].state() == QAbstractSocket::ConnectedState)
		emit Tx3IsConnected();
	else if (TcpSocketList[Tx3Num].state() == QAbstractSocket::UnconnectedState)
	{
		Addr[Tx3Num] = ui.Tx3Addr->text();
		Port[Tx3Num] = ui.Tx3Port->text();
		int FormatState = InputAddrFormatCheck(Addr[Tx3Num], Port[Tx3Num]);
		switch (FormatState)
		{
		case 0:
			emit Tx3IsDisconnected();
			break;
		case 1:
			QMessageBox::information(this, "输入格式错误", "IP地址输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx3Addr->setText("");
			break;
		case 2:
			QMessageBox::information(this, "输入格式错误", "端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx3Port->setText("");
			break;
		case 3:
			QMessageBox::information(this, "输入格式错误", "IP地址及端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx3Port->setText("");
			ui.Tx3Addr->setText("");
			break;
		default:
			break;
		}
	}
}
void VortexClientV11::Tx4Connecton_Clicked()
{
	if (TcpSocketList[Tx4Num].state() == QAbstractSocket::ConnectedState)
		emit Tx4IsConnected();
	else if (TcpSocketList[Tx4Num].state() == QAbstractSocket::UnconnectedState)
	{
		Addr[Tx4Num] = ui.Tx4Addr->text();
		Port[Tx4Num] = ui.Tx4Port->text();
		int FormatState = InputAddrFormatCheck(Addr[Tx4Num], Port[Tx4Num]);
		switch (FormatState)
		{
		case 0:
			emit Tx4IsDisconnected();
			break;
		case 1:
			QMessageBox::information(this, "输入格式错误", "IP地址输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx4Addr->setText("");
			break;
		case 2:
			QMessageBox::information(this, "输入格式错误", "端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx4Port->setText("");
			break;
		case 3:
			QMessageBox::information(this, "输入格式错误", "IP地址及端口输入格式错误", QMessageBox::Ok, QMessageBox::Cancel);
			ui.Tx4Port->setText("");
			ui.Tx4Addr->setText("");
			break;
		default:
			break;
		}
	}
}


void VortexClientV11::Tx1Open_Clicked()
{
	QString filter = "Allfile(*.*);;txt(*.txt)";
	QString diagTitle = "打开文件";
	FileNameList[Tx1Num] = QFileDialog::getOpenFileName(this, diagTitle, " ", filter);
	if (!FileNameList[Tx1Num].isEmpty())
	{
		ui.Tx1FilePath->setText(FileNameList[Tx1Num]);
	}
	else
		QMessageBox::information(this,"文件打开错误","文件打开错误,请重新选择", QMessageBox::Ok, QMessageBox::Cancel);
}
void VortexClientV11::Tx2Open_Clicked()
{
	QString filter = "Allfile(*.*);;txt(*.txt)";
	QString diagTitle = "打开文件";
	FileNameList[Tx2Num] = QFileDialog::getOpenFileName(this, diagTitle, " ", filter);
	if (!FileNameList[Tx2Num].isEmpty())
		ui.Tx2FilePath->setText(FileNameList[Tx2Num]);
	else
		QMessageBox::information(this, "文件打开错误", "文件打开错误,请重新选择", QMessageBox::Ok, QMessageBox::Cancel);
}
void VortexClientV11::Tx3Open_Clicked()
{
	QString filter = "Allfile(*.*);;txt(*.txt)";
	QString diagTitle = "打开文件";
	FileNameList[Tx3Num] = QFileDialog::getOpenFileName(this, diagTitle, " ", filter);
	if (!FileNameList[Tx3Num].isEmpty())
		ui.Tx3FilePath->setText(FileNameList[Tx3Num]);
	else
		QMessageBox::information(this, "文件打开错误", "文件打开错误,请重新选择", QMessageBox::Ok, QMessageBox::Cancel);
}
void VortexClientV11::Tx4Open_Clicked()
{
	QString filter = "Allfile(*.*);;txt(*.txt)";
	QString diagTitle = "打开文件";
	FileNameList[Tx4Num] = QFileDialog::getOpenFileName(this, diagTitle, " ", filter);
	if (!FileNameList[Tx4Num].isEmpty())
		ui.Tx4FilePath->setText(FileNameList[Tx4Num]);
	else
		QMessageBox::information(this, "文件打开错误", "文件打开错误,请重新选择", QMessageBox::Ok, QMessageBox::Cancel);
}

void VortexClientV11::Tx1Transmit_Clicked()
{
	if (!TransmitState[Tx1Num])
	{
		ui.Tx1Transmit->setText("停止");
		TransmitState[Tx1Num] = true;
		FileList[Tx1Num] = new QFile(FileNameList[Tx1Num]);
		if (!(*FileList[Tx1Num]).open(QIODevice::ReadOnly | QIODevice::Text))
		{
			QMessageBox::information(this, "文件读取错误", "文件读取错误", QMessageBox::Ok, QMessageBox::Cancel);
			return;
		}
		QDataStream OutConnector(&WriteBuff[Tx1Num], QIODevice::WriteOnly);
		OutConnector.setVersion(DATA_STREAM_VERSION);
		Tx1BytesToSend = FileList[Tx1Num]->size();
		OutConnector << TX1HEAD <<QString(Tx1BytesToSend);
		Tx1RestBytes = Tx1BytesToSend;
		TcpSocketList[Tx1Num].write(WriteBuff[Tx1Num]);
	}
	else
	{
		TransmitState[Tx1Num] = false;
		ui.Tx1Transmit->setText("发送");
	}
}

void VortexClientV11::Tx2Transmit_Clicked()
{
	if (!TransmitState[Tx2Num])
	{
		ui.Tx2Transmit->setText("停止");
		TransmitState[Tx2Num] = true;
		FileList[Tx2Num] = new QFile(FileNameList[Tx2Num]);
		if (!(*FileList[Tx2Num]).open(QIODevice::ReadOnly | QIODevice::Text))
		{
			QMessageBox::information(this, "文件读取错误", "文件读取错误", QMessageBox::Ok, QMessageBox::Cancel);
			return;
		}
		QDataStream OutConnector(&WriteBuff[Tx2Num], QIODevice::WriteOnly);
		OutConnector.setVersion(DATA_STREAM_VERSION);
		Tx2BytesToSend = FileList[Tx2Num]->size();
		OutConnector << TX2HEAD << QString(Tx2BytesToSend);
		Tx2RestBytes = Tx2BytesToSend;
		TcpSocketList[Tx2Num].write(WriteBuff[Tx2Num]);
	}
	else
	{
		TransmitState[Tx2Num] = false;
		ui.Tx2Transmit->setText("发送");
	}
}
void VortexClientV11::Tx3Transmit_Clicked()
{
	if (!TransmitState[Tx3Num])
	{
		ui.Tx3Transmit->setText("停止");
		TransmitState[Tx3Num] = true;
		FileList[Tx3Num] = new QFile(FileNameList[Tx3Num]);
		if (!(*FileList[Tx3Num]).open(QIODevice::ReadOnly | QIODevice::Text))
		{
			QMessageBox::information(this, "文件读取错误", "文件读取错误", QMessageBox::Ok, QMessageBox::Cancel);
			return;
		}
		QDataStream OutConnector(&WriteBuff[Tx3Num], QIODevice::WriteOnly);
		OutConnector.setVersion(DATA_STREAM_VERSION);
		Tx3BytesToSend = FileList[Tx3Num]->size();
		OutConnector << TX3HEAD << QString(Tx3BytesToSend);
		Tx3RestBytes = Tx3BytesToSend;
		TcpSocketList[Tx3Num].write(WriteBuff[Tx3Num]);
	}
	else
	{
		TransmitState[Tx3Num] = false;
		ui.Tx3Transmit->setText("发送");
	}
}
void VortexClientV11::Tx4Transmit_Clicked()
{
	if (!TransmitState[Tx4Num])
	{
		ui.Tx4Transmit->setText("停止");
		TransmitState[Tx4Num] = true;
		FileList[Tx4Num] = new QFile(FileNameList[Tx4Num]);
		if (!(*FileList[Tx4Num]).open(QIODevice::ReadOnly | QIODevice::Text))
		{
			QMessageBox::information(this, "文件读取错误", "文件读取错误", QMessageBox::Ok, QMessageBox::Cancel);
			return;
		}
		QDataStream OutConnector(&WriteBuff[Tx4Num], QIODevice::WriteOnly);
		OutConnector.setVersion(DATA_STREAM_VERSION);
		Tx4BytesToSend = FileList[Tx4Num]->size();
		OutConnector << TX4HEAD << QString(Tx4BytesToSend);
		Tx4RestBytes = Tx4BytesToSend;
		TcpSocketList[Tx4Num].write(WriteBuff[Tx4Num]);
	}
	else
	{
		TransmitState[Tx4Num] = false;
		ui.Tx4Transmit->setText("发送");
	}
}

void VortexClientV11::Tx1ContinueTransmit(qint64 SentBytes)
{
	if (TransmitState[Tx1Num])
	{
		if (Tx1RestBytes > 0)
		{
			QByteArray buf = (*FileList[Tx1Num]).read(qMin(WriteBuffSize, Tx1RestBytes));
			Tx1RestBytes -= TcpSocketList[Tx1Num].write(buf);
		}
		else
		{
			Tx1RestBytes = Tx1BytesToSend;
			(*FileList[Tx1Num]).seek(0);
			TcpSocketList[Tx1Num].write(WriteBuff[Tx1Num]);
		}
	}
	else
	{
		FileList[Tx1Num]->close();
	}
}

void VortexClientV11::Tx2ContinueTransmit(qint64 SentBytes)
{
	if (TransmitState[Tx2Num])
	{
		if (Tx2RestBytes > 0)
		{
			QByteArray buf = (*FileList[Tx2Num]).read(qMin(WriteBuffSize, Tx2RestBytes));
			Tx2RestBytes -= TcpSocketList[Tx2Num].write(buf);
		}
		else
		{
			Tx2RestBytes = Tx2BytesToSend;
			(*FileList[Tx2Num]).seek(0);
			TcpSocketList[Tx2Num].write(WriteBuff[Tx2Num]);
		}
	}
	else
	{
		FileList[Tx2Num]->close();
	}
}

void VortexClientV11::Tx3ContinueTransmit(qint64 SentBytes)
{
	if (TransmitState[Tx3Num])
	{
		if (Tx3RestBytes > 0)
		{
			QByteArray buf = (*FileList[Tx3Num]).read(qMin(WriteBuffSize, Tx3RestBytes));
			Tx3RestBytes -= TcpSocketList[Tx3Num].write(buf);
		}
		else
		{
			Tx3RestBytes = Tx3BytesToSend;
			(*FileList[Tx3Num]).seek(0);
			TcpSocketList[Tx3Num].write(WriteBuff[Tx3Num]);
		}
	}
	else
	{
		FileList[Tx3Num]->close();
	}
}

void VortexClientV11::Tx4ContinueTransmit(qint64 SentBytes)
{
	if (TransmitState[Tx4Num])
	{
		if (Tx4RestBytes > 0)
		{
			QByteArray buf = (*FileList[Tx4Num]).read(qMin(WriteBuffSize, Tx4RestBytes));
			Tx4RestBytes -= TcpSocketList[Tx4Num].write(buf);
		}
		else
		{
			Tx4RestBytes = Tx4BytesToSend;
			(*FileList[Tx4Num]).seek(0);
			TcpSocketList[Tx4Num].write(WriteBuff[Tx4Num]);
		}
	}
	else
	{
		FileList[Tx4Num]->close();
	}
}

void VortexClientV11::Tx1ClearScrean_Clicked()
{
	ui.Tx1TextBrowser->setText("");
}

void VortexClientV11::Tx2ClearScrean_Clicked()
{
	ui.Tx2TextBrowser->setText("");
}
void VortexClientV11::Tx3ClearScrean_Clicked()
{
	ui.Tx3TextBrowser->setText("");
}
void VortexClientV11::Tx4ClearScrean_Clicked()
{
	ui.Tx4TextBrowser->setText("");
}

void VortexClientV11::Tx1ConnectedProc()
{
	ui.Tx1TextBrowser->append("断开连接中");
	ui.Tx1connect->setEnabled(false);
	TcpSocketList[Tx1Num].close();
	while (TcpSocketList[Tx1Num].state() == QAbstractSocket::ClosingState)   //waiting for transmittion complete
	{
		ui.Tx1TextBrowser->append("...");
		Sleep(500);
	}
	ui.Tx1TextBrowser->append("断开成功");
	ui.Tx1connect->setEnabled(true);
	ui.Tx1connect->setText("连接");
}
void VortexClientV11::Tx2ConnectedProc()
{
	ui.Tx2TextBrowser->append("断开连接中");
	ui.Tx2connect->setEnabled(false);
	TcpSocketList[Tx2Num].close();
	while (TcpSocketList[Tx2Num].state() == QAbstractSocket::ClosingState)   //waiting for transmittion complete
	{
		ui.Tx2TextBrowser->append("...");
		Sleep(500);
	}
	ui.Tx2TextBrowser->append("断开成功");
	ui.Tx2connect->setEnabled(true);
	ui.Tx2connect->setText("连接");
}
void VortexClientV11::Tx3ConnectedProc()
{
	ui.Tx3TextBrowser->append("断开连接中");
	ui.Tx3connect->setEnabled(false);
	TcpSocketList[Tx3Num].close();
	while (TcpSocketList[Tx3Num].state() == QAbstractSocket::ClosingState)   //waiting for transmittion complete
	{
		ui.Tx3TextBrowser->append("...");
		Sleep(500);
	}
	ui.Tx3TextBrowser->append("断开成功");
	ui.Tx3connect->setEnabled(true);
	ui.Tx3connect->setText("连接");
}
void VortexClientV11::Tx4ConnectedProc()
{
	ui.Tx4TextBrowser->append("断开连接中");
	ui.Tx4connect->setEnabled(false);
	TcpSocketList[Tx4Num].close();
	while (TcpSocketList[Tx4Num].state() == QAbstractSocket::ClosingState)   //waiting for transmittion complete
	{
		ui.Tx4TextBrowser->append("...");
		Sleep(500);
	}
	ui.Tx4TextBrowser->append("断开成功");
	ui.Tx4connect->setEnabled(true);
	ui.Tx4connect->setText("连接");
}

void VortexClientV11::Tx1DisconnectedProc()
{
	ui.Tx1TextBrowser->append("连接中");
	ui.Tx1connect->setEnabled(false);
	TcpSocketList[Tx1Num].connectToHost(Addr[Tx1Num], Port[Tx1Num].toInt());
	if (TcpSocketList[Tx1Num].waitForConnected(TCPCONNECTTIMEOUT))
	{
		ui.Tx1TextBrowser->append("连接成功");
		ui.Tx1connect->setEnabled(true);
		ui.Tx1connect->setText("断开");
		return;
	}
	else
	{
		ui.Tx1TextBrowser->append("发射机 1 连接超时!");
		ui.Tx1connect->setEnabled(true);
	}
}
void VortexClientV11::Tx2DisconnectedProc()
{
	ui.Tx2TextBrowser->append("连接中");
	ui.Tx2connect->setEnabled(false);
	TcpSocketList[Tx2Num].connectToHost(Addr[Tx2Num], Port[Tx2Num].toInt());
	if (TcpSocketList[Tx2Num].waitForConnected(TCPCONNECTTIMEOUT))
	{
		ui.Tx2TextBrowser->append("连接成功");
		ui.Tx2connect->setEnabled(true);
		ui.Tx2connect->setText("断开");
		return;
	}
	else
	{
		ui.Tx2TextBrowser->append("发射机 2 连接超时!");
		ui.Tx2connect->setEnabled(true);
	}
}
void VortexClientV11::Tx3DisconnectedProc()
{
	ui.Tx3TextBrowser->append("连接中");
	ui.Tx3connect->setEnabled(false);
	TcpSocketList[Tx3Num].connectToHost(Addr[Tx3Num], Port[Tx3Num].toInt());
	if (TcpSocketList[Tx3Num].waitForConnected(TCPCONNECTTIMEOUT))
	{
		ui.Tx3TextBrowser->append("连接成功");
		ui.Tx3connect->setEnabled(true);
		ui.Tx3connect->setText("断开");
		return;
	}
	else
	{
		ui.Tx3TextBrowser->append("发射机 3 连接超时!");
		ui.Tx3connect->setEnabled(true);
	}
}
void VortexClientV11::Tx4DisconnectedProc()
{
	ui.Tx4TextBrowser->append("连接中");
	ui.Tx4connect->setEnabled(false);
	TcpSocketList[Tx4Num].connectToHost(Addr[Tx4Num], Port[Tx4Num].toInt());
	if (TcpSocketList[Tx4Num].waitForConnected(TCPCONNECTTIMEOUT))
	{
		ui.Tx4TextBrowser->append("连接成功");
		ui.Tx4connect->setEnabled(true);
		ui.Tx4connect->setText("断开");
		return;
	}
	else
	{
		ui.Tx4TextBrowser->append("发射机 4 连接超时!");
		ui.Tx4connect->setEnabled(true);
	}
}
int VortexClientV11::InputAddrFormatCheck(QString Addr, QString Port)
{
	//AddrFormat Check
	QRegExp AddrFomat("\\d{1,3}\\.{1}\\d{1,3}\\.{1}\\d{1,3}\\.{1}\\d{1,3}");
	QRegExpValidator AddrFomatCheck(AddrFomat, 0);
	int Addrpos = 0;
	int Addrstate = AddrFomatCheck.validate(Addr, Addrpos);
	bool isAddrFormatMatch = false;
	if (Addrstate == 2)
	{
		QString addrsection_1, addrsection_2, addrsection_3, addrsection_4;
		int sw = 0;
		for (int i = 0; i < Addr.size(); i++)
		{
			if (Addr[i] == '.')
				sw++;
			if (sw == 0)
				addrsection_1 += Addr[i];
			else if (sw == 1)
				addrsection_2 += Addr[i];
			else if (sw == 2)
				addrsection_3 += Addr[i];
			else if (sw == 3)
				addrsection_4 += Addr[i];
		}
		int addr1num = addrsection_1.toInt();
		int addr2num = addrsection_2.toInt();
		int addr3num = addrsection_3.toInt();
		int addr4num = addrsection_4.toInt();
		if (addr1num >= 0 && addr1num <= 255 && addr2num >= 0 && addr2num <= 255 && addr3num >= 0 && addr3num <= 255 && addr4num >= 0 && addr4num <= 255)
			isAddrFormatMatch = true;
		else
			isAddrFormatMatch = false;
	}
	else
		isAddrFormatMatch = false;
	////PortFormat Check
	QRegExp PortFomat("\\d{1,5}");
	QRegExpValidator PortFomatCheck(PortFomat, 0);
	int Portpos = 0;
	int Portstate = PortFomatCheck.validate(Port, Portpos);
	bool isPortFormatMatch = false;
	if (Portstate == 2)
	{
		int portnum = Port.toInt();
		if (portnum >= 0 && portnum <= 65535)
			isPortFormatMatch = true;
		else
			isPortFormatMatch = false;
	}
	else
		isPortFormatMatch = false;
	if ((isAddrFormatMatch) && (isPortFormatMatch))
		return 0;                                          //formatcheck  passed
	else if ((!isAddrFormatMatch) && (isPortFormatMatch))
		return 1;                                          //addr in wrong format
	else if ((isAddrFormatMatch) && (!isPortFormatMatch))
		return 2;                                          //port in wrong format
	else if ((!isAddrFormatMatch) && (!isPortFormatMatch))  //formatcheck  not passed
		return 3;
}