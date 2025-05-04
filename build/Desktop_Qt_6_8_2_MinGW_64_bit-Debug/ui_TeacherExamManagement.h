/********************************************************************************
** Form generated from reading UI file 'TeacherExamManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHEREXAMMANAGEMENT_H
#define UI_TEACHEREXAMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TeacherExamManagement
{
public:
    QLineEdit *searchBar;
    QTableView *examTable;
    QPushButton *closeButton;

    void setupUi(QDialog *TeacherExamManagement)
    {
        if (TeacherExamManagement->objectName().isEmpty())
            TeacherExamManagement->setObjectName("TeacherExamManagement");
        TeacherExamManagement->resize(600, 448);
        TeacherExamManagement->setStyleSheet(QString::fromUtf8("QDialog#TeacherExamManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        searchBar = new QLineEdit(TeacherExamManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(10, 21, 581, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        examTable = new QTableView(TeacherExamManagement);
        examTable->setObjectName("examTable");
        examTable->setGeometry(QRect(10, 60, 581, 331));
        examTable->setStyleSheet(QString::fromUtf8("QTableView#examTable {\n"
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
"QTableView QTableCornerButton::section {\n"
"    background-color: #2c3e50;\n"
"    border: none;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    padding: 8px 10px;\n"
"    font-size: 9pt;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #d6eaf8;\n"
"    color: #1a252f;\n"
"}\n"
""));
        closeButton = new QPushButton(TeacherExamManagement);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(230, 400, 141, 31));
        closeButton->setStyleSheet(QString::fromUtf8("QPushButton#closeButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#closeButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        retranslateUi(TeacherExamManagement);

        QMetaObject::connectSlotsByName(TeacherExamManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherExamManagement)
    {
        TeacherExamManagement->setWindowTitle(QCoreApplication::translate("TeacherExamManagement", "Assigned Exams", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("TeacherExamManagement", "Search Exam...", nullptr));
        closeButton->setText(QCoreApplication::translate("TeacherExamManagement", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherExamManagement: public Ui_TeacherExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHEREXAMMANAGEMENT_H
