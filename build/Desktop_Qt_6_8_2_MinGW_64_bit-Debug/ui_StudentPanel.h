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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentPanel
{
public:
    QVBoxLayout *verticalLayout;
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
        verticalLayout = new QVBoxLayout(StudentPanel);
        verticalLayout->setObjectName("verticalLayout");
        personalInfoButton = new QPushButton(StudentPanel);
        personalInfoButton->setObjectName("personalInfoButton");

        verticalLayout->addWidget(personalInfoButton);

        attendanceButton = new QPushButton(StudentPanel);
        attendanceButton->setObjectName("attendanceButton");

        verticalLayout->addWidget(attendanceButton);

        examButton = new QPushButton(StudentPanel);
        examButton->setObjectName("examButton");

        verticalLayout->addWidget(examButton);

        scheduleButton = new QPushButton(StudentPanel);
        scheduleButton->setObjectName("scheduleButton");

        verticalLayout->addWidget(scheduleButton);

        resultButton = new QPushButton(StudentPanel);
        resultButton->setObjectName("resultButton");

        verticalLayout->addWidget(resultButton);


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
