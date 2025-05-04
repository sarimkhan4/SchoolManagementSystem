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

QT_BEGIN_NAMESPACE

class Ui_StudentAttendance
{
public:
    QLabel *titleLabel;
    QTableWidget *tableWidget_2;

    void setupUi(QDialog *StudentAttendance)
    {
        if (StudentAttendance->objectName().isEmpty())
            StudentAttendance->setObjectName("StudentAttendance");
        StudentAttendance->resize(261, 400);
        StudentAttendance->setStyleSheet(QString::fromUtf8("QDialog#StudentAttendance {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentAttendance);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(-100, 10, 461, 41));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget_2 = new QTableWidget(StudentAttendance);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(10, 60, 241, 321));
        tableWidget_2->setStyleSheet(QString::fromUtf8("QTableWidget#tableWidget_2 {\n"
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

        retranslateUi(StudentAttendance);

        QMetaObject::connectSlotsByName(StudentAttendance);
    } // setupUi

    void retranslateUi(QDialog *StudentAttendance)
    {
        StudentAttendance->setWindowTitle(QCoreApplication::translate("StudentAttendance", "My Attendance", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentAttendance", "Attendance Record", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StudentAttendance", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StudentAttendance", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentAttendance: public Ui_StudentAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTATTENDANCE_H
