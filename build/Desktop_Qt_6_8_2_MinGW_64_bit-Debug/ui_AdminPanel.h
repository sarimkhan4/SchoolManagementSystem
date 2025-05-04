/********************************************************************************
** Form generated from reading UI file 'AdminPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *studentButton;
    QPushButton *teacherButton;
    QPushButton *attendanceButton;
    QPushButton *examButton;
    QPushButton *classScheduleButton;

    void setupUi(QDialog *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName("AdminPanel");
        AdminPanel->resize(410, 384);
        AdminPanel->setMaximumSize(QSize(2000, 1000));
        AdminPanel->setStyleSheet(QString::fromUtf8("QDialog#AdminPanel {\n"
"        background-color: #fef6f0;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        AdminPanel->setModal(false);
        verticalLayout = new QVBoxLayout(AdminPanel);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(82, 4, -1, 12);
        studentButton = new QPushButton(AdminPanel);
        studentButton->setObjectName("studentButton");
        studentButton->setMaximumSize(QSize(240, 40));
        studentButton->setStyleSheet(QString::fromUtf8("QPushButton#studentButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#studentButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(studentButton);

        teacherButton = new QPushButton(AdminPanel);
        teacherButton->setObjectName("teacherButton");
        teacherButton->setMaximumSize(QSize(240, 40));
        teacherButton->setStyleSheet(QString::fromUtf8("QPushButton#teacherButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#teacherButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(teacherButton);

        attendanceButton = new QPushButton(AdminPanel);
        attendanceButton->setObjectName("attendanceButton");
        attendanceButton->setMaximumSize(QSize(240, 40));
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

        verticalLayout->addWidget(attendanceButton);

        examButton = new QPushButton(AdminPanel);
        examButton->setObjectName("examButton");
        examButton->setMaximumSize(QSize(240, 40));
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

        verticalLayout->addWidget(examButton);

        classScheduleButton = new QPushButton(AdminPanel);
        classScheduleButton->setObjectName("classScheduleButton");
        classScheduleButton->setMaximumSize(QSize(240, 40));
        classScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#classScheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QPushButton#classScheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        verticalLayout->addWidget(classScheduleButton);


        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QCoreApplication::translate("AdminPanel", "Admin Panel", nullptr));
        studentButton->setText(QCoreApplication::translate("AdminPanel", "Manage Students", nullptr));
        teacherButton->setText(QCoreApplication::translate("AdminPanel", "Manage Teachers", nullptr));
        attendanceButton->setText(QCoreApplication::translate("AdminPanel", "Manage Attendance", nullptr));
        examButton->setText(QCoreApplication::translate("AdminPanel", "Manage Exams", nullptr));
        classScheduleButton->setText(QCoreApplication::translate("AdminPanel", "Manage Class Schedules", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
