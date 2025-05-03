#include "StudentExam.h"
#include "ui_StudentExam.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QHeaderView>

StudentExam::StudentExam(QWidget *parent, int studentId, const QString &studentClass) :
    QDialog(parent),
    ui(new Ui::StudentExam),
    studentId(studentId),
    studentClass(studentClass)
{
    ui->setupUi(this);
    setWindowTitle("Assigned Exams");
    loadAssignedExams();
}

StudentExam::~StudentExam()
{
    delete ui;
}

void StudentExam::loadAssignedExams()
{
    QSqlQuery query;
    query.prepare("SELECT class_name, subject, invigilator, exam_date, start_time, end_time, room FROM exam_management WHERE class_name = :class_name ORDER BY exam_date, start_time");
    query.bindValue(":class_name", studentClass);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to fetch assigned exams: " + query.lastError().text());
        return;
    }

    ui->tableWidget->setRowCount(0); // Clear previous data

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        for (int col = 0; col < 7; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            ui->tableWidget->setItem(row, col, item);
        }
        ++row;
    }

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
