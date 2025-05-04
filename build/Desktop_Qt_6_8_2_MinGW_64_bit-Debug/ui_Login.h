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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_username;
    QLineEdit *usernameInput;
    QLabel *label_password;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QFrame *line;
    QLabel *label_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->setEnabled(true);
        Login->resize(952, 521);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(952, 521));
        Login->setMaximumSize(QSize(952, 521));
        Login->setBaseSize(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(254, 246, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Login->setPalette(palette);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("QDialog#Login {\n"
"        background-color: #fef6f0   ;\n"
"        border: 1px solid black;\n"
"}"));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 90, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"        font-size: 25px;\n"
"color: #2c3e50 ;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_username = new QLabel(Login);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(60, 140, 91, 51));
        label_username->setStyleSheet(QString::fromUtf8("QLabel#label_username {\n"
"        font-size: 16px;\n"
"        color: #2c3e50 ;\n"
"}"));
        usernameInput = new QLineEdit(Login);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(60, 180, 341, 30));
        usernameInput->setStyleSheet(QString::fromUtf8("QLineEdit#usernameInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(60, 220, 80, 30));
        label_password->setStyleSheet(QString::fromUtf8("QLabel#label_password {\n"
"        font-size: 16px;\n"
"color: #2c3e50 ;\n"
"}"));
        passwordInput = new QLineEdit(Login);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(60, 250, 341, 30));
        passwordInput->setAutoFillBackground(false);
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit#passwordInput {\n"
"    color: black;;\n"
"    border: 1.5px solid black;;\n"
"    border-radius: 10px;\n"
"        font-size: 16px;\n"
"        padding: 0px 8px 0px 8px;\n"
"}\n"
""));
        passwordInput->setFrame(true);
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        passwordInput->setDragEnabled(false);
        passwordInput->setReadOnly(false);
        passwordInput->setClearButtonEnabled(true);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(60, 320, 341, 41));
        loginButton->setMaximumSize(QSize(2000, 2000));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton {\n"
"    background-color: #ff6b6b;\n"
"    border: 1.5px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 6px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"/* Hover effect */\n"
"QPushButton#loginButton:hover {\n"
"    background-color: #ee5253;\n"
"}\n"
"\n"
""));
        line = new QFrame(Login);
        line->setObjectName("line");
        line->setGeometry(QRect(450, 0, 20, 551));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(458, -10, 501, 541));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2 {\n"
"    border: 1px solid black; /* Use 'solid' for a visible border */\n"
"    border-top-left-radius: 10%;\n"
"    border-bottom-left-radius: 10%;\n"
"    border-top-right-radius: 10%;\n"
"    border-bottom-right-radius: 10%;\n"
"}"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "School Management System", nullptr));
        label->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username", nullptr));
        usernameInput->setInputMask(QString());
        usernameInput->setPlaceholderText(QString());
        label_password->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
