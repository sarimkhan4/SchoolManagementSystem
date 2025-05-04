/********************************************************************************
** Form generated from reading UI file 'StudentPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPANEL_H
#define UI_STUDENTPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentPanel
{
public:
    QPushButton *personalInfoButton;
    QPushButton *attendanceButton;
    QPushButton *examButton;
    QPushButton *scheduleButton;
    QPushButton *resultButton;

    void setupUi(QDialog *StudentPanel)
    {
        if (StudentPanel->objectName().isEmpty())
            StudentPanel->setObjectName("StudentPanel");
        StudentPanel->resize(400, 350);
        StudentPanel->setStyleSheet(QString::fromUtf8("QDialog#StudentPanel {\n"
"        background-color: #fef6f0;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        personalInfoButton = new QPushButton(StudentPanel);
        personalInfoButton->setObjectName("personalInfoButton");
        personalInfoButton->setGeometry(QRect(9, 40, 381, 41));
        personalInfoButton->setStyleSheet(QString::fromUtf8("QPushButton#personalInfoButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#personalInfoButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        attendanceButton = new QPushButton(StudentPanel);
        attendanceButton->setObjectName("attendanceButton");
        attendanceButton->setGeometry(QRect(9, 101, 381, 41));
        attendanceButton->setStyleSheet(QString::fromUtf8("QPushButton#attendanceButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#attendanceButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        examButton = new QPushButton(StudentPanel);
        examButton->setObjectName("examButton");
        examButton->setGeometry(QRect(9, 162, 381, 41));
        examButton->setStyleSheet(QString::fromUtf8("QPushButton#examButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#examButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        scheduleButton = new QPushButton(StudentPanel);
        scheduleButton->setObjectName("scheduleButton");
        scheduleButton->setGeometry(QRect(9, 223, 381, 41));
        scheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#scheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#scheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        resultButton = new QPushButton(StudentPanel);
        resultButton->setObjectName("resultButton");
        resultButton->setGeometry(QRect(9, 284, 381, 41));
        resultButton->setStyleSheet(QString::fromUtf8("QPushButton#resultButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#resultButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        retranslateUi(StudentPanel);

        QMetaObject::connectSlotsByName(StudentPanel);
    } // setupUi

    void retranslateUi(QDialog *StudentPanel)
    {
        StudentPanel->setWindowTitle(QCoreApplication::translate("StudentPanel", "Student Panel", nullptr));
        personalInfoButton->setText(QCoreApplication::translate("StudentPanel", "Personal Info", nullptr));
        attendanceButton->setText(QCoreApplication::translate("StudentPanel", "My Attendance", nullptr));
        examButton->setText(QCoreApplication::translate("StudentPanel", "Assigned Exams", nullptr));
        scheduleButton->setText(QCoreApplication::translate("StudentPanel", "Class Schedule", nullptr));
        resultButton->setText(QCoreApplication::translate("StudentPanel", "My Results", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPanel: public Ui_StudentPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPANEL_H
