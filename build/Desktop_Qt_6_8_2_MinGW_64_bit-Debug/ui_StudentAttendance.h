/********************************************************************************
** Form generated from reading UI file 'StudentAttendance.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTATTENDANCE_H
#define UI_STUDENTATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentAttendance
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentAttendance)
    {
        if (StudentAttendance->objectName().isEmpty())
            StudentAttendance->setObjectName("StudentAttendance");
        StudentAttendance->resize(450, 400);
        verticalLayout = new QVBoxLayout(StudentAttendance);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(StudentAttendance);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        tableWidget = new QTableWidget(StudentAttendance);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setColumnCount(2);
        tableWidget->setRowCount(0);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(StudentAttendance);

        QMetaObject::connectSlotsByName(StudentAttendance);
    } // setupUi

    void retranslateUi(QDialog *StudentAttendance)
    {
        StudentAttendance->setWindowTitle(QCoreApplication::translate("StudentAttendance", "My Attendance", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentAttendance", "My Attendance Record", nullptr));
        tableWidget->setHorizontalHeaderLabels(QStringList{
            QCoreApplication::translate("StudentAttendance", "Date", nullptr),
            QCoreApplication::translate("StudentAttendance", "Status", nullptr)});
    } // retranslateUi

};

namespace Ui {
    class StudentAttendance: public Ui_StudentAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTATTENDANCE_H
