/********************************************************************************
** Form generated from reading UI file 'StudentManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentManagement
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *nameLineEdit;
    QLabel *labelClass;
    QLineEdit *classLineEdit;
    QTableWidget *studentTable;
    QHBoxLayout *buttonLayout;
    QPushButton *addStudentButton;
    QPushButton *editStudentButton;
    QPushButton *removeStudentButton;
    QPushButton *viewStudentButton;

    void setupUi(QDialog *StudentManagement)
    {
        if (StudentManagement->objectName().isEmpty())
            StudentManagement->setObjectName("StudentManagement");
        StudentManagement->resize(500, 400);
        verticalLayout = new QVBoxLayout(StudentManagement);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelName = new QLabel(StudentManagement);
        labelName->setObjectName("labelName");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        nameLineEdit = new QLineEdit(StudentManagement);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        labelClass = new QLabel(StudentManagement);
        labelClass->setObjectName("labelClass");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelClass);

        classLineEdit = new QLineEdit(StudentManagement);
        classLineEdit->setObjectName("classLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, classLineEdit);


        verticalLayout->addLayout(formLayout);

        studentTable = new QTableWidget(StudentManagement);
        if (studentTable->columnCount() < 3)
            studentTable->setColumnCount(3);
        studentTable->setObjectName("studentTable");
        studentTable->setColumnCount(3);

        verticalLayout->addWidget(studentTable);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addStudentButton = new QPushButton(StudentManagement);
        addStudentButton->setObjectName("addStudentButton");

        buttonLayout->addWidget(addStudentButton);

        editStudentButton = new QPushButton(StudentManagement);
        editStudentButton->setObjectName("editStudentButton");

        buttonLayout->addWidget(editStudentButton);

        removeStudentButton = new QPushButton(StudentManagement);
        removeStudentButton->setObjectName("removeStudentButton");

        buttonLayout->addWidget(removeStudentButton);

        viewStudentButton = new QPushButton(StudentManagement);
        viewStudentButton->setObjectName("viewStudentButton");
        viewStudentButton->setEnabled(true);

        buttonLayout->addWidget(viewStudentButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(StudentManagement);

        QMetaObject::connectSlotsByName(StudentManagement);
    } // setupUi

    void retranslateUi(QDialog *StudentManagement)
    {
        StudentManagement->setWindowTitle(QCoreApplication::translate("StudentManagement", "Manage Students", nullptr));
        labelName->setText(QCoreApplication::translate("StudentManagement", "Name:", nullptr));
        labelClass->setText(QCoreApplication::translate("StudentManagement", "Class:", nullptr));
        studentTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("StudentManagement", "ID", nullptr),
            QCoreApplication::translate("StudentManagement", "Name", nullptr),
            QCoreApplication::translate("StudentManagement", "Class", nullptr)}));
        addStudentButton->setText(QCoreApplication::translate("StudentManagement", "Add Student", nullptr));
        editStudentButton->setText(QCoreApplication::translate("StudentManagement", "Edit Student", nullptr));
        removeStudentButton->setText(QCoreApplication::translate("StudentManagement", "Remove Student", nullptr));
        viewStudentButton->setText(QCoreApplication::translate("StudentManagement", "View Students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagement: public Ui_StudentManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
