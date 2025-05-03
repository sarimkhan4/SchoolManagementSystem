/********************************************************************************
** Form generated from reading UI file 'StudentInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFO_H
#define UI_STUDENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QFormLayout *formLayout;
    QLabel *label_id;
    QLineEdit *lineEditId;
    QLabel *label_name;
    QLineEdit *lineEditName;
    QLabel *label_class;
    QLineEdit *lineEditClass;
    QLabel *label_password;
    QLineEdit *lineEditPassword;
    QHBoxLayout *buttonLayout;
    QPushButton *btnClose;

    void setupUi(QDialog *StudentInfo)
    {
        if (StudentInfo->objectName().isEmpty())
            StudentInfo->setObjectName("StudentInfo");
        StudentInfo->resize(400, 250);
        verticalLayout = new QVBoxLayout(StudentInfo);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(StudentInfo);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_id = new QLabel(StudentInfo);
        label_id->setObjectName("label_id");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_id);

        lineEditId = new QLineEdit(StudentInfo);
        lineEditId->setObjectName("lineEditId");
        lineEditId->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditId);

        label_name = new QLabel(StudentInfo);
        label_name->setObjectName("label_name");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        lineEditName = new QLineEdit(StudentInfo);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditName);

        label_class = new QLabel(StudentInfo);
        label_class->setObjectName("label_class");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_class);

        lineEditClass = new QLineEdit(StudentInfo);
        lineEditClass->setObjectName("lineEditClass");
        lineEditClass->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditClass);

        label_password = new QLabel(StudentInfo);
        label_password->setObjectName("label_password");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_password);

        lineEditPassword = new QLineEdit(StudentInfo);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEditPassword->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPassword);


        verticalLayout->addLayout(formLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        btnClose = new QPushButton(StudentInfo);
        btnClose->setObjectName("btnClose");
        btnClose->setCheckable(false);
        btnClose->setChecked(false);

        buttonLayout->addWidget(btnClose);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(StudentInfo);

        QMetaObject::connectSlotsByName(StudentInfo);
    } // setupUi

    void retranslateUi(QDialog *StudentInfo)
    {
        StudentInfo->setWindowTitle(QCoreApplication::translate("StudentInfo", "Student Information", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentInfo", "Student Profile", nullptr));
        label_id->setText(QCoreApplication::translate("StudentInfo", "Student ID:", nullptr));
        label_name->setText(QCoreApplication::translate("StudentInfo", "Name:", nullptr));
        label_class->setText(QCoreApplication::translate("StudentInfo", "Class:", nullptr));
        label_password->setText(QCoreApplication::translate("StudentInfo", "Password:", nullptr));
        btnClose->setText(QCoreApplication::translate("StudentInfo", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfo: public Ui_StudentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFO_H
