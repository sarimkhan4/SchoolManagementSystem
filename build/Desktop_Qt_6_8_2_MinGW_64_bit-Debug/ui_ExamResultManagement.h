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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExamResultManagement
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *studentIdInput;
    QLabel *labelSubject;
    QLineEdit *marksInput;
    QLineEdit *studentNameInput;
    QLabel *labelClass;
    QLabel *labelStudentName;
    QLineEdit *classInput;
    QHBoxLayout *horizontalLayoutButtons;
    QPushButton *saveButton;
    QPushButton *updateButton;
    QPushButton *clearButton;
    QLabel *labelStudentId;
    QLineEdit *subjectInput;
    QLineEdit *totalmarksInput;
    QLabel *labelMarks;
    QLabel *labelTotalMarks;
    QHBoxLayout *horizontalLayoutSearch;
    QLineEdit *searchInput;
    QPushButton *searchButton;
    QTableView *tableViewResults;

    void setupUi(QDialog *ExamResultManagement)
    {
        if (ExamResultManagement->objectName().isEmpty())
            ExamResultManagement->setObjectName("ExamResultManagement");
        ExamResultManagement->resize(750, 600);
        verticalLayout = new QVBoxLayout(ExamResultManagement);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(ExamResultManagement);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        studentIdInput = new QLineEdit(groupBox);
        studentIdInput->setObjectName("studentIdInput");

        gridLayout->addWidget(studentIdInput, 0, 1, 1, 1);

        labelSubject = new QLabel(groupBox);
        labelSubject->setObjectName("labelSubject");

        gridLayout->addWidget(labelSubject, 1, 2, 1, 1);

        marksInput = new QLineEdit(groupBox);
        marksInput->setObjectName("marksInput");

        gridLayout->addWidget(marksInput, 2, 1, 1, 1);

        studentNameInput = new QLineEdit(groupBox);
        studentNameInput->setObjectName("studentNameInput");

        gridLayout->addWidget(studentNameInput, 0, 3, 1, 1);

        labelClass = new QLabel(groupBox);
        labelClass->setObjectName("labelClass");

        gridLayout->addWidget(labelClass, 1, 0, 1, 1);

        labelStudentName = new QLabel(groupBox);
        labelStudentName->setObjectName("labelStudentName");

        gridLayout->addWidget(labelStudentName, 0, 2, 1, 1);

        classInput = new QLineEdit(groupBox);
        classInput->setObjectName("classInput");

        gridLayout->addWidget(classInput, 1, 1, 1, 1);

        horizontalLayoutButtons = new QHBoxLayout();
        horizontalLayoutButtons->setObjectName("horizontalLayoutButtons");
        saveButton = new QPushButton(groupBox);
        saveButton->setObjectName("saveButton");

        horizontalLayoutButtons->addWidget(saveButton);

        updateButton = new QPushButton(groupBox);
        updateButton->setObjectName("updateButton");

        horizontalLayoutButtons->addWidget(updateButton);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName("clearButton");

        horizontalLayoutButtons->addWidget(clearButton);


        gridLayout->addLayout(horizontalLayoutButtons, 3, 0, 1, 4);

        labelStudentId = new QLabel(groupBox);
        labelStudentId->setObjectName("labelStudentId");

        gridLayout->addWidget(labelStudentId, 0, 0, 1, 1);

        subjectInput = new QLineEdit(groupBox);
        subjectInput->setObjectName("subjectInput");

        gridLayout->addWidget(subjectInput, 1, 3, 1, 1);

        totalmarksInput = new QLineEdit(groupBox);
        totalmarksInput->setObjectName("totalmarksInput");

        gridLayout->addWidget(totalmarksInput, 2, 3, 1, 1);

        labelMarks = new QLabel(groupBox);
        labelMarks->setObjectName("labelMarks");

        gridLayout->addWidget(labelMarks, 2, 0, 1, 1);

        labelTotalMarks = new QLabel(groupBox);
        labelTotalMarks->setObjectName("labelTotalMarks");

        gridLayout->addWidget(labelTotalMarks, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayoutSearch = new QHBoxLayout();
        horizontalLayoutSearch->setObjectName("horizontalLayoutSearch");
        searchInput = new QLineEdit(ExamResultManagement);
        searchInput->setObjectName("searchInput");

        horizontalLayoutSearch->addWidget(searchInput);

        searchButton = new QPushButton(ExamResultManagement);
        searchButton->setObjectName("searchButton");

        horizontalLayoutSearch->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayoutSearch);

        tableViewResults = new QTableView(ExamResultManagement);
        tableViewResults->setObjectName("tableViewResults");

        verticalLayout->addWidget(tableViewResults);


        retranslateUi(ExamResultManagement);

        QMetaObject::connectSlotsByName(ExamResultManagement);
    } // setupUi

    void retranslateUi(QDialog *ExamResultManagement)
    {
        ExamResultManagement->setWindowTitle(QCoreApplication::translate("ExamResultManagement", "Exam Result Management", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExamResultManagement", "Exam Result Entry", nullptr));
        labelSubject->setText(QCoreApplication::translate("ExamResultManagement", "Subject:", nullptr));
        labelClass->setText(QCoreApplication::translate("ExamResultManagement", "Class:", nullptr));
        labelStudentName->setText(QCoreApplication::translate("ExamResultManagement", "Student Name:", nullptr));
        saveButton->setText(QCoreApplication::translate("ExamResultManagement", "Save", nullptr));
        updateButton->setText(QCoreApplication::translate("ExamResultManagement", "Update", nullptr));
        clearButton->setText(QCoreApplication::translate("ExamResultManagement", "Clear", nullptr));
        labelStudentId->setText(QCoreApplication::translate("ExamResultManagement", "Student ID:", nullptr));
        labelMarks->setText(QCoreApplication::translate("ExamResultManagement", "Marks:", nullptr));
        labelTotalMarks->setText(QCoreApplication::translate("ExamResultManagement", "Total Marks", nullptr));
        searchInput->setPlaceholderText(QCoreApplication::translate("ExamResultManagement", "Enter Student ID or Name to search", nullptr));
        searchButton->setText(QCoreApplication::translate("ExamResultManagement", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamResultManagement: public Ui_ExamResultManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMRESULTMANAGEMENT_H
