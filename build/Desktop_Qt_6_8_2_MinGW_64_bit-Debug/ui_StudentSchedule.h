/********************************************************************************
** Form generated from reading UI file 'StudentSchedule.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTSCHEDULE_H
#define UI_STUDENTSCHEDULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentSchedule
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentSchedule)
    {
        if (StudentSchedule->objectName().isEmpty())
            StudentSchedule->setObjectName("StudentSchedule");
        StudentSchedule->resize(500, 400);
        verticalLayout = new QVBoxLayout(StudentSchedule);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(StudentSchedule);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(StudentSchedule);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setColumnCount(6);
        tableWidget->setRowCount(0);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(StudentSchedule);

        QMetaObject::connectSlotsByName(StudentSchedule);
    } // setupUi

    void retranslateUi(QDialog *StudentSchedule)
    {
        StudentSchedule->setWindowTitle(QCoreApplication::translate("StudentSchedule", "Class Schedule", nullptr));
        label->setText(QCoreApplication::translate("StudentSchedule", "Class Schedule", nullptr));
        tableWidget->setHorizontalHeaderLabels(QStringList{
            QCoreApplication::translate("StudentSchedule", "Teacher Name", nullptr),
            QCoreApplication::translate("StudentSchedule", "Subject", nullptr),
            QCoreApplication::translate("StudentSchedule", "Day", nullptr),
            QCoreApplication::translate("StudentSchedule", "Start Time", nullptr),
            QCoreApplication::translate("StudentSchedule", "End Time", nullptr),
            QCoreApplication::translate("StudentSchedule", "Room", nullptr)});
    } // retranslateUi

};

namespace Ui {
    class StudentSchedule: public Ui_StudentSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSCHEDULE_H
