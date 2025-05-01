/********************************************************************************
** Form generated from reading UI file 'TeacherPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPANEL_H
#define UI_TEACHERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeacherPanel
{
public:
    QPushButton *btnClassSchedule;
    QPushButton *btnExamResult;
    QPushButton *btnAttendanceViewing;
    QPushButton *btnExamManagement;

    void setupUi(QDialog *TeacherPanel)
    {
        if (TeacherPanel->objectName().isEmpty())
            TeacherPanel->setObjectName("TeacherPanel");
        TeacherPanel->resize(398, 332);
        btnClassSchedule = new QPushButton(TeacherPanel);
        btnClassSchedule->setObjectName("btnClassSchedule");
        btnClassSchedule->setGeometry(QRect(50, 40, 300, 40));
        btnExamResult = new QPushButton(TeacherPanel);
        btnExamResult->setObjectName("btnExamResult");
        btnExamResult->setGeometry(QRect(50, 110, 300, 40));
        btnAttendanceViewing = new QPushButton(TeacherPanel);
        btnAttendanceViewing->setObjectName("btnAttendanceViewing");
        btnAttendanceViewing->setGeometry(QRect(50, 180, 300, 40));
        btnExamManagement = new QPushButton(TeacherPanel);
        btnExamManagement->setObjectName("btnExamManagement");
        btnExamManagement->setGeometry(QRect(50, 250, 300, 40));

        retranslateUi(TeacherPanel);

        QMetaObject::connectSlotsByName(TeacherPanel);
    } // setupUi

    void retranslateUi(QDialog *TeacherPanel)
    {
        TeacherPanel->setWindowTitle(QCoreApplication::translate("TeacherPanel", "Teacher Panel", nullptr));
        btnClassSchedule->setText(QCoreApplication::translate("TeacherPanel", "View Class Schedule", nullptr));
        btnExamResult->setText(QCoreApplication::translate("TeacherPanel", "Manage Exam Results", nullptr));
        btnAttendanceViewing->setText(QCoreApplication::translate("TeacherPanel", "View Attendance", nullptr));
        btnExamManagement->setText(QCoreApplication::translate("TeacherPanel", "View Assigned Exams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherPanel: public Ui_TeacherPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPANEL_H
