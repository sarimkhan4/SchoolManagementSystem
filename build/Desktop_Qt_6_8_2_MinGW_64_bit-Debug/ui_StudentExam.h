/********************************************************************************
** Form generated from reading UI file 'StudentExam.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTEXAM_H
#define UI_STUDENTEXAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentExam
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QTableWidget *tableWidget;

    void setupUi(QDialog *StudentExam)
    {
        if (StudentExam->objectName().isEmpty())
            StudentExam->setObjectName("StudentExam");
        StudentExam->resize(600, 400);
        verticalLayout = new QVBoxLayout(StudentExam);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(StudentExam);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        tableWidget = new QTableWidget(StudentExam);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setColumnCount(7);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(StudentExam);

        QMetaObject::connectSlotsByName(StudentExam);
    } // setupUi

    void retranslateUi(QDialog *StudentExam)
    {
        StudentExam->setWindowTitle(QCoreApplication::translate("StudentExam", "Assigned Exams", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentExam", "Assigned Exams for Class", nullptr));
        tableWidget->setHorizontalHeaderLabels(QStringList{
            QCoreApplication::translate("StudentExam", "Class", nullptr),
            QCoreApplication::translate("StudentExam", "Subject", nullptr),
            QCoreApplication::translate("StudentExam", "Invigilator", nullptr),
            QCoreApplication::translate("StudentExam", "Exam Date", nullptr),
            QCoreApplication::translate("StudentExam", "Start Time", nullptr),
            QCoreApplication::translate("StudentExam", "End Time", nullptr),
            QCoreApplication::translate("StudentExam", "Room", nullptr)});
    } // retranslateUi

};

namespace Ui {
    class StudentExam: public Ui_StudentExam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTEXAM_H
