/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label_title;
    QLabel *label_username;
    QLineEdit *usernameInput;
    QLabel *label_password;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QLabel *messageLabel;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 250);
        label_title = new QLabel(Login);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(140, 10, 120, 30));
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_username = new QLabel(Login);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(50, 60, 80, 30));
        usernameInput = new QLineEdit(Login);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(150, 60, 200, 30));
        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(50, 110, 80, 30));
        passwordInput = new QLineEdit(Login);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(150, 110, 200, 30));
        passwordInput->setAutoFillBackground(false);
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(150, 160, 100, 30));
        messageLabel = new QLabel(Login);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setGeometry(QRect(100, 200, 200, 30));
        messageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "School Management System", nullptr));
        label_title->setText(QCoreApplication::translate("Login", "Login Panel", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
