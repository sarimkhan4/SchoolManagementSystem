/********************************************************************************
** Form generated from reading UI file 'TeacherPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERPANEL_H
#define UI_TEACHERPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherPanel
{
public:
    QWidget *centralwidget;
    QLabel *label;

    void setupUi(QMainWindow *TeacherPanel)
    {
        if (TeacherPanel->objectName().isEmpty())
            TeacherPanel->setObjectName("TeacherPanel");
        TeacherPanel->resize(800, 600);
        centralwidget = new QWidget(TeacherPanel);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 250, 300, 50));
        label->setAlignment(Qt::AlignCenter);
        TeacherPanel->setCentralWidget(centralwidget);

        retranslateUi(TeacherPanel);

        QMetaObject::connectSlotsByName(TeacherPanel);
    } // setupUi

    void retranslateUi(QMainWindow *TeacherPanel)
    {
        TeacherPanel->setWindowTitle(QCoreApplication::translate("TeacherPanel", "Teacher Panel", nullptr));
        label->setText(QCoreApplication::translate("TeacherPanel", "Welcome to Teacher Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherPanel: public Ui_TeacherPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERPANEL_H
