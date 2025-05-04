/********************************************************************************
** Form generated from reading UI file 'StudentExam.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTEXAM_H
#define UI_STUDENTEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentExam
{
public:
    QLabel *titleLabel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentExam)
    {
        if (StudentExam->objectName().isEmpty())
            StudentExam->setObjectName("StudentExam");
        StudentExam->resize(726, 400);
        StudentExam->setStyleSheet(QString::fromUtf8("QDialog#StudentExam {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentExam);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(70, 10, 581, 33));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(StudentExam);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 48, 701, 341));
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
        tableWidget->setColumnCount(7);

        retranslateUi(StudentExam);

        QMetaObject::connectSlotsByName(StudentExam);
    } // setupUi

    void retranslateUi(QDialog *StudentExam)
    {
        StudentExam->setWindowTitle(QCoreApplication::translate("StudentExam", "Assigned Exams", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentExam", "Assigned Exams ", nullptr));
        tableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentExam", "Class", nullptr),
            QCoreApplication::translate("StudentExam", "Subject", nullptr),
            QCoreApplication::translate("StudentExam", "Invigilator", nullptr),
            QCoreApplication::translate("StudentExam", "Exam Date", nullptr),
            QCoreApplication::translate("StudentExam", "Start Time", nullptr),
            QCoreApplication::translate("StudentExam", "End Time", nullptr),
            QCoreApplication::translate("StudentExam", "Room", nullptr)}));
    } // retranslateUi

};

namespace Ui {
    class StudentExam: public Ui_StudentExam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTEXAM_H
