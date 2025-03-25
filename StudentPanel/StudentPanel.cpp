#include "StudentPanel.h"
#include "ui_StudentPanel.h"

StudentPanel::StudentPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StudentPanel)
{
    ui->setupUi(this);
    setWindowTitle("Student Panel");
}

StudentPanel::~StudentPanel()
{
    delete ui;
}
