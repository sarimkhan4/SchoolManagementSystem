#include "ExamResultManagement.h"
#include "ui_ExamResultManagement.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

ExamResultManagement::ExamResultManagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExamResultManagement)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);

    loadExamResults();

    connect(ui->saveButton, &QPushButton::clicked, this, &ExamResultManagement::saveExamResult);
    connect(ui->searchButton, &QPushButton::clicked, this, &ExamResultManagement::searchExamResult);
    connect(ui->updateButton, &QPushButton::clicked, this, &ExamResultManagement::updateExamResult);
    connect(ui->clearButton, &QPushButton::clicked, this, &ExamResultManagement::clearFields);
}

ExamResultManagement::~ExamResultManagement()
{
    delete ui;
}
// Function to load exam results
void ExamResultManagement::loadExamResults()
{
    model->setQuery("SELECT id, student_id, student_name, class_name, subject, marks_obtained, total_marks FROM exam_results");
    model->setHeaderData(0, Qt::Horizontal, "Result ID");
    model->setHeaderData(1, Qt::Horizontal, "Student ID");
    model->setHeaderData(2, Qt::Horizontal, "Student Name");
    model->setHeaderData(3, Qt::Horizontal, "Class");
    model->setHeaderData(4, Qt::Horizontal, "Subject");
    model->setHeaderData(5, Qt::Horizontal, "Marks");
    model->setHeaderData(6, Qt::Horizontal, "Total Marks");

    ui->tableViewResults->setModel(model);
    ui->tableViewResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}
// Checking if student exists or not thorugh database
bool ExamResultManagement::validateStudent(int studentId, const QString &studentName)
{
    QSqlQuery query;
    query.prepare("SELECT name FROM students WHERE id = :id");
    query.bindValue(":id", studentId);

    if (query.exec() && query.next()) {
        QString dbName = query.value(0).toString();
        return dbName.trimmed() == studentName.trimmed();
    }

    return false;
}
// Function to save exam results
void ExamResultManagement::saveExamResult()
{
    QString studentId = ui->studentIdInput->text();
    QString studentName = ui->studentNameInput->text().trimmed();
    QString studentClass = ui->classInput->text().trimmed();
    QString subject = ui->subjectInput->text().trimmed();
    QString marks = ui->marksInput->text();
    QString totalMarks = ui->totalmarksInput->text();

    if (studentId.isEmpty() || studentName.isEmpty() || subject.isEmpty() || marks.isEmpty() || totalMarks.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all the fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO exam_results (student_id, student_name, class_name, subject, marks_obtained,total_marks) "
                  "VALUES (:student_id, :student_name, :class_name, :subject, :marks_obtained, :total_marks)");
    query.bindValue(":student_id", studentId);
    query.bindValue(":student_name", studentName);
    query.bindValue(":class_name", studentClass);
    query.bindValue(":subject", subject);
    query.bindValue(":marks_obtained", marks);
    query.bindValue(":total_marks", totalMarks);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Exam result saved successfully.");
        loadExamResults();
        clearFields();
    } else {
        QMessageBox::critical(this, "Error", "Failed to save result: " + query.lastError().text());
    }
}
// Function for searching via search bar
void ExamResultManagement::searchExamResult()
{
        QString searchInput = ui->searchInput->text().trimmed();
        if (searchInput.isEmpty()) {
            loadExamResults();  // Loads the results
            return;
        }

        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;

        query.prepare("SELECT * FROM exam_results "
                      "WHERE student_id LIKE ? OR "
                      "student_name LIKE ? OR "
                      "subject LIKE ?");
        QString wildcardInput = "%" + searchInput + "%";
        query.addBindValue(wildcardInput);
        query.addBindValue(wildcardInput);
        query.addBindValue(wildcardInput);

        query.exec();
        model->setQuery(query);

        ui->tableViewResults->setModel(model);
        ui->tableViewResults->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
// Function to update exam result
void ExamResultManagement::updateExamResult()
{
    QModelIndex index = ui->tableViewResults->currentIndex();
    if (!index.isValid()) {
        QMessageBox::warning(this, "No Selection", "Please select a record to update.");
        return;
    }

    int id = model->index(index.row(), 0).data().toInt();

    int studentId = ui->studentIdInput->text().toInt();
    QString studentName = ui->studentNameInput->text().trimmed();
    QString studentClass = ui->classInput->text().trimmed();
    QString subject = ui->subjectInput->text().trimmed();
    float marks = ui->marksInput->text().toFloat();
    float totalMarks = ui->totalmarksInput->text().toFloat();

    if (!validateStudent(studentId, studentName)) {
        QMessageBox::warning(this, "Validation Failed", "Student ID and Name do not match or student does not exist.");
        return;
    }

    QSqlQuery query;
    query.prepare("UPDATE exam_results SET student_id = :student_id, student_name = :student_name, class_name = :class_name, subject = :subject, marks_obtained = :marks_obtained, total_marks = :total_marks WHERE id = :id");
    query.bindValue(":student_id", studentId);
    query.bindValue(":student_name", studentName);
    query.bindValue(":class_name", studentClass);
    query.bindValue(":subject", subject);
    query.bindValue(":marks_obtained", marks);
    query.bindValue(":total_marks", totalMarks);
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Updated", "Exam result updated successfully.");
        loadExamResults();
        clearFields();
    } else {
        QMessageBox::critical(this, "Error", "Failed to update: " + query.lastError().text());
    }
}
// Function to clear form
void ExamResultManagement::clearFields()
{
    ui->studentIdInput->clear();
    ui->studentNameInput->clear();
    ui->classInput->clear();
    ui->subjectInput->clear();
    ui->marksInput->clear();
    ui->totalmarksInput->clear();
    ui->searchInput->clear();
}
