/********************************************************************************
** Form generated from reading UI file 'StudentResult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTRESULT_H
#define UI_STUDENTRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentResult
{
public:
    QLabel *titleLabel;
    QTableWidget *tableWidget;
    QPushButton *gradingFormulaButton;

    void setupUi(QDialog *StudentResult)
    {
        if (StudentResult->objectName().isEmpty())
            StudentResult->setObjectName("StudentResult");
        StudentResult->resize(641, 450);
        StudentResult->setStyleSheet(QString::fromUtf8("QDialog#StudentResult {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        titleLabel = new QLabel(StudentResult);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(30, 9, 581, 31));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tableWidget = new QTableWidget(StudentResult);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(9, 51, 621, 331));
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
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setShowGrid(true);
        tableWidget->setColumnCount(7);
        gradingFormulaButton = new QPushButton(StudentResult);
        gradingFormulaButton->setObjectName("gradingFormulaButton");
        gradingFormulaButton->setGeometry(QRect(30, 390, 581, 41));
        gradingFormulaButton->setStyleSheet(QString::fromUtf8("QPushButton#gradingFormulaButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#gradingFormulaButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        retranslateUi(StudentResult);

        QMetaObject::connectSlotsByName(StudentResult);
    } // setupUi

    void retranslateUi(QDialog *StudentResult)
    {
        StudentResult->setWindowTitle(QCoreApplication::translate("StudentResult", "My Results", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentResult", "Result Summary", nullptr));
        tableWidget->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentResult", "Name", nullptr),
            QCoreApplication::translate("StudentResult", "Class", nullptr),
            QCoreApplication::translate("StudentResult", "Subject", nullptr),
            QCoreApplication::translate("StudentResult", "Marks Obtained", nullptr),
            QCoreApplication::translate("StudentResult", "Total Marks", nullptr),
            QCoreApplication::translate("StudentResult", "Percentage", nullptr),
            QCoreApplication::translate("StudentResult", "Grade", nullptr)}));
        gradingFormulaButton->setText(QCoreApplication::translate("StudentResult", "Grading Formula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentResult: public Ui_StudentResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTRESULT_H
