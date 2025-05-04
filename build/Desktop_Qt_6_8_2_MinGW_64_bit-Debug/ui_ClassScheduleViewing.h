/********************************************************************************
** Form generated from reading UI file 'ClassScheduleViewing.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSCHEDULEVIEWING_H
#define UI_CLASSSCHEDULEVIEWING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleViewing
{
public:
    QTableView *tableView;
    QPushButton *closeButton;

    void setupUi(QDialog *ClassScheduleViewing)
    {
        if (ClassScheduleViewing->objectName().isEmpty())
            ClassScheduleViewing->setObjectName("ClassScheduleViewing");
        ClassScheduleViewing->resize(600, 400);
        ClassScheduleViewing->setStyleSheet(QString::fromUtf8("QDialog#ClassScheduleViewing {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        tableView = new QTableView(ClassScheduleViewing);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 581, 321));
        tableView->setStyleSheet(QString::fromUtf8("QTableView#tableView {\n"
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
        closeButton = new QPushButton(ClassScheduleViewing);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(10, 339, 581, 41));
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

        retranslateUi(ClassScheduleViewing);

        QMetaObject::connectSlotsByName(ClassScheduleViewing);
    } // setupUi

    void retranslateUi(QDialog *ClassScheduleViewing)
    {
        ClassScheduleViewing->setWindowTitle(QCoreApplication::translate("ClassScheduleViewing", "Class Schedule", nullptr));
        closeButton->setText(QCoreApplication::translate("ClassScheduleViewing", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleViewing: public Ui_ClassScheduleViewing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULEVIEWING_H
