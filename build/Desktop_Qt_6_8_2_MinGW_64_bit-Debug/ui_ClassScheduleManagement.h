/********************************************************************************
** Form generated from reading UI file 'ClassScheduleManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSSCHEDULEMANAGEMENT_H
#define UI_CLASSSCHEDULEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleManagement
{
public:
    QTableWidget *scheduleTable;
    QPushButton *editScheduleButton;
    QPushButton *addScheduleButton;
    QLineEdit *searchBar;
    QPushButton *viewScheduleButton;
    QPushButton *removeScheduleButton;

    void setupUi(QDialog *ClassScheduleManagement)
    {
        if (ClassScheduleManagement->objectName().isEmpty())
            ClassScheduleManagement->setObjectName("ClassScheduleManagement");
        ClassScheduleManagement->resize(836, 634);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClassScheduleManagement->sizePolicy().hasHeightForWidth());
        ClassScheduleManagement->setSizePolicy(sizePolicy);
        ClassScheduleManagement->setStyleSheet(QString::fromUtf8("QDialog#ClassScheduleManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        scheduleTable = new QTableWidget(ClassScheduleManagement);
        if (scheduleTable->columnCount() < 8)
            scheduleTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scheduleTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        scheduleTable->setObjectName("scheduleTable");
        scheduleTable->setGeometry(QRect(10, 70, 811, 511));
        scheduleTable->setStyleSheet(QString::fromUtf8("QTableView#scheduleTable {\n"
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
        scheduleTable->setFrameShape(QFrame::Shape::StyledPanel);
        scheduleTable->setColumnCount(8);
        editScheduleButton = new QPushButton(ClassScheduleManagement);
        editScheduleButton->setObjectName("editScheduleButton");
        editScheduleButton->setGeometry(QRect(580, 590, 131, 31));
        editScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#editScheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#editScheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        addScheduleButton = new QPushButton(ClassScheduleManagement);
        addScheduleButton->setObjectName("addScheduleButton");
        addScheduleButton->setGeometry(QRect(100, 590, 131, 31));
        addScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#addScheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#addScheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        searchBar = new QLineEdit(ClassScheduleManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(10, 20, 811, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        viewScheduleButton = new QPushButton(ClassScheduleManagement);
        viewScheduleButton->setObjectName("viewScheduleButton");
        viewScheduleButton->setGeometry(QRect(260, 590, 131, 31));
        viewScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#viewScheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#viewScheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        removeScheduleButton = new QPushButton(ClassScheduleManagement);
        removeScheduleButton->setObjectName("removeScheduleButton");
        removeScheduleButton->setGeometry(QRect(420, 590, 131, 31));
        removeScheduleButton->setStyleSheet(QString::fromUtf8("QPushButton#removeScheduleButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#removeScheduleButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));

        retranslateUi(ClassScheduleManagement);

        QMetaObject::connectSlotsByName(ClassScheduleManagement);
    } // setupUi

    void retranslateUi(QDialog *ClassScheduleManagement)
    {
        ClassScheduleManagement->setWindowTitle(QCoreApplication::translate("ClassScheduleManagement", "Class Schedule Management", nullptr));
        scheduleTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("ClassScheduleManagement", "ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Class Name", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Teacher ID", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Day", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Start Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "End Time", nullptr),
            QCoreApplication::translate("ClassScheduleManagement", "Room", nullptr)}));
        editScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Edit Schedule", nullptr));
        addScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Add Schedule", nullptr));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QCoreApplication::translate("ClassScheduleManagement", "Search by Class Name ", nullptr));
        viewScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "View Schedules", nullptr));
        removeScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Remove Schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleManagement: public Ui_ClassScheduleManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULEMANAGEMENT_H
