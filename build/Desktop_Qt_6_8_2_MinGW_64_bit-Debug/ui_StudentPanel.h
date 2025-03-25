/********************************************************************************
** Form generated from reading UI file 'StudentPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPANEL_H
#define UI_STUDENTPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentPanel
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *StudentPanel)
    {
        if (StudentPanel->objectName().isEmpty())
            StudentPanel->setObjectName("StudentPanel");
        StudentPanel->resize(800, 600);
        centralwidget = new QWidget(StudentPanel);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 250, 300, 50));
        label->setAlignment(Qt::AlignCenter);
        StudentPanel->setCentralWidget(centralwidget);

        retranslateUi(StudentPanel);

        QMetaObject::connectSlotsByName(StudentPanel);
    } // setupUi

    void retranslateUi(QMainWindow *StudentPanel)
    {
        StudentPanel->setWindowTitle(QCoreApplication::translate("StudentPanel", "Student Panel", nullptr));
        label->setText(QCoreApplication::translate("StudentPanel", "Welcome to Student Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPanel: public Ui_StudentPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPANEL_H
