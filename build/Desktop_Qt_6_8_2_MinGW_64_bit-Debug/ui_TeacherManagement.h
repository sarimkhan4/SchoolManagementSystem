/********************************************************************************
** Form generated from reading UI file 'TeacherManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGEMENT_H
#define UI_TEACHERMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherManagement
{
public:
    QTableWidget *teacherTable;
    QLabel *labelSubject;
    QLabel *labelName;
    QLineEdit *subjectLineEdit;
    QLineEdit *nameLineEdit;
    QPushButton *editTeacherButton;
    QPushButton *viewTeacherButton;
    QPushButton *removeTeacherButton;
    QPushButton *addTeacherButton;

    void setupUi(QDialog *TeacherManagement)
    {
        if (TeacherManagement->objectName().isEmpty())
            TeacherManagement->setObjectName("TeacherManagement");
        TeacherManagement->resize(802, 640);
        TeacherManagement->setStyleSheet(QString::fromUtf8("QDialog#TeacherManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        teacherTable = new QTableWidget(TeacherManagement);
        if (teacherTable->columnCount() < 3)
            teacherTable->setColumnCount(3);
        teacherTable->setObjectName("teacherTable");
        teacherTable->setGeometry(QRect(10, 130, 781, 461));
        teacherTable->setStyleSheet(QString::fromUtf8("QTableWidget#teacherTable {\n"
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
        teacherTable->setColumnCount(3);
        labelSubject = new QLabel(TeacherManagement);
        labelSubject->setObjectName("labelSubject");
        labelSubject->setGeometry(QRect(10, 80, 71, 31));
        labelSubject->setStyleSheet(QString::fromUtf8("QLabel#labelSubject {\n"
"        font-size: 20px;\n"
"        color: #2c3e50 ;\n"
"}"));
        labelName = new QLabel(TeacherManagement);
        labelName->setObjectName("labelName");
        labelName->setGeometry(QRect(10, 30, 71, 31));
        labelName->setStyleSheet(QString::fromUtf8("QLabel#labelName {\n"
"        font-size: 20px;\n"
"        color: #2c3e50 ;\n"
"}"));
        subjectLineEdit = new QLineEdit(TeacherManagement);
        subjectLineEdit->setObjectName("subjectLineEdit");
        subjectLineEdit->setGeometry(QRect(90, 81, 701, 31));
        subjectLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#subjectLineEdit {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        nameLineEdit = new QLineEdit(TeacherManagement);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(90, 31, 701, 31));
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#nameLineEdit {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        editTeacherButton = new QPushButton(TeacherManagement);
        editTeacherButton->setObjectName("editTeacherButton");
        editTeacherButton->setGeometry(QRect(260, 600, 121, 31));
        editTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#editTeacherButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#editTeacherButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        viewTeacherButton = new QPushButton(TeacherManagement);
        viewTeacherButton->setObjectName("viewTeacherButton");
        viewTeacherButton->setEnabled(true);
        viewTeacherButton->setGeometry(QRect(560, 600, 121, 31));
        viewTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#viewTeacherButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#viewTeacherButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        removeTeacherButton = new QPushButton(TeacherManagement);
        removeTeacherButton->setObjectName("removeTeacherButton");
        removeTeacherButton->setGeometry(QRect(410, 600, 121, 31));
        removeTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#removeTeacherButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#removeTeacherButton:hover {\n"
"\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        addTeacherButton = new QPushButton(TeacherManagement);
        addTeacherButton->setObjectName("addTeacherButton");
        addTeacherButton->setGeometry(QRect(110, 600, 121, 31));
        addTeacherButton->setStyleSheet(QString::fromUtf8("QPushButton#addTeacherButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#addTeacherButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));

        retranslateUi(TeacherManagement);

        QMetaObject::connectSlotsByName(TeacherManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherManagement)
    {
        TeacherManagement->setWindowTitle(QCoreApplication::translate("TeacherManagement", "Manage Teachers", nullptr));
        teacherTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("TeacherManagement", "ID", nullptr),
            QCoreApplication::translate("TeacherManagement", "Name", nullptr),
            QCoreApplication::translate("TeacherManagement", "Subject", nullptr)}));
        labelSubject->setText(QCoreApplication::translate("TeacherManagement", "Subject", nullptr));
        labelName->setText(QCoreApplication::translate("TeacherManagement", "Name", nullptr));
        editTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Edit Teacher", nullptr));
        viewTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "View Teacher", nullptr));
        removeTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Remove Teacher", nullptr));
        addTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Add Teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherManagement: public Ui_TeacherManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGEMENT_H
