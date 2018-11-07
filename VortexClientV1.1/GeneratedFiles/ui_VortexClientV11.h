/********************************************************************************
** Form generated from reading UI file 'VortexClientV11.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VORTEXCLIENTV11_H
#define UI_VORTEXCLIENTV11_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VortexClientV11Class
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *Tx1GroupBox;
    QGridLayout *gridLayout_3;
    QLabel *Tx1AddrLabel;
    QLineEdit *Tx1Addr;
    QLabel *Tx1PortLabel;
    QLineEdit *Tx1Port;
    QPushButton *Tx1connect;
    QLineEdit *Tx1FilePath;
    QPushButton *Tx1Open;
    QPushButton *Tx1Transmit;
    QPushButton *Tx1ClearScreen;
    QTextBrowser *Tx1TextBrowser;
    QGroupBox *Tx2GroupBox;
    QGridLayout *gridLayout_4;
    QLabel *Tx1AddrLabel_2;
    QLineEdit *Tx2Addr;
    QLabel *Tx2PortLabel;
    QLineEdit *Tx2Port;
    QPushButton *Tx2connect;
    QLineEdit *Tx2FilePath;
    QPushButton *Tx2Open;
    QPushButton *Tx2Transmit;
    QPushButton *Tx2ClearScreen;
    QTextBrowser *Tx2TextBrowser;
    QGroupBox *Tx3GroupBox;
    QGridLayout *gridLayout_5;
    QLabel *Tx3AddrLabel;
    QLineEdit *Tx3Addr;
    QLabel *Tx3PortLabel;
    QLineEdit *Tx3Port;
    QPushButton *Tx3connect;
    QLineEdit *Tx3FilePath;
    QPushButton *Tx3Open;
    QPushButton *Tx3Transmit;
    QPushButton *Tx3ClearScreen;
    QTextBrowser *Tx3TextBrowser;
    QGroupBox *Tx4GroupBox;
    QGridLayout *gridLayout_2;
    QLabel *Tx4AddrLabel;
    QLineEdit *Tx4Addr;
    QLabel *Tx4PortLabel;
    QLineEdit *Tx4Port;
    QPushButton *Tx4connect;
    QLineEdit *Tx4FilePath;
    QPushButton *Tx4Open;
    QPushButton *Tx4Transmit;
    QPushButton *Tx4ClearScreen;
    QTextBrowser *Tx4TextBrowser;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VortexClientV11Class)
    {
        if (VortexClientV11Class->objectName().isEmpty())
            VortexClientV11Class->setObjectName(QStringLiteral("VortexClientV11Class"));
        VortexClientV11Class->resize(848, 666);
        centralWidget = new QWidget(VortexClientV11Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(9, 9, 820, 590));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Tx1GroupBox = new QGroupBox(tab);
        Tx1GroupBox->setObjectName(QStringLiteral("Tx1GroupBox"));
        Tx1GroupBox->setMinimumSize(QSize(395, 270));
        Tx1GroupBox->setMaximumSize(QSize(395, 270));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(13);
        Tx1GroupBox->setFont(font);
        gridLayout_3 = new QGridLayout(Tx1GroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Tx1AddrLabel = new QLabel(Tx1GroupBox);
        Tx1AddrLabel->setObjectName(QStringLiteral("Tx1AddrLabel"));
        QFont font1;
        font1.setPointSize(12);
        Tx1AddrLabel->setFont(font1);

        gridLayout_3->addWidget(Tx1AddrLabel, 0, 0, 1, 1);

        Tx1Addr = new QLineEdit(Tx1GroupBox);
        Tx1Addr->setObjectName(QStringLiteral("Tx1Addr"));
        Tx1Addr->setMinimumSize(QSize(100, 0));
        Tx1Addr->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(9);
        Tx1Addr->setFont(font2);

        gridLayout_3->addWidget(Tx1Addr, 0, 1, 1, 1);

        Tx1PortLabel = new QLabel(Tx1GroupBox);
        Tx1PortLabel->setObjectName(QStringLiteral("Tx1PortLabel"));
        Tx1PortLabel->setFont(font1);

        gridLayout_3->addWidget(Tx1PortLabel, 0, 2, 1, 1);

        Tx1Port = new QLineEdit(Tx1GroupBox);
        Tx1Port->setObjectName(QStringLiteral("Tx1Port"));
        Tx1Port->setMinimumSize(QSize(40, 0));
        Tx1Port->setMaximumSize(QSize(40, 16777215));
        Tx1Port->setFont(font2);

        gridLayout_3->addWidget(Tx1Port, 0, 3, 1, 1);

        Tx1connect = new QPushButton(Tx1GroupBox);
        Tx1connect->setObjectName(QStringLiteral("Tx1connect"));

        gridLayout_3->addWidget(Tx1connect, 0, 4, 1, 1);

        Tx1FilePath = new QLineEdit(Tx1GroupBox);
        Tx1FilePath->setObjectName(QStringLiteral("Tx1FilePath"));
        Tx1FilePath->setFont(font2);

        gridLayout_3->addWidget(Tx1FilePath, 1, 0, 1, 4);

        Tx1Open = new QPushButton(Tx1GroupBox);
        Tx1Open->setObjectName(QStringLiteral("Tx1Open"));

        gridLayout_3->addWidget(Tx1Open, 1, 4, 1, 1);

        Tx1Transmit = new QPushButton(Tx1GroupBox);
        Tx1Transmit->setObjectName(QStringLiteral("Tx1Transmit"));

        gridLayout_3->addWidget(Tx1Transmit, 2, 0, 1, 2);

        Tx1ClearScreen = new QPushButton(Tx1GroupBox);
        Tx1ClearScreen->setObjectName(QStringLiteral("Tx1ClearScreen"));

        gridLayout_3->addWidget(Tx1ClearScreen, 2, 2, 1, 3);

        Tx1TextBrowser = new QTextBrowser(Tx1GroupBox);
        Tx1TextBrowser->setObjectName(QStringLiteral("Tx1TextBrowser"));
        Tx1TextBrowser->setFont(font2);

        gridLayout_3->addWidget(Tx1TextBrowser, 3, 0, 1, 5);


        gridLayout->addWidget(Tx1GroupBox, 0, 0, 1, 1);

        Tx2GroupBox = new QGroupBox(tab);
        Tx2GroupBox->setObjectName(QStringLiteral("Tx2GroupBox"));
        Tx2GroupBox->setMinimumSize(QSize(395, 270));
        Tx2GroupBox->setMaximumSize(QSize(395, 270));
        Tx2GroupBox->setFont(font);
        gridLayout_4 = new QGridLayout(Tx2GroupBox);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Tx1AddrLabel_2 = new QLabel(Tx2GroupBox);
        Tx1AddrLabel_2->setObjectName(QStringLiteral("Tx1AddrLabel_2"));
        Tx1AddrLabel_2->setFont(font1);

        gridLayout_4->addWidget(Tx1AddrLabel_2, 0, 0, 1, 1);

        Tx2Addr = new QLineEdit(Tx2GroupBox);
        Tx2Addr->setObjectName(QStringLiteral("Tx2Addr"));
        Tx2Addr->setMinimumSize(QSize(100, 0));
        Tx2Addr->setMaximumSize(QSize(100, 16777215));
        Tx2Addr->setFont(font2);

        gridLayout_4->addWidget(Tx2Addr, 0, 1, 1, 1);

        Tx2PortLabel = new QLabel(Tx2GroupBox);
        Tx2PortLabel->setObjectName(QStringLiteral("Tx2PortLabel"));
        Tx2PortLabel->setFont(font1);

        gridLayout_4->addWidget(Tx2PortLabel, 0, 2, 1, 1);

        Tx2Port = new QLineEdit(Tx2GroupBox);
        Tx2Port->setObjectName(QStringLiteral("Tx2Port"));
        Tx2Port->setMinimumSize(QSize(40, 0));
        Tx2Port->setMaximumSize(QSize(40, 16777215));
        Tx2Port->setFont(font2);

        gridLayout_4->addWidget(Tx2Port, 0, 3, 1, 1);

        Tx2connect = new QPushButton(Tx2GroupBox);
        Tx2connect->setObjectName(QStringLiteral("Tx2connect"));

        gridLayout_4->addWidget(Tx2connect, 0, 4, 1, 1);

        Tx2FilePath = new QLineEdit(Tx2GroupBox);
        Tx2FilePath->setObjectName(QStringLiteral("Tx2FilePath"));
        Tx2FilePath->setFont(font2);

        gridLayout_4->addWidget(Tx2FilePath, 1, 0, 1, 4);

        Tx2Open = new QPushButton(Tx2GroupBox);
        Tx2Open->setObjectName(QStringLiteral("Tx2Open"));

        gridLayout_4->addWidget(Tx2Open, 1, 4, 1, 1);

        Tx2Transmit = new QPushButton(Tx2GroupBox);
        Tx2Transmit->setObjectName(QStringLiteral("Tx2Transmit"));

        gridLayout_4->addWidget(Tx2Transmit, 2, 0, 1, 2);

        Tx2ClearScreen = new QPushButton(Tx2GroupBox);
        Tx2ClearScreen->setObjectName(QStringLiteral("Tx2ClearScreen"));

        gridLayout_4->addWidget(Tx2ClearScreen, 2, 2, 1, 3);

        Tx2TextBrowser = new QTextBrowser(Tx2GroupBox);
        Tx2TextBrowser->setObjectName(QStringLiteral("Tx2TextBrowser"));
        Tx2TextBrowser->setFont(font2);

        gridLayout_4->addWidget(Tx2TextBrowser, 3, 0, 1, 5);


        gridLayout->addWidget(Tx2GroupBox, 0, 1, 1, 1);

        Tx3GroupBox = new QGroupBox(tab);
        Tx3GroupBox->setObjectName(QStringLiteral("Tx3GroupBox"));
        Tx3GroupBox->setMinimumSize(QSize(395, 270));
        Tx3GroupBox->setMaximumSize(QSize(395, 270));
        Tx3GroupBox->setFont(font);
        gridLayout_5 = new QGridLayout(Tx3GroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        Tx3AddrLabel = new QLabel(Tx3GroupBox);
        Tx3AddrLabel->setObjectName(QStringLiteral("Tx3AddrLabel"));
        Tx3AddrLabel->setFont(font1);

        gridLayout_5->addWidget(Tx3AddrLabel, 0, 0, 1, 1);

        Tx3Addr = new QLineEdit(Tx3GroupBox);
        Tx3Addr->setObjectName(QStringLiteral("Tx3Addr"));
        Tx3Addr->setMinimumSize(QSize(100, 0));
        Tx3Addr->setMaximumSize(QSize(100, 16777215));
        Tx3Addr->setFont(font2);

        gridLayout_5->addWidget(Tx3Addr, 0, 1, 1, 1);

        Tx3PortLabel = new QLabel(Tx3GroupBox);
        Tx3PortLabel->setObjectName(QStringLiteral("Tx3PortLabel"));
        Tx3PortLabel->setFont(font1);

        gridLayout_5->addWidget(Tx3PortLabel, 0, 2, 1, 1);

        Tx3Port = new QLineEdit(Tx3GroupBox);
        Tx3Port->setObjectName(QStringLiteral("Tx3Port"));
        Tx3Port->setMinimumSize(QSize(40, 0));
        Tx3Port->setMaximumSize(QSize(40, 16777215));
        Tx3Port->setFont(font2);

        gridLayout_5->addWidget(Tx3Port, 0, 3, 1, 1);

        Tx3connect = new QPushButton(Tx3GroupBox);
        Tx3connect->setObjectName(QStringLiteral("Tx3connect"));

        gridLayout_5->addWidget(Tx3connect, 0, 4, 1, 1);

        Tx3FilePath = new QLineEdit(Tx3GroupBox);
        Tx3FilePath->setObjectName(QStringLiteral("Tx3FilePath"));
        Tx3FilePath->setFont(font2);

        gridLayout_5->addWidget(Tx3FilePath, 1, 0, 1, 4);

        Tx3Open = new QPushButton(Tx3GroupBox);
        Tx3Open->setObjectName(QStringLiteral("Tx3Open"));

        gridLayout_5->addWidget(Tx3Open, 1, 4, 1, 1);

        Tx3Transmit = new QPushButton(Tx3GroupBox);
        Tx3Transmit->setObjectName(QStringLiteral("Tx3Transmit"));

        gridLayout_5->addWidget(Tx3Transmit, 2, 0, 1, 2);

        Tx3ClearScreen = new QPushButton(Tx3GroupBox);
        Tx3ClearScreen->setObjectName(QStringLiteral("Tx3ClearScreen"));

        gridLayout_5->addWidget(Tx3ClearScreen, 2, 2, 1, 3);

        Tx3TextBrowser = new QTextBrowser(Tx3GroupBox);
        Tx3TextBrowser->setObjectName(QStringLiteral("Tx3TextBrowser"));
        Tx3TextBrowser->setFont(font2);

        gridLayout_5->addWidget(Tx3TextBrowser, 3, 0, 1, 5);


        gridLayout->addWidget(Tx3GroupBox, 1, 0, 1, 1);

        Tx4GroupBox = new QGroupBox(tab);
        Tx4GroupBox->setObjectName(QStringLiteral("Tx4GroupBox"));
        Tx4GroupBox->setMinimumSize(QSize(395, 270));
        Tx4GroupBox->setMaximumSize(QSize(395, 270));
        Tx4GroupBox->setFont(font);
        gridLayout_2 = new QGridLayout(Tx4GroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Tx4AddrLabel = new QLabel(Tx4GroupBox);
        Tx4AddrLabel->setObjectName(QStringLiteral("Tx4AddrLabel"));
        Tx4AddrLabel->setFont(font1);

        gridLayout_2->addWidget(Tx4AddrLabel, 0, 0, 1, 1);

        Tx4Addr = new QLineEdit(Tx4GroupBox);
        Tx4Addr->setObjectName(QStringLiteral("Tx4Addr"));
        Tx4Addr->setMinimumSize(QSize(100, 0));
        Tx4Addr->setMaximumSize(QSize(100, 16777215));
        Tx4Addr->setFont(font2);

        gridLayout_2->addWidget(Tx4Addr, 0, 1, 1, 1);

        Tx4PortLabel = new QLabel(Tx4GroupBox);
        Tx4PortLabel->setObjectName(QStringLiteral("Tx4PortLabel"));
        Tx4PortLabel->setFont(font1);

        gridLayout_2->addWidget(Tx4PortLabel, 0, 2, 1, 1);

        Tx4Port = new QLineEdit(Tx4GroupBox);
        Tx4Port->setObjectName(QStringLiteral("Tx4Port"));
        Tx4Port->setMinimumSize(QSize(40, 0));
        Tx4Port->setMaximumSize(QSize(40, 16777215));
        Tx4Port->setFont(font2);

        gridLayout_2->addWidget(Tx4Port, 0, 3, 1, 1);

        Tx4connect = new QPushButton(Tx4GroupBox);
        Tx4connect->setObjectName(QStringLiteral("Tx4connect"));

        gridLayout_2->addWidget(Tx4connect, 0, 4, 1, 1);

        Tx4FilePath = new QLineEdit(Tx4GroupBox);
        Tx4FilePath->setObjectName(QStringLiteral("Tx4FilePath"));
        Tx4FilePath->setFont(font2);

        gridLayout_2->addWidget(Tx4FilePath, 1, 0, 1, 4);

        Tx4Open = new QPushButton(Tx4GroupBox);
        Tx4Open->setObjectName(QStringLiteral("Tx4Open"));

        gridLayout_2->addWidget(Tx4Open, 1, 4, 1, 1);

        Tx4Transmit = new QPushButton(Tx4GroupBox);
        Tx4Transmit->setObjectName(QStringLiteral("Tx4Transmit"));

        gridLayout_2->addWidget(Tx4Transmit, 2, 0, 1, 2);

        Tx4ClearScreen = new QPushButton(Tx4GroupBox);
        Tx4ClearScreen->setObjectName(QStringLiteral("Tx4ClearScreen"));

        gridLayout_2->addWidget(Tx4ClearScreen, 2, 2, 1, 3);

        Tx4TextBrowser = new QTextBrowser(Tx4GroupBox);
        Tx4TextBrowser->setObjectName(QStringLiteral("Tx4TextBrowser"));
        Tx4TextBrowser->setFont(font2);

        gridLayout_2->addWidget(Tx4TextBrowser, 3, 0, 1, 5);


        gridLayout->addWidget(Tx4GroupBox, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        VortexClientV11Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VortexClientV11Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 848, 23));
        VortexClientV11Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VortexClientV11Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VortexClientV11Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VortexClientV11Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VortexClientV11Class->setStatusBar(statusBar);

        retranslateUi(VortexClientV11Class);
        QObject::connect(Tx1connect, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx1Connecton_Clicked()));
        QObject::connect(Tx1Open, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx1Open_Clicked()));
        QObject::connect(Tx1Transmit, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx1Transmit_Clicked()));
        QObject::connect(Tx1ClearScreen, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx1ClearScrean_Clicked()));
        QObject::connect(Tx2connect, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx2Connecton_Clicked()));
        QObject::connect(Tx2Open, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx2Open_Clicked()));
        QObject::connect(Tx2Transmit, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx2Transmit_Clicked()));
        QObject::connect(Tx2ClearScreen, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx2ClearScrean_Clicked()));
        QObject::connect(Tx3connect, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx3Connecton_Clicked()));
        QObject::connect(Tx3Open, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx3Open_Clicked()));
        QObject::connect(Tx3Transmit, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx3Transmit_Clicked()));
        QObject::connect(Tx3ClearScreen, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx3ClearScrean_Clicked()));
        QObject::connect(Tx4connect, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx4Connecton_Clicked()));
        QObject::connect(Tx4Open, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx4Open_Clicked()));
        QObject::connect(Tx4Transmit, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx4Transmit_Clicked()));
        QObject::connect(Tx4ClearScreen, SIGNAL(clicked()), VortexClientV11Class, SLOT(Tx4ClearScrean_Clicked()));

        QMetaObject::connectSlotsByName(VortexClientV11Class);
    } // setupUi

    void retranslateUi(QMainWindow *VortexClientV11Class)
    {
        VortexClientV11Class->setWindowTitle(QApplication::translate("VortexClientV11Class", "VortexClientV11", Q_NULLPTR));
        Tx1GroupBox->setTitle(QApplication::translate("VortexClientV11Class", "\345\217\221\345\260\204\346\234\272 1", Q_NULLPTR));
        Tx1AddrLabel->setText(QApplication::translate("VortexClientV11Class", "IP \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        Tx1Addr->setText(QApplication::translate("VortexClientV11Class", "192.168.101.102", Q_NULLPTR));
        Tx1PortLabel->setText(QApplication::translate("VortexClientV11Class", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        Tx1Port->setText(QApplication::translate("VortexClientV11Class", "65536", Q_NULLPTR));
        Tx1connect->setText(QApplication::translate("VortexClientV11Class", "\350\277\236\346\216\245", Q_NULLPTR));
        Tx1Open->setText(QApplication::translate("VortexClientV11Class", "\346\211\223\345\274\200", Q_NULLPTR));
        Tx1Transmit->setText(QApplication::translate("VortexClientV11Class", "\345\217\221\351\200\201", Q_NULLPTR));
        Tx1ClearScreen->setText(QApplication::translate("VortexClientV11Class", "\346\270\205\345\261\217", Q_NULLPTR));
        Tx2GroupBox->setTitle(QApplication::translate("VortexClientV11Class", "\345\217\221\345\260\204\346\234\272 2", Q_NULLPTR));
        Tx1AddrLabel_2->setText(QApplication::translate("VortexClientV11Class", "IP \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        Tx2Addr->setText(QApplication::translate("VortexClientV11Class", "192.168.101.102", Q_NULLPTR));
        Tx2PortLabel->setText(QApplication::translate("VortexClientV11Class", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        Tx2Port->setText(QApplication::translate("VortexClientV11Class", "65536", Q_NULLPTR));
        Tx2connect->setText(QApplication::translate("VortexClientV11Class", "\350\277\236\346\216\245", Q_NULLPTR));
        Tx2Open->setText(QApplication::translate("VortexClientV11Class", "\346\211\223\345\274\200", Q_NULLPTR));
        Tx2Transmit->setText(QApplication::translate("VortexClientV11Class", "\345\217\221\351\200\201", Q_NULLPTR));
        Tx2ClearScreen->setText(QApplication::translate("VortexClientV11Class", "\346\270\205\345\261\217", Q_NULLPTR));
        Tx3GroupBox->setTitle(QApplication::translate("VortexClientV11Class", "\345\217\221\345\260\204\346\234\272 3", Q_NULLPTR));
        Tx3AddrLabel->setText(QApplication::translate("VortexClientV11Class", "IP \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        Tx3Addr->setText(QApplication::translate("VortexClientV11Class", "192.168.101.102", Q_NULLPTR));
        Tx3PortLabel->setText(QApplication::translate("VortexClientV11Class", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        Tx3Port->setText(QApplication::translate("VortexClientV11Class", "65536", Q_NULLPTR));
        Tx3connect->setText(QApplication::translate("VortexClientV11Class", "\350\277\236\346\216\245", Q_NULLPTR));
        Tx3Open->setText(QApplication::translate("VortexClientV11Class", "\346\211\223\345\274\200", Q_NULLPTR));
        Tx3Transmit->setText(QApplication::translate("VortexClientV11Class", "\345\217\221\351\200\201", Q_NULLPTR));
        Tx3ClearScreen->setText(QApplication::translate("VortexClientV11Class", "\346\270\205\345\261\217", Q_NULLPTR));
        Tx4GroupBox->setTitle(QApplication::translate("VortexClientV11Class", "\345\217\221\345\260\204\346\234\272 4", Q_NULLPTR));
        Tx4AddrLabel->setText(QApplication::translate("VortexClientV11Class", "IP \345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        Tx4Addr->setText(QApplication::translate("VortexClientV11Class", "192.168.101.102", Q_NULLPTR));
        Tx4PortLabel->setText(QApplication::translate("VortexClientV11Class", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        Tx4Port->setText(QApplication::translate("VortexClientV11Class", "65536", Q_NULLPTR));
        Tx4connect->setText(QApplication::translate("VortexClientV11Class", "\350\277\236\346\216\245", Q_NULLPTR));
        Tx4Open->setText(QApplication::translate("VortexClientV11Class", "\346\211\223\345\274\200", Q_NULLPTR));
        Tx4Transmit->setText(QApplication::translate("VortexClientV11Class", "\345\217\221\351\200\201", Q_NULLPTR));
        Tx4ClearScreen->setText(QApplication::translate("VortexClientV11Class", "\346\270\205\345\261\217", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VortexClientV11Class", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VortexClientV11Class", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VortexClientV11Class: public Ui_VortexClientV11Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VORTEXCLIENTV11_H
