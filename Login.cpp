#include "Login.h"
#include "ui_Login.h"
#include "AdminPanel.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

Login::Login(QWidget *parent) : QDialog(parent), ui(new Ui::Login) {
    QSqlDatabase db = QSqlDatabase::database();
    ui->setupUi(this);
}

Login::~Login() {
    delete ui;
}
// Handle login when button is clicked
void Login::on_loginButton_clicked() {
    QString username = ui->usernameInput->text().trimmed();
    QString password = ui->passwordInput->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Please enter username and password.");
        return;
    }

    // Check credentials in database
    QSqlQuery query;
    query.prepare("SELECT role FROM login_credentials WHERE user_id = :user_id AND password = :password");
    query.bindValue(":user_id", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Query Execution Failed: " << query.lastError().text();
        QMessageBox::critical(this, "Login Error", "Database query failed.");
        return;
    }

    if (query.next()) {
        QString role = query.value(0).toString();
        QMessageBox::information(this, "Login Successful", "Welcome, " + role + "!");

        if (role == "admin") {
            AdminPanel *adminPanel = new AdminPanel();
            adminPanel->show();
            this->hide();  // Hide login window
        } else if (role == "teacher") {
            // Open Teacher Panel
        } else if (role == "student") {
            // Open Student Panel
        }
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}
