#ifndef EXAMMANAGEMENT_H
#define EXAMMANAGEMENT_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class ExamManagement;
}

class ExamManagement : public QWidget
{
    Q_OBJECT

public:
    explicit ExamManagement(QWidget *parent = nullptr);
    ~ExamManagement();
protected:
    void keyPressEvent(QKeyEvent *event);


private slots:
    void loadExamRecords();
    void addExam();
    void editExam();
    void removeExam();
    void onSearchTextChanged(const QString &text);

private:
    Ui::ExamManagement *ui;
    QSqlQueryModel *model;
    int getNextAvailableId();  // Assigns deleted ID if available
    bool doesInvigilatorExist(const QString &invigilatorName);
    void updateTable();
};

#endif // EXAMMANAGEMENT_H
