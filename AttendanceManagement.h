#ifndef ATTENDANCEMANAGEMENT_H
#define ATTENDANCEMANAGEMENT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQueryModel>

namespace Ui {
class AttendanceManagement;
}

class AttendanceManagement : public QWidget {
    Q_OBJECT

public:
    explicit AttendanceManagement(QWidget *parent = nullptr);
    ~AttendanceManagement();

private slots:
    void loadAttendanceRecords();
    void markAttendance();
    void onSearchTextChanged(const QString &text);

private:
    Ui::AttendanceManagement *ui;
    QSqlQueryModel *model;
    void updateTable(const QString &type);
};

#endif // ATTENDANCEMANAGEMENT_H
