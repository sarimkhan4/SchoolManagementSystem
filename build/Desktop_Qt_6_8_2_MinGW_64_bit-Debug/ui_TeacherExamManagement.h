/********************************************************************************
** Form generated from reading UI file 'TeacherExamManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHEREXAMMANAGEMENT_H
#define UI_TEACHEREXAMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TeacherExamManagement
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *searchBar;
    QTableView *examTable;
    QPushButton *closeButton;

    void setupUi(QDialog *TeacherExamManagement)
    {
        if (TeacherExamManagement->objectName().isEmpty())
            TeacherExamManagement->setObjectName("TeacherExamManagement");
        TeacherExamManagement->resize(600, 400);
        verticalLayout = new QVBoxLayout(TeacherExamManagement);
        verticalLayout->setObjectName("verticalLayout");
        searchBar = new QLineEdit(TeacherExamManagement);
        searchBar->setObjectName("searchBar");

        verticalLayout->addWidget(searchBar);

        examTable = new QTableView(TeacherExamManagement);
        examTable->setObjectName("examTable");

        verticalLayout->addWidget(examTable);

        closeButton = new QPushButton(TeacherExamManagement);
        closeButton->setObjectName("closeButton");

        verticalLayout->addWidget(closeButton);


        retranslateUi(TeacherExamManagement);

        QMetaObject::connectSlotsByName(TeacherExamManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherExamManagement)
    {
        TeacherExamManagement->setWindowTitle(QCoreApplication::translate("TeacherExamManagement", "Assigned Exams", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("TeacherExamManagement", "Search Exam...", nullptr));
        closeButton->setText(QCoreApplication::translate("TeacherExamManagement", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherExamManagement: public Ui_TeacherExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHEREXAMMANAGEMENT_H
