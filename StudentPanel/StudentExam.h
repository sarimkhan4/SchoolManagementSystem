#ifndef STUDENTEXAM_H
#define STUDENTEXAM_H

#include <QDialog>
#include <QSqlQueryModel>

namespace Ui {
class StudentExam;
}

class StudentExam : public QDialog
{
    Q_OBJECT

public:
    explicit StudentExam(QWidget *parent = nullptr, int studentId = -1, const QString &studentClass = "");
    ~StudentExam();

private:
    Ui::StudentExam *ui;
    int studentId;
    QString studentClass;
    QSqlQueryModel *model;

    void loadAssignedExams();
};

#endif // STUDENTEXAMS_H
