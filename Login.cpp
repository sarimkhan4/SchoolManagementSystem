#include "Login.h"
#include "ui_Login.h"
#include "AdminPanel/AdminPanel.h"
#include "StudentPanel/StudentPanel.h"
#include "TeacherPanel/TeacherPanel.h"
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
    // 1. Check if it's an Admin
    QSqlQuery query;
    query.prepare("SELECT password FROM login_credentials WHERE BINARY user_id = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        if (query.value(0).toString() == password) {
            QMessageBox::information(this, "Login Successful", "Welcome, Admin!");
            // Open Admin Panel
            AdminPanel *admin = new AdminPanel();
            admin->show();
            this->close();
            return;
        }
    }
    // 2. Check if it's a Student
    query.prepare("SELECT password FROM students WHERE BINARY name = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        if (query.value(0).toString() == password) {
            QMessageBox::information(this, "Login Successful", "Welcome, Student!");
            // Open Student Panel
            StudentPanel *student = new StudentPanel();
            student->show();
            this->close();
            return;
        }
    }
    // 3. Check if it's a Teacher
    query.prepare("SELECT password FROM teachers BINARY WHERE name = :username");
    query.bindValue(":username", username);
    if (query.exec() && query.next()) {
        if (query.value(0).toString() == password) {
            QMessageBox::information(this, "Login Successful", "Welcome, Teacher!");
            // Open Teacher Panel
            TeacherPanel *teacher = new TeacherPanel();
            teacher->show();
            this->close();
            return;
        }
    }
    // If no valid user is found
    QMessageBox::warning(this, "Login Failed", "Invalid username or password.");

}
