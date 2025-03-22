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
    QPushButton *classScheduleButton;
    QPushButton *attendanceButton;
    QPushButton *examButton;

    void setupUi(QDialog *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName("AdminPanel");
        AdminPanel->resize(400, 300);
        verticalLayout = new QVBoxLayout(AdminPanel);
        verticalLayout->setObjectName("verticalLayout");
        studentButton = new QPushButton(AdminPanel);
        studentButton->setObjectName("studentButton");

        verticalLayout->addWidget(studentButton);

        teacherButton = new QPushButton(AdminPanel);
        teacherButton->setObjectName("teacherButton");

        verticalLayout->addWidget(teacherButton);

        classScheduleButton = new QPushButton(AdminPanel);
        classScheduleButton->setObjectName("classScheduleButton");

        verticalLayout->addWidget(classScheduleButton);

        attendanceButton = new QPushButton(AdminPanel);
        attendanceButton->setObjectName("attendanceButton");

        verticalLayout->addWidget(attendanceButton);

        examButton = new QPushButton(AdminPanel);
        examButton->setObjectName("examButton");

        verticalLayout->addWidget(examButton);


        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QDialog *AdminPanel)
    {
        AdminPanel->setWindowTitle(QCoreApplication::translate("AdminPanel", "Admin Panel", nullptr));
        studentButton->setText(QCoreApplication::translate("AdminPanel", "Manage Students", nullptr));
        teacherButton->setText(QCoreApplication::translate("AdminPanel", "Manage Teachers", nullptr));
        classScheduleButton->setText(QCoreApplication::translate("AdminPanel", "Manage Class Schedules", nullptr));
        attendanceButton->setText(QCoreApplication::translate("AdminPanel", "Manage Attendance", nullptr));
        examButton->setText(QCoreApplication::translate("AdminPanel", "Manage Exams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
