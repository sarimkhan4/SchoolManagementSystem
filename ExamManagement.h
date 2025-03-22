#ifndef EXAMMANAGEMENT_H
#define EXAMMANAGEMENT_H

#include <QDialog>

namespace Ui {
class ExamManagement;
}

class ExamManagement : public QDialog {
    Q_OBJECT

public:
    explicit ExamManagement(QWidget *parent = nullptr);
    ~ExamManagement();

private:
    Ui::ExamManagement *ui;
};

#endif // EXAMMANAGEMENT_H
