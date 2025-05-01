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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttendanceManagement
{
public:
    QLineEdit *searchBar;
    QTableView *attendanceTable;
    QPushButton *markAttendanceButton;
    QComboBox *attendanceTypeComboBox;
    QLabel *label;

    void setupUi(QWidget *AttendanceManagement)
    {
        if (AttendanceManagement->objectName().isEmpty())
            AttendanceManagement->setObjectName("AttendanceManagement");
        AttendanceManagement->setEnabled(true);
        AttendanceManagement->resize(800, 633);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AttendanceManagement->sizePolicy().hasHeightForWidth());
        AttendanceManagement->setSizePolicy(sizePolicy);
        AttendanceManagement->setMouseTracking(false);
        AttendanceManagement->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        AttendanceManagement->setStyleSheet(QString::fromUtf8("QWidget#AttendanceManagement {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"        border-radius: 10%;\n"
"}"));
        searchBar = new QLineEdit(AttendanceManagement);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(10, 60, 631, 31));
        searchBar->setStyleSheet(QString::fromUtf8("QLineEdit#searchBar {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        attendanceTable = new QTableView(AttendanceManagement);
        attendanceTable->setObjectName("attendanceTable");
        attendanceTable->setGeometry(QRect(10, 100, 781, 521));
        attendanceTable->setStyleSheet(QString::fromUtf8("QTableView#attendanceTable {\n"
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
        markAttendanceButton = new QPushButton(AttendanceManagement);
        markAttendanceButton->setObjectName("markAttendanceButton");
        markAttendanceButton->setGeometry(QRect(650, 60, 141, 31));
        markAttendanceButton->setStyleSheet(QString::fromUtf8("QPushButton#markAttendanceButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
"QPushButton#markAttendanceButton:hover {\n"
"    background-color: #ee5253;\n"
"        color: #2c3e50 ;\n"
"}\n"
"\n"
""));
        attendanceTypeComboBox = new QComboBox(AttendanceManagement);
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->addItem(QString());
        attendanceTypeComboBox->setObjectName("attendanceTypeComboBox");
        attendanceTypeComboBox->setGeometry(QRect(100, 20, 111, 31));
        attendanceTypeComboBox->setStyleSheet(QString::fromUtf8("QComboBox#attendanceTypeComboBox {\n"
"    border: 1.5px solid #2c3e50;\n"
"    border-radius: 6px;\n"
"    font-family: 'Segoe UI';\n"
"        padding: 6px;\n"
"    font-size: 10pt;\n"
"    background-color: white;\n"
"    color: #2c3e50;\n"
"}\n"
"QComboBox#attendanceTypeComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 22px;\n"
"    background-color: white;\n"
"    border-top-right-radius: 6px;\n"
"    border-bottom-right-radius: 6px;\n"
"}\n"
""));
        label = new QLabel(AttendanceManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 91, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));

        retranslateUi(AttendanceManagement);

        QMetaObject::connectSlotsByName(AttendanceManagement);
    } // setupUi

    void retranslateUi(QWidget *AttendanceManagement)
    {
        AttendanceManagement->setWindowTitle(QCoreApplication::translate("AttendanceManagement", "Attendance Management", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("AttendanceManagement", "Search by ID or Name...", nullptr));
        markAttendanceButton->setText(QCoreApplication::translate("AttendanceManagement", "Mark Attendance", nullptr));
        attendanceTypeComboBox->setItemText(0, QCoreApplication::translate("AttendanceManagement", "Student", nullptr));
        attendanceTypeComboBox->setItemText(1, QCoreApplication::translate("AttendanceManagement", "Teacher", nullptr));

        label->setText(QCoreApplication::translate("AttendanceManagement", "Select Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttendanceManagement: public Ui_AttendanceManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCEMANAGEMENT_H
