#include "ExamManagement.h"
#include "ui_ExamManagement.h"

ExamManagement::ExamManagement(QWidget *parent)
    : QDialog(parent), ui(new Ui::ExamManagement) {
    ui->setupUi(this);
}

ExamManagement::~ExamManagement() {
    delete ui;
}
