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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClassScheduleManagement
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *scheduleTable;
    QHBoxLayout *buttonLayout;
    QPushButton *addScheduleButton;
    QPushButton *editScheduleButton;
    QPushButton *removeScheduleButton;
    QPushButton *viewScheduleButton;
    QLineEdit *searchBar;

    void setupUi(QDialog *ClassScheduleManagement)
    {
        if (ClassScheduleManagement->objectName().isEmpty())
            ClassScheduleManagement->setObjectName("ClassScheduleManagement");
        ClassScheduleManagement->resize(750, 500);
        verticalLayout = new QVBoxLayout(ClassScheduleManagement);
        verticalLayout->setObjectName("verticalLayout");
        scheduleTable = new QTableWidget(ClassScheduleManagement);
        if (scheduleTable->columnCount() < 7)
            scheduleTable->setColumnCount(7);
        scheduleTable->setObjectName("scheduleTable");
        scheduleTable->setColumnCount(7);

        verticalLayout->addWidget(scheduleTable);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addScheduleButton = new QPushButton(ClassScheduleManagement);
        addScheduleButton->setObjectName("addScheduleButton");

        buttonLayout->addWidget(addScheduleButton);

        editScheduleButton = new QPushButton(ClassScheduleManagement);
        editScheduleButton->setObjectName("editScheduleButton");

        buttonLayout->addWidget(editScheduleButton);

        removeScheduleButton = new QPushButton(ClassScheduleManagement);
        removeScheduleButton->setObjectName("removeScheduleButton");

        buttonLayout->addWidget(removeScheduleButton);

        viewScheduleButton = new QPushButton(ClassScheduleManagement);
        viewScheduleButton->setObjectName("viewScheduleButton");

        buttonLayout->addWidget(viewScheduleButton);

        searchBar = new QLineEdit(ClassScheduleManagement);
        searchBar->setObjectName("searchBar");

        buttonLayout->addWidget(searchBar);


        verticalLayout->addLayout(buttonLayout);


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
        addScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Add Schedule", nullptr));
        editScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Edit Schedule", nullptr));
        removeScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "Remove Schedule", nullptr));
        viewScheduleButton->setText(QCoreApplication::translate("ClassScheduleManagement", "View Schedules", nullptr));
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QCoreApplication::translate("ClassScheduleManagement", "Search by Class Name ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassScheduleManagement: public Ui_ClassScheduleManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSSCHEDULEMANAGEMENT_H
