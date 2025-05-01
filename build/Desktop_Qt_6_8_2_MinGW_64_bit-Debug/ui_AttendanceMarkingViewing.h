/********************************************************************************
** Form generated from reading UI file 'AttendanceMarkingViewing.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEMARKINGVIEWING_H
#define UI_ATTENDANCEMARKINGVIEWING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AttendanceMarkingViewing
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AttendanceMarkingViewing)
    {
        if (AttendanceMarkingViewing->objectName().isEmpty())
            AttendanceMarkingViewing->setObjectName("AttendanceMarkingViewing");
        AttendanceMarkingViewing->resize(500, 400);
        verticalLayout = new QVBoxLayout(AttendanceMarkingViewing);
        verticalLayout->setObjectName("verticalLayout");
        lblTitle = new QLabel(AttendanceMarkingViewing);
        lblTitle->setObjectName("lblTitle");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lblTitle);

        tableWidget = new QTableWidget(AttendanceMarkingViewing);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QFont font1;
        font1.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);


        retranslateUi(AttendanceMarkingViewing);

        QMetaObject::connectSlotsByName(AttendanceMarkingViewing);
    } // setupUi

    void retranslateUi(QDialog *AttendanceMarkingViewing)
    {
        AttendanceMarkingViewing->setWindowTitle(QCoreApplication::translate("AttendanceMarkingViewing", "My Attendance Record", nullptr));
        lblTitle->setText(QCoreApplication::translate("AttendanceMarkingViewing", "My Attendance Record", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AttendanceMarkingViewing", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AttendanceMarkingViewing", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceMarkingViewing: public Ui_AttendanceMarkingViewing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEMARKINGVIEWING_H
