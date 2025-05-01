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
        tableView = new QTableView(ClassScheduleViewing);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 10, 580, 330));
        closeButton = new QPushButton(ClassScheduleViewing);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(20, 350, 561, 30));

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
