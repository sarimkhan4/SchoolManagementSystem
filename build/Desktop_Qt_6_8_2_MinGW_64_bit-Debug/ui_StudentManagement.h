/********************************************************************************
** Form generated from reading UI file 'StudentManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagement
{
public:
    QTableWidget *studentTable;
    QLineEdit *classLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *labelName;
    QLabel *labelClass;
    QPushButton *viewStudentButton;
    QPushButton *removeStudentButton;
    QPushButton *editStudentButton;
    QPushButton *addStudentButton;

    void setupUi(QDialog *StudentManagement)
    {
        if (StudentManagement->objectName().isEmpty())
            StudentManagement->setObjectName("StudentManagement");
        StudentManagement->resize(800, 639);
        StudentManagement->setStyleSheet(QString::fromUtf8("QDialog#StudentManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        studentTable = new QTableWidget(StudentManagement);
        if (studentTable->columnCount() < 3)
            studentTable->setColumnCount(3);
        studentTable->setObjectName("studentTable");
        studentTable->setGeometry(QRect(10, 120, 781, 471));
        studentTable->setMaximumSize(QSize(1000, 600));
        studentTable->setStyleSheet(QString::fromUtf8("QTableWidget#studentTable {\n"
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
"    padding: 6px;\n"
"    font-size: 10.5pt;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #d6eaf8;\n"
"    color: #1a252f;\n"
"}\n"
""));
        studentTable->setShowGrid(true);
        studentTable->setColumnCount(3);
        classLineEdit = new QLineEdit(StudentManagement);
        classLineEdit->setObjectName("classLineEdit");
        classLineEdit->setGeometry(QRect(70, 80, 721, 31));
        classLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#classLineEdit {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        nameLineEdit = new QLineEdit(StudentManagement);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(70, 20, 721, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#nameLineEdit {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        labelName = new QLabel(StudentManagement);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(10, 20, 51, 31));
        labelName->setStyleSheet(QString::fromUtf8("QLabel#labelName {\n"
"        font-size: 20px;\n"
"        color: #2c3e50 ;\n"
"}"));
        labelClass = new QLabel(StudentManagement);
        labelClass->setObjectName("labelClass");
        labelClass->setGeometry(QRect(10, 70, 51, 41));
        labelClass->setStyleSheet(QString::fromUtf8("QLabel#labelClass {\n"
"        font-size: 20px;\n"
"        color: #2c3e50 ;\n"
"}"));
        viewStudentButton = new QPushButton(StudentManagement);
        viewStudentButton->setObjectName("viewStudentButton");
        viewStudentButton->setEnabled(true);
        viewStudentButton->setGeometry(QRect(560, 600, 141, 31));
        viewStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#viewStudentButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#viewStudentButton:hover {\n"
"    background-color: #ee5253;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        removeStudentButton = new QPushButton(StudentManagement);
        removeStudentButton->setObjectName("removeStudentButton");
        removeStudentButton->setGeometry(QRect(400, 600, 131, 31));
        removeStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#removeStudentButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#removeStudentButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        editStudentButton = new QPushButton(StudentManagement);
        editStudentButton->setObjectName("editStudentButton");
        editStudentButton->setGeometry(QRect(80, 600, 131, 31));
        editStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#editStudentButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#editStudentButton:hover {\n"
"\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        addStudentButton = new QPushButton(StudentManagement);
        addStudentButton->setObjectName("addStudentButton");
        addStudentButton->setGeometry(QRect(240, 600, 131, 31));
        addStudentButton->setStyleSheet(QString::fromUtf8("QPushButton#addStudentButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#addStudentButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));

        retranslateUi(StudentManagement);

        QMetaObject::connectSlotsByName(StudentManagement);
    } // setupUi

    void retranslateUi(QDialog *StudentManagement)
    {
        StudentManagement->setWindowTitle(QCoreApplication::translate("StudentManagement", "Manage Students", nullptr));
        studentTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentManagement", "ID", nullptr),
            QCoreApplication::translate("StudentManagement", "Name", nullptr),
            QCoreApplication::translate("StudentManagement", "Class", nullptr)}));
        labelName->setText(QCoreApplication::translate("StudentManagement", "Name", nullptr));
        labelClass->setText(QCoreApplication::translate("StudentManagement", "Class", nullptr));
        viewStudentButton->setText(QCoreApplication::translate("StudentManagement", "View Students", nullptr));
        removeStudentButton->setText(QCoreApplication::translate("StudentManagement", "Remove Student", nullptr));
        editStudentButton->setText(QCoreApplication::translate("StudentManagement", "Edit Student", nullptr));
        addStudentButton->setText(QCoreApplication::translate("StudentManagement", "Add Student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagement: public Ui_StudentManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
