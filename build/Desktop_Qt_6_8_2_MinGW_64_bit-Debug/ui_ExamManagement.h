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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExamManagement
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *searchLayout;
    QLabel *searchLabel;
    QLineEdit *searchBar;
    QTableView *examTable;
    QHBoxLayout *buttonLayout;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *removeButton;

    void setupUi(QWidget *ExamManagement)
    {
        if (ExamManagement->objectName().isEmpty())
            ExamManagement->setObjectName("ExamManagement");
        ExamManagement->resize(850, 500);
        verticalLayout = new QVBoxLayout(ExamManagement);
        verticalLayout->setObjectName("verticalLayout");
        searchLayout = new QHBoxLayout();
        searchLayout->setObjectName("searchLayout");
        searchLabel = new QLabel(ExamManagement);
        searchLabel->setObjectName("searchLabel");

        searchLayout->addWidget(searchLabel);

        searchBar = new QLineEdit(ExamManagement);
        searchBar->setObjectName("searchBar");

        searchLayout->addWidget(searchBar);


        verticalLayout->addLayout(searchLayout);

        examTable = new QTableView(ExamManagement);
        examTable->setObjectName("examTable");

        verticalLayout->addWidget(examTable);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addButton = new QPushButton(ExamManagement);
        addButton->setObjectName("addButton");

        buttonLayout->addWidget(addButton);

        editButton = new QPushButton(ExamManagement);
        editButton->setObjectName("editButton");

        buttonLayout->addWidget(editButton);

        removeButton = new QPushButton(ExamManagement);
        removeButton->setObjectName("removeButton");

        buttonLayout->addWidget(removeButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(ExamManagement);

        QMetaObject::connectSlotsByName(ExamManagement);
    } // setupUi

    void retranslateUi(QWidget *ExamManagement)
    {
        ExamManagement->setWindowTitle(QCoreApplication::translate("ExamManagement", "Exam Management", nullptr));
        searchLabel->setText(QCoreApplication::translate("ExamManagement", "Search:", nullptr));
        addButton->setText(QCoreApplication::translate("ExamManagement", "Add Exam", nullptr));
        editButton->setText(QCoreApplication::translate("ExamManagement", "Edit Exam", nullptr));
        removeButton->setText(QCoreApplication::translate("ExamManagement", "Remove Exam", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamManagement: public Ui_ExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMANAGEMENT_H
