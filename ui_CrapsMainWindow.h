/********************************************************************************
** Form generated from reading UI file 'CrapsMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAPSMAINWINDOW_H
#define UI_CRAPSMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrapsMainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QSpinBox *UserBetBox;
    QLabel *currentBankValueUI;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *die2UI;
    QSpacerItem *horizontalSpacer;
    QLabel *die1UI;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *rollButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_15;
    QGridLayout *gridLayout_4;
    QLabel *BankChecker;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QLabel *BetMessage;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menubar;
    QMenu *menuCraps;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CrapsMainWindow)
    {
        if (CrapsMainWindow->objectName().isEmpty())
            CrapsMainWindow->setObjectName(QString::fromUtf8("CrapsMainWindow"));
        CrapsMainWindow->resize(764, 517);
        QPalette palette;
        QBrush brush(QColor(46, 47, 48, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(15, 79, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        CrapsMainWindow->setPalette(palette);
        centralwidget = new QWidget(CrapsMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_10 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        UserBetBox = new QSpinBox(centralwidget);
        UserBetBox->setObjectName(QString::fromUtf8("UserBetBox"));
        QPalette palette1;
        QBrush brush2(QColor(0, 85, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        UserBetBox->setPalette(palette1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        UserBetBox->setFont(font1);
        UserBetBox->setMinimum(100);
        UserBetBox->setMaximum(1000);
        UserBetBox->setSingleStep(100);
        UserBetBox->setValue(100);

        gridLayout_2->addWidget(UserBetBox, 0, 4, 1, 1);

        currentBankValueUI = new QLabel(centralwidget);
        currentBankValueUI->setObjectName(QString::fromUtf8("currentBankValueUI"));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        currentBankValueUI->setFont(font2);

        gridLayout_2->addWidget(currentBankValueUI, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 1, 1, 2);

        horizontalSpacer_11 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_4, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        die2UI = new QLabel(centralwidget);
        die2UI->setObjectName(QString::fromUtf8("die2UI"));
        die2UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/5")));

        gridLayout->addWidget(die2UI, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        die1UI = new QLabel(centralwidget);
        die1UI->setObjectName(QString::fromUtf8("die1UI"));
        die1UI->setPixmap(QPixmap(QString::fromUtf8(":/dieImages/6")));

        gridLayout->addWidget(die1UI, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout, 2, 0, 1, 4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        rollButton = new QPushButton(centralwidget);
        rollButton->setObjectName(QString::fromUtf8("rollButton"));
        QPalette palette2;
        QBrush brush3(QColor(5, 16, 85, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        rollButton->setPalette(palette2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe Print"));
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        rollButton->setFont(font3);
        rollButton->setIconSize(QSize(16, 16));
        rollButton->setCheckable(false);
        rollButton->setAutoDefault(false);
        rollButton->setFlat(false);

        gridLayout_3->addWidget(rollButton, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 4, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_15, 5, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        BankChecker = new QLabel(centralwidget);
        BankChecker->setObjectName(QString::fromUtf8("BankChecker"));

        gridLayout_4->addWidget(BankChecker, 1, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 1, 4, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 5, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_14, 5, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_6, 6, 1, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 0, 2, 2, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 1, 0, 1, 1);

        BetMessage = new QLabel(centralwidget);
        BetMessage->setObjectName(QString::fromUtf8("BetMessage"));

        gridLayout_5->addWidget(BetMessage, 1, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 7, 1, 1, 1);

        CrapsMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CrapsMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 764, 20));
        menuCraps = new QMenu(menubar);
        menuCraps->setObjectName(QString::fromUtf8("menuCraps"));
        CrapsMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CrapsMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CrapsMainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(rollButton, UserBetBox);

        menubar->addAction(menuCraps->menuAction());

        retranslateUi(CrapsMainWindow);

        rollButton->setDefault(false);


        QMetaObject::connectSlotsByName(CrapsMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CrapsMainWindow)
    {
        CrapsMainWindow->setWindowTitle(QCoreApplication::translate("CrapsMainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("CrapsMainWindow", "Bank:", nullptr));
        currentBankValueUI->setText(QCoreApplication::translate("CrapsMainWindow", "0", nullptr));
        die2UI->setText(QString());
        die1UI->setText(QString());
        rollButton->setText(QCoreApplication::translate("CrapsMainWindow", "ROLL!", nullptr));
        BankChecker->setText(QString());
        BetMessage->setText(QString());
        menuCraps->setTitle(QCoreApplication::translate("CrapsMainWindow", "Craps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrapsMainWindow: public Ui_CrapsMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAPSMAINWINDOW_H
