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

QT_BEGIN_NAMESPACE

class Ui_AttendanceMarkingViewing
{
public:
    QLabel *lblTitle;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AttendanceMarkingViewing)
    {
        if (AttendanceMarkingViewing->objectName().isEmpty())
            AttendanceMarkingViewing->setObjectName("AttendanceMarkingViewing");
        AttendanceMarkingViewing->resize(500, 400);
        AttendanceMarkingViewing->setStyleSheet(QString::fromUtf8("QDialog#AttendanceMarkingViewing {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        lblTitle = new QLabel(AttendanceMarkingViewing);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(9, 0, 481, 41));
        QFont font;
        font.setBold(true);
        lblTitle->setFont(font);
        lblTitle->setStyleSheet(QString::fromUtf8("QLabel#lblTitle {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        lblTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(AttendanceMarkingViewing);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 41, 481, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget#tableWidget {\n"
"    border: 1.5px solid #2c3e50;\n"
"    border-radius: 8px;\n"
"    background-color: #ffffff;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    font-size: 11pt;\n"
"    color: #2c3e50;\n"
"    gridline-color: #ecf0f1;\n"
"    alternate-background-color: #f7f9fa;\n"
"    selection-background-color: #d6eaf8;\n"
"    selection-color: #1a252f;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #2c3e50;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 11pt;\n"
"    padding: 6px;\n"
"    border: none;\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"    background-color: #2c3e50;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px 10px;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #d6eaf8;\n"
"    color: #1a252f;\n"
"}\n"
""));

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
