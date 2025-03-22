/********************************************************************************
** Form generated from reading UI file 'TeacherManagement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMANAGEMENT_H
#define UI_TEACHERMANAGEMENT_H

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

class Ui_TeacherManagement
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelName;
    QLineEdit *nameLineEdit;
    QLabel *labelSubject;
    QLineEdit *subjectLineEdit;
    QTableWidget *teacherTable;
    QHBoxLayout *buttonLayout;
    QPushButton *addTeacherButton;
    QPushButton *editTeacherButton;
    QPushButton *removeTeacherButton;
    QPushButton *viewTeacherButton;

    void setupUi(QDialog *TeacherManagement)
    {
        if (TeacherManagement->objectName().isEmpty())
            TeacherManagement->setObjectName("TeacherManagement");
        TeacherManagement->resize(500, 400);
        verticalLayout = new QVBoxLayout(TeacherManagement);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        labelName = new QLabel(TeacherManagement);
        labelName->setObjectName("labelName");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelName);

        nameLineEdit = new QLineEdit(TeacherManagement);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        labelSubject = new QLabel(TeacherManagement);
        labelSubject->setObjectName("labelSubject");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSubject);

        subjectLineEdit = new QLineEdit(TeacherManagement);
        subjectLineEdit->setObjectName("subjectLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, subjectLineEdit);


        verticalLayout->addLayout(formLayout);

        teacherTable = new QTableWidget(TeacherManagement);
        if (teacherTable->columnCount() < 3)
            teacherTable->setColumnCount(3);
        teacherTable->setObjectName("teacherTable");
        teacherTable->setColumnCount(3);

        verticalLayout->addWidget(teacherTable);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        addTeacherButton = new QPushButton(TeacherManagement);
        addTeacherButton->setObjectName("addTeacherButton");

        buttonLayout->addWidget(addTeacherButton);

        editTeacherButton = new QPushButton(TeacherManagement);
        editTeacherButton->setObjectName("editTeacherButton");

        buttonLayout->addWidget(editTeacherButton);

        removeTeacherButton = new QPushButton(TeacherManagement);
        removeTeacherButton->setObjectName("removeTeacherButton");

        buttonLayout->addWidget(removeTeacherButton);

        viewTeacherButton = new QPushButton(TeacherManagement);
        viewTeacherButton->setObjectName("viewTeacherButton");
        viewTeacherButton->setEnabled(true);

        buttonLayout->addWidget(viewTeacherButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(TeacherManagement);

        QMetaObject::connectSlotsByName(TeacherManagement);
    } // setupUi

    void retranslateUi(QDialog *TeacherManagement)
    {
        TeacherManagement->setWindowTitle(QCoreApplication::translate("TeacherManagement", "Manage Teachers", nullptr));
        labelName->setText(QCoreApplication::translate("TeacherManagement", "Name:", nullptr));
        labelSubject->setText(QCoreApplication::translate("TeacherManagement", "Subject", nullptr));
        teacherTable->setProperty("horizontalHeaderLabels", QVariant(QStringList{
            QCoreApplication::translate("TeacherManagement", "ID", nullptr),
            QCoreApplication::translate("TeacherManagement", "Name", nullptr),
            QCoreApplication::translate("TeacherManagement", "Subject", nullptr)}));
        addTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Add Teacher", nullptr));
        editTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Edit Teacher", nullptr));
        removeTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "Remove Teacher", nullptr));
        viewTeacherButton->setText(QCoreApplication::translate("TeacherManagement", "View Teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherManagement: public Ui_TeacherManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMANAGEMENT_H
