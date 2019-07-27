/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION_H
#define UI_QTGUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplicationClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Price;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Count;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_CalcMethod;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Reset;
    QListView *listView_Display;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Total;

    void setupUi(QMainWindow *QtGuiApplicationClass)
    {
        if (QtGuiApplicationClass->objectName().isEmpty())
            QtGuiApplicationClass->setObjectName(QStringLiteral("QtGuiApplicationClass"));
        QtGuiApplicationClass->resize(700, 523);
        QtGuiApplicationClass->setMinimumSize(QSize(700, 523));
        QtGuiApplicationClass->setMaximumSize(QSize(700, 16777215));
        centralWidget = new QWidget(QtGuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_Price = new QLineEdit(centralWidget);
        lineEdit_Price->setObjectName(QStringLiteral("lineEdit_Price"));
        lineEdit_Price->setFont(font);
        lineEdit_Price->setLayoutDirection(Qt::LeftToRight);
        lineEdit_Price->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_Price);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Count = new QLineEdit(centralWidget);
        lineEdit_Count->setObjectName(QStringLiteral("lineEdit_Count"));
        lineEdit_Count->setFont(font);
        lineEdit_Count->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lineEdit_Count);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        comboBox_CalcMethod = new QComboBox(centralWidget);
        comboBox_CalcMethod->addItem(QString());
        comboBox_CalcMethod->addItem(QString());
        comboBox_CalcMethod->addItem(QString());
        comboBox_CalcMethod->setObjectName(QStringLiteral("comboBox_CalcMethod"));
        comboBox_CalcMethod->setFont(font);

        horizontalLayout_3->addWidget(comboBox_CalcMethod);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_OK = new QPushButton(centralWidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setFont(font);

        verticalLayout->addWidget(pushButton_OK);

        pushButton_Reset = new QPushButton(centralWidget);
        pushButton_Reset->setObjectName(QStringLiteral("pushButton_Reset"));
        pushButton_Reset->setFont(font);

        verticalLayout->addWidget(pushButton_Reset);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        listView_Display = new QListView(centralWidget);
        listView_Display->setObjectName(QStringLiteral("listView_Display"));

        verticalLayout_3->addWidget(listView_Display);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_Total = new QLabel(centralWidget);
        label_Total->setObjectName(QStringLiteral("label_Total"));
        label_Total->setMinimumSize(QSize(200, 0));
        label_Total->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(36);
        label_Total->setFont(font1);

        horizontalLayout_4->addWidget(label_Total);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        QtGuiApplicationClass->setCentralWidget(centralWidget);

        retranslateUi(QtGuiApplicationClass);

        QMetaObject::connectSlotsByName(QtGuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplicationClass)
    {
        QtGuiApplicationClass->setWindowTitle(QApplication::translate("QtGuiApplicationClass", "\345\225\206\345\234\272\346\224\266\351\223\266\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("QtGuiApplicationClass", "\345\215\225\344\273\267\357\274\232", nullptr));
        lineEdit_Price->setText(QApplication::translate("QtGuiApplicationClass", "0.00", nullptr));
        label_2->setText(QApplication::translate("QtGuiApplicationClass", "\346\225\260\351\207\217\357\274\232", nullptr));
        lineEdit_Count->setText(QApplication::translate("QtGuiApplicationClass", "1", nullptr));
        label_3->setText(QApplication::translate("QtGuiApplicationClass", "\350\256\241\347\256\227\346\226\271\345\274\217\357\274\232", nullptr));
        comboBox_CalcMethod->setItemText(0, QApplication::translate("QtGuiApplicationClass", "\346\255\243\345\270\270\346\224\266\350\264\271", nullptr));
        comboBox_CalcMethod->setItemText(1, QApplication::translate("QtGuiApplicationClass", "\346\273\241300\345\207\217100", nullptr));
        comboBox_CalcMethod->setItemText(2, QApplication::translate("QtGuiApplicationClass", "\346\211\223\345\205\253\346\212\230", nullptr));

        pushButton_OK->setText(QApplication::translate("QtGuiApplicationClass", "\347\241\256\345\256\232", nullptr));
        pushButton_Reset->setText(QApplication::translate("QtGuiApplicationClass", "\351\207\215\347\275\256", nullptr));
        label_4->setText(QApplication::translate("QtGuiApplicationClass", "\346\200\273\350\256\241\357\274\232", nullptr));
        label_Total->setText(QApplication::translate("QtGuiApplicationClass", "0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplicationClass: public Ui_QtGuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION_H
