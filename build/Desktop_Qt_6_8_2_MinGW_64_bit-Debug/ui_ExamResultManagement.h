/********************************************************************************
** Form generated from reading UI file 'ExamResultManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMRESULTMANAGEMENT_H
#define UI_EXAMRESULTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ExamResultManagement
{
public:
    QGroupBox *groupBox;
    QLineEdit *studentIdInput;
    QLabel *labelSubject;
    QLineEdit *marksInput;
    QLineEdit *studentNameInput;
    QLabel *labelClass;
    QLabel *labelStudentName;
    QLineEdit *classInput;
    QLabel *labelStudentId;
    QLineEdit *subjectInput;
    QLineEdit *totalmarksInput;
    QLabel *labelMarks;
    QLabel *labelTotalMarks;
    QPushButton *clearButton;
    QPushButton *updateButton;
    QPushButton *saveButton;
    QTableView *tableViewResults;
    QLineEdit *searchInput;
    QPushButton *searchButton;

    void setupUi(QDialog *ExamResultManagement)
    {
        if (ExamResultManagement->objectName().isEmpty())
            ExamResultManagement->setObjectName("ExamResultManagement");
        ExamResultManagement->resize(766, 632);
        ExamResultManagement->setStyleSheet(QString::fromUtf8("QDialog#ExamResultManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        groupBox = new QGroupBox(ExamResultManagement);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 741, 171));
        studentIdInput = new QLineEdit(groupBox);
        studentIdInput->setObjectName("studentIdInput");
        studentIdInput->setGeometry(QRect(110, 30, 161, 22));
        studentIdInput->setStyleSheet(QString::fromUtf8("QLineEdit#studentIdInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        labelSubject = new QLabel(groupBox);
        labelSubject->setObjectName("labelSubject");
        labelSubject->setGeometry(QRect(440, 60, 71, 21));
        labelSubject->setStyleSheet(QString::fromUtf8("QLabel#labelSubject {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        marksInput = new QLineEdit(groupBox);
        marksInput->setObjectName("marksInput");
        marksInput->setGeometry(QRect(110, 90, 161, 22));
        marksInput->setStyleSheet(QString::fromUtf8("QLineEdit#marksInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        studentNameInput = new QLineEdit(groupBox);
        studentNameInput->setObjectName("studentNameInput");
        studentNameInput->setGeometry(QRect(562, 30, 171, 22));
        studentNameInput->setStyleSheet(QString::fromUtf8("QLineEdit#studentNameInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        labelClass = new QLabel(groupBox);
        labelClass->setObjectName("labelClass");
        labelClass->setGeometry(QRect(20, 60, 51, 21));
        labelClass->setStyleSheet(QString::fromUtf8("QLabel#labelClass {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        labelStudentName = new QLabel(groupBox);
        labelStudentName->setObjectName("labelStudentName");
        labelStudentName->setGeometry(QRect(440, 20, 111, 31));
        labelStudentName->setStyleSheet(QString::fromUtf8("QLabel#labelStudentName {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        classInput = new QLineEdit(groupBox);
        classInput->setObjectName("classInput");
        classInput->setGeometry(QRect(110, 60, 161, 22));
        classInput->setStyleSheet(QString::fromUtf8("QLineEdit#classInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        labelStudentId = new QLabel(groupBox);
        labelStudentId->setObjectName("labelStudentId");
        labelStudentId->setGeometry(QRect(20, 30, 58, 16));
        labelStudentId->setStyleSheet(QString::fromUtf8("QLabel#labelStudentId {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        subjectInput = new QLineEdit(groupBox);
        subjectInput->setObjectName("subjectInput");
        subjectInput->setGeometry(QRect(560, 60, 171, 22));
        subjectInput->setStyleSheet(QString::fromUtf8("QLineEdit#subjectInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        totalmarksInput = new QLineEdit(groupBox);
        totalmarksInput->setObjectName("totalmarksInput");
        totalmarksInput->setGeometry(QRect(560, 90, 171, 22));
        totalmarksInput->setStyleSheet(QString::fromUtf8("QLineEdit#totalmarksInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        labelMarks = new QLabel(groupBox);
        labelMarks->setObjectName("labelMarks");
        labelMarks->setGeometry(QRect(20, 80, 51, 31));
        labelMarks->setStyleSheet(QString::fromUtf8("QLabel#labelMarks {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        labelTotalMarks = new QLabel(groupBox);
        labelTotalMarks->setObjectName("labelTotalMarks");
        labelTotalMarks->setGeometry(QRect(440, 80, 101, 41));
        labelTotalMarks->setStyleSheet(QString::fromUtf8("QLabel#labelTotalMarks {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(530, 120, 206, 29));
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton#clearButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
"font: 9pt \"Segoe UI\";"));
        updateButton = new QPushButton(groupBox);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(270, 120, 205, 31));
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton#updateButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
"font: 9pt \"Segoe UI\";"));
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(10, 120, 206, 29));
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton#saveButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
"font: 9pt \"Segoe UI\";"));
        tableViewResults = new QTableView(ExamResultManagement);
        tableViewResults->setObjectName("tableViewResults");
        tableViewResults->setGeometry(QRect(10, 230, 741, 391));
        tableViewResults->setStyleSheet(QString::fromUtf8("QTableView#tableViewResults {\n"
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
        searchInput = new QLineEdit(ExamResultManagement);
        searchInput->setObjectName("searchInput");
        searchInput->setGeometry(QRect(10, 190, 621, 31));
        searchInput->setStyleSheet(QString::fromUtf8("QLineEdit#searchInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        searchButton = new QPushButton(ExamResultManagement);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(650, 190, 91, 31));
        searchButton->setStyleSheet(QString::fromUtf8("QPushButton#searchButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        retranslateUi(ExamResultManagement);

        QMetaObject::connectSlotsByName(ExamResultManagement);
    } // setupUi

    void retranslateUi(QDialog *ExamResultManagement)
    {
        ExamResultManagement->setWindowTitle(QCoreApplication::translate("ExamResultManagement", "Exam Result Management", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExamResultManagement", "Exam Result Entry", nullptr));
        labelSubject->setText(QCoreApplication::translate("ExamResultManagement", "Subject", nullptr));
        labelClass->setText(QCoreApplication::translate("ExamResultManagement", "Class", nullptr));
        labelStudentName->setText(QCoreApplication::translate("ExamResultManagement", "Student Name", nullptr));
        labelStudentId->setText(QCoreApplication::translate("ExamResultManagement", "Student ID:", nullptr));
        labelMarks->setText(QCoreApplication::translate("ExamResultManagement", "Marks", nullptr));
        labelTotalMarks->setText(QCoreApplication::translate("ExamResultManagement", "Total Marks", nullptr));
        clearButton->setText(QCoreApplication::translate("ExamResultManagement", "Clear", nullptr));
        updateButton->setText(QCoreApplication::translate("ExamResultManagement", "Update", nullptr));
        saveButton->setText(QCoreApplication::translate("ExamResultManagement", "Save", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("ExamResultManagement", "Enter Student ID or Name to search", nullptr));
        searchButton->setText(QCoreApplication::translate("ExamResultManagement", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamResultManagement: public Ui_ExamResultManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMRESULTMANAGEMENT_H
