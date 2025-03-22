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
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExamManagement
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *scheduleExamButton;
    QPushButton *viewExamsButton;
    QPushButton *editExamButton;
    QPushButton *removeExamButton;

    void setupUi(QDialog *ExamManagement)
    {
        if (ExamManagement->objectName().isEmpty())
            ExamManagement->setObjectName("ExamManagement");
        ExamManagement->resize(400, 300);
        verticalLayout = new QVBoxLayout(ExamManagement);
        verticalLayout->setObjectName("verticalLayout");
        scheduleExamButton = new QPushButton(ExamManagement);
        scheduleExamButton->setObjectName("scheduleExamButton");

        verticalLayout->addWidget(scheduleExamButton);

        viewExamsButton = new QPushButton(ExamManagement);
        viewExamsButton->setObjectName("viewExamsButton");

        verticalLayout->addWidget(viewExamsButton);

        editExamButton = new QPushButton(ExamManagement);
        editExamButton->setObjectName("editExamButton");

        verticalLayout->addWidget(editExamButton);

        removeExamButton = new QPushButton(ExamManagement);
        removeExamButton->setObjectName("removeExamButton");

        verticalLayout->addWidget(removeExamButton);


        retranslateUi(ExamManagement);

        QMetaObject::connectSlotsByName(ExamManagement);
    } // setupUi

    void retranslateUi(QDialog *ExamManagement)
    {
        ExamManagement->setWindowTitle(QCoreApplication::translate("ExamManagement", "Exam Management", nullptr));
        scheduleExamButton->setText(QCoreApplication::translate("ExamManagement", "Schedule Exam", nullptr));
        viewExamsButton->setText(QCoreApplication::translate("ExamManagement", "View Scheduled Exams", nullptr));
        editExamButton->setText(QCoreApplication::translate("ExamManagement", "Edit Exam", nullptr));
        removeExamButton->setText(QCoreApplication::translate("ExamManagement", "Remove Exam", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamManagement: public Ui_ExamManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMMANAGEMENT_H
