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

QT_BEGIN_NAMESPACE

class Ui_StudentSchedule
{
public:
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentSchedule)
    {
        if (StudentSchedule->objectName().isEmpty())
            StudentSchedule->setObjectName("StudentSchedule");
        StudentSchedule->resize(650, 400);
        StudentSchedule->setStyleSheet(QString::fromUtf8("QDialog#StudentSchedule {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        label = new QLabel(StudentSchedule);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 9, 481, 26));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(StudentSchedule);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 41, 631, 341));
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
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(6);

        retranslateUi(StudentSchedule);

        QMetaObject::connectSlotsByName(StudentSchedule);
    } // setupUi

    void retranslateUi(QDialog *StudentSchedule)
    {
        StudentSchedule->setWindowTitle(QCoreApplication::translate("StudentSchedule", "Class Schedule", nullptr));
        label->setText(QCoreApplication::translate("StudentSchedule", "Class Schedule", nullptr));
        tableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentSchedule", "Teacher Name", nullptr),
            QCoreApplication::translate("StudentSchedule", "Subject", nullptr),
            QCoreApplication::translate("StudentSchedule", "Day", nullptr),
            QCoreApplication::translate("StudentSchedule", "Start Time", nullptr),
            QCoreApplication::translate("StudentSchedule", "End Time", nullptr),
            QCoreApplication::translate("StudentSchedule", "Room", nullptr)}));
    } // retranslateUi

};

namespace Ui {
    class StudentSchedule: public Ui_StudentSchedule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTSCHEDULE_H
