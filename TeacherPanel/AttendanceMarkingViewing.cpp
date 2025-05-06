#include "AttendanceMarkingViewing.h"
#include "ui_AttendanceMarkingViewing.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

AttendanceMarkingViewing::AttendanceMarkingViewing(QWidget *parent, int teacherId) :
    QDialog(parent),
    ui(new Ui::AttendanceMarkingViewing),
    teacherId(teacherId)
{

    ui->setupUi(this);
    ui->lblTitle->setText("My Attendance Record");
    loadAttendanceRecords();
}

AttendanceMarkingViewing::~AttendanceMarkingViewing()
{
    delete ui;
}
// Function to load attendance
void AttendanceMarkingViewing::loadAttendanceRecords()
{
    QSqlQuery query ;
    query.prepare("SELECT date, status FROM teacher_attendance WHERE teacher_id = :teacherId");
    query.bindValue(":teacherId", teacherId);
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }
    ui->tableWidget->setRowCount(0);
    int row = 0;

    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("date").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("status").toString()));

        row++;
    }
    // Adjust the columns to fit the content
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
