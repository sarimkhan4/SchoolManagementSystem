/********************************************************************************
** Form generated from reading UI file 'StudentResult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTRESULT_H
#define UI_STUDENTRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StudentResult
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QTableWidget *tableWidget;
    QPushButton *gradingFormulaButton;

    void setupUi(QDialog *StudentResult)
    {
        if (StudentResult->objectName().isEmpty())
            StudentResult->setObjectName("StudentResult");
        StudentResult->resize(600, 450);
        verticalLayout = new QVBoxLayout(StudentResult);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(StudentResult);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        tableWidget = new QTableWidget(StudentResult);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setColumnCount(7);
        tableWidget->setShowGrid(true);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(tableWidget);

        gradingFormulaButton = new QPushButton(StudentResult);
        gradingFormulaButton->setObjectName("gradingFormulaButton");

        verticalLayout->addWidget(gradingFormulaButton);


        retranslateUi(StudentResult);

        QMetaObject::connectSlotsByName(StudentResult);
    } // setupUi

    void retranslateUi(QDialog *StudentResult)
    {
        StudentResult->setWindowTitle(QCoreApplication::translate("StudentResult", "My Results", nullptr));
        titleLabel->setText(QCoreApplication::translate("StudentResult", "Result Summary", nullptr));
        tableWidget->setHorizontalHeaderLabels(QStringList{
            QCoreApplication::translate("StudentResult", "Name", nullptr),
            QCoreApplication::translate("StudentResult", "Class", nullptr),
            QCoreApplication::translate("StudentResult", "Subject", nullptr),
            QCoreApplication::translate("StudentResult", "Marks Obtained", nullptr),
            QCoreApplication::translate("StudentResult", "Total Marks", nullptr),
            QCoreApplication::translate("StudentResult", "Percentage", nullptr),
            QCoreApplication::translate("StudentResult", "Grade", nullptr)});
        gradingFormulaButton->setText(QCoreApplication::translate("StudentResult", "Grading Formula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentResult: public Ui_StudentResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTRESULT_H
