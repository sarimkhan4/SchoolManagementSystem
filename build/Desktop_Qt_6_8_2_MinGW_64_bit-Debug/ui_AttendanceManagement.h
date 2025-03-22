/********************************************************************************
** Form generated from reading UI file 'AttendanceManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCEMANAGEMENT_H
#define UI_ATTENDANCEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceManagement
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *topLayout;
    QLabel *label;
    QComboBox *attendanceTypeComboBox;
    QLineEdit *searchBar;
    QTableView *attendanceTable;
    QPushButton *markAttendanceButton;

    void setupUi(QWidget *AttendanceManagement)
    {
        if (AttendanceManagement->objectName().isEmpty())
            AttendanceManagement->setObjectName("AttendanceManagement");
        AttendanceManagement->resize(540, 500);
        verticalLayout = new QVBoxLayout(AttendanceManagement);
        verticalLayout->setObjectName("verticalLayout");
        topLayout = new QHBoxLayout();
        topLayout->setObjectName("topLayout");
        label = new QLabel(AttendanceManagement);
        label->setObjectName("label");

        topLayout->addWidget(label);

        attendanceTypeComboBox = new QComboBox(AttendanceManagement);
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->setObjectName("attendanceTypeComboBox");

        topLayout->addWidget(attendanceTypeComboBox);


        verticalLayout->addLayout(topLayout);

        searchBar = new QLineEdit(AttendanceManagement);
        searchBar->setObjectName("searchBar");

        verticalLayout->addWidget(searchBar);

        attendanceTable = new QTableView(AttendanceManagement);
        attendanceTable->setObjectName("attendanceTable");

        verticalLayout->addWidget(attendanceTable);

        markAttendanceButton = new QPushButton(AttendanceManagement);
        markAttendanceButton->setObjectName("markAttendanceButton");

        verticalLayout->addWidget(markAttendanceButton);


        retranslateUi(AttendanceManagement);

        QMetaObject::connectSlotsByName(AttendanceManagement);
    } // setupUi

    void retranslateUi(QWidget *AttendanceManagement)
    {
        AttendanceManagement->setWindowTitle(QCoreApplication::translate("AttendanceManagement", "Attendance Management", nullptr));
        label->setText(QCoreApplication::translate("AttendanceManagement", "Select Type:", nullptr));
        attendanceTypeComboBox->setItemText(0, QCoreApplication::translate("AttendanceManagement", "Student", nullptr));
        attendanceTypeComboBox->setItemText(1, QCoreApplication::translate("AttendanceManagement", "Teacher", nullptr));

        searchBar->setPlaceholderText(QCoreApplication::translate("AttendanceManagement", "Search by ID or Name...", nullptr));
        markAttendanceButton->setText(QCoreApplication::translate("AttendanceManagement", "Mark Attendance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceManagement: public Ui_AttendanceManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEMANAGEMENT_H
