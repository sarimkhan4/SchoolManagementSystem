#include "StudentInfo.h"
#include "ui_StudentInfo.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

StudentInfo::StudentInfo(QWidget *parent, int studentId) :
    QDialog(parent),
    ui(new Ui::StudentInfo),
    studentId(studentId)
{
    ui->setupUi(this);
    setWindowTitle("Student Information");
    connect(ui->btnClose, &QPushButton::clicked, this, &QDialog::close);
    ui->lineEditId->setText(QString::number(studentId));
    // Load student info from database
    loadStudentInfo();
}

StudentInfo::~StudentInfo()
{
    delete ui;
}
// Function to load student information
void StudentInfo::loadStudentInfo()
{
    QSqlQuery query;
    query.prepare("SELECT name, class, password FROM students WHERE id = :id");
    query.bindValue(":id", studentId);

    if (query.exec() && query.next()) {
        ui->lineEditName->setText(query.value(0).toString());
        ui->lineEditClass->setText(query.value(1).toString());
        ui->lineEditPassword->setText(query.value(2).toString());
    } else {
        QMessageBox::warning(this, "Error", "Failed to load student info: " + query.lastError().text());
    }
}
