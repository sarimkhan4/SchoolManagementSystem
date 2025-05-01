/********************************************************************************
** Form generated from reading UI file 'ExamManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMMANAGEMENT_H
#define UI_EXAMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamManagement
{
public:
    QTableView *examTable;
    QPushButton *removeButton;
    QPushButton *editButton;
    QPushButton *addButton;
    QLineEdit *searchBar;
    QLabel *searchLabel;

    void setupUi(QWidget *ExamManagement)
    {
        if (ExamManagement->objectName().isEmpty())
            ExamManagement->setObjectName("ExamManagement");
        ExamManagement->resize(850, 632);
        ExamManagement->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        ExamManagement->setStyleSheet(QString::fromUtf8("QWidget#ExamManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        examTable = new QTableView(ExamManagement);
        examTable->setObjectName("examTable");
        examTable->setGeometry(QRect(10, 80, 831, 501));
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
"    padding: 6px;\n"
"    font-size: 10.5pt;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #d6eaf8;\n"
"    color: #1a252f;\n"
"}\n"
""));
        removeButton = new QPushButton(ExamManagement);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(360, 590, 121, 31));
        removeButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        removeButton->setStyleSheet(QString::fromUtf8("QPushButton#removeButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#removeButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        editButton = new QPushButton(ExamManagement);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(190, 590, 121, 31));
        editButton->setStyleSheet(QString::fromUtf8("QPushButton#editButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#editButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        addButton = new QPushButton(ExamManagement);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(520, 590, 121, 31));
        addButton->setStyleSheet(QString::fromUtf8("QPushButton#addButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#addButton:hover {\n"
"color: #2c3e50 ;\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        searchBar = new QLineEdit(ExamManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(90, 30, 751, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        searchLabel = new QLabel(ExamManagement);
        searchLabel->setObjectName("searchLabel");
        searchLabel->setGeometry(QRect(10, 30, 71, 31));
        searchLabel->setStyleSheet(QString::fromUtf8("QLabel#searchLabel {\n"
"        font-size: 20px;\n"
"        color: #2c3e50 ;\n"
"}"));

        retranslateUi(ExamManagement);

        QMetaObject::connectSlotsByName(ExamManagement);
    } // setupUi

    void retranslateUi(QWidget *ExamManagement)
    {
        ExamManagement->setWindowTitle(QCoreApplication::translate("ExamManagement", "Exam Management", nullptr));
        removeButton->setText(QCoreApplication::translate("ExamManagement", "Remove Exam", nullptr));
        editButton->setText(QCoreApplication::translate("ExamManagement", "Edit Exam", nullptr));
        addButton->setText(QCoreApplication::translate("ExamManagement", "Add Exam", nullptr));
        searchLabel->setText(QCoreApplication::translate("ExamManagement", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamManagement: public Ui_ExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMANAGEMENT_H
