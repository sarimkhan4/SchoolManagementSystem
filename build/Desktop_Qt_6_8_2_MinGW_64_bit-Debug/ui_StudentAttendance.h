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
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentAttendance)
    {
        if (StudentAttendance->objectName().isEmpty())
            StudentAttendance->setObjectName("StudentAttendance");
        StudentAttendance->resize(480, 400);
        StudentAttendance->setStyleSheet(QString::fromUtf8("QDialog#StudentAttendance {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentAttendance);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(10, 0, 461, 41));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(StudentAttendance);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 41, 461, 351));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableView#tableWidget {\n"
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
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(2);

        retranslateUi(StudentAttendance);

        QMetaObject::connectSlotsByName(StudentAttendance);
    } // setupUi

    void retranslateUi(QDialog *StudentAttendance)
    {
        StudentAttendance->setWindowTitle(QCoreApplication::translate("StudentAttendance", "My Attendance", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentAttendance", "My Attendance Record", nullptr));
        tableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentAttendance", "Date", nullptr),
            QCoreApplication::translate("StudentAttendance", "Status", nullptr)}));
    } // retranslateUi

};

namespace Ui {
    class StudentAttendance: public Ui_StudentAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTATTENDANCE_H
