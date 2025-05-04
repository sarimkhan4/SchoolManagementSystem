/********************************************************************************
** Form generated from reading UI file 'StudentInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFO_H
#define UI_STUDENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentInfo
{
public:
    QLabel *titleLabel;
    QPushButton *btnClose;
    QLineEdit *lineEditClass;
    QLineEdit *lineEditName;
    QLabel *label_id;
    QLineEdit *lineEditId;
    QLabel *label_class;
    QLabel *label_name;
    QLabel *label_password;
    QLineEdit *lineEditPassword;

    void setupUi(QDialog *StudentInfo)
    {
        if (StudentInfo->objectName().isEmpty())
            StudentInfo->setObjectName("StudentInfo");
        StudentInfo->resize(452, 318);
        StudentInfo->setStyleSheet(QString::fromUtf8("QDialog#StudentInfo {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentInfo);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(10, 20, 431, 26));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnClose = new QPushButton(StudentInfo);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(20, 260, 411, 41));
        btnClose->setStyleSheet(QString::fromUtf8("QPushButton#btnClose {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#btnClose:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        btnClose->setCheckable(false);
        btnClose->setChecked(false);
        lineEditClass = new QLineEdit(StudentInfo);
        lineEditClass->setObjectName("lineEditClass");
        lineEditClass->setGeometry(QRect(110, 160, 321, 31));
        lineEditClass->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditClass {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        lineEditClass->setReadOnly(true);
        lineEditName = new QLineEdit(StudentInfo);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(110, 110, 321, 31));
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditName {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        lineEditName->setReadOnly(true);
        label_id = new QLabel(StudentInfo);
        label_id->setObjectName("label_id");
        label_id->setGeometry(QRect(20, 60, 81, 31));
        label_id->setStyleSheet(QString::fromUtf8("QLabel#label_id {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        lineEditId = new QLineEdit(StudentInfo);
        lineEditId->setObjectName("lineEditId");
        lineEditId->setGeometry(QRect(110, 60, 321, 31));
        lineEditId->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditId {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        lineEditId->setReadOnly(true);
        label_class = new QLabel(StudentInfo);
        label_class->setObjectName("label_class");
        label_class->setGeometry(QRect(20, 160, 61, 31));
        label_class->setStyleSheet(QString::fromUtf8("QLabel#label_class {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        label_name = new QLabel(StudentInfo);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(20, 100, 71, 41));
        label_name->setStyleSheet(QString::fromUtf8("QLabel#label_name {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        label_password = new QLabel(StudentInfo);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 200, 91, 51));
        label_password->setStyleSheet(QString::fromUtf8("QLabel#label_password {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        lineEditPassword = new QLineEdit(StudentInfo);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(110, 210, 321, 31));
        lineEditPassword->setStyleSheet(QString::fromUtf8("QLineEdit#lineEditPassword {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEditPassword->setReadOnly(true);

        retranslateUi(StudentInfo);

        QMetaObject::connectSlotsByName(StudentInfo);
    } // setupUi

    void retranslateUi(QDialog *StudentInfo)
    {
        StudentInfo->setWindowTitle(QCoreApplication::translate("StudentInfo", "Student Information", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentInfo", "Student Profile", nullptr));
        btnClose->setText(QCoreApplication::translate("StudentInfo", "Close", nullptr));
        label_id->setText(QCoreApplication::translate("StudentInfo", "Student ID:", nullptr));
        label_class->setText(QCoreApplication::translate("StudentInfo", "Class", nullptr));
        label_name->setText(QCoreApplication::translate("StudentInfo", "Name", nullptr));
        label_password->setText(QCoreApplication::translate("StudentInfo", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfo: public Ui_StudentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFO_H
