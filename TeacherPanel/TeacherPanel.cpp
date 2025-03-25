#include "TeacherPanel.h"
#include "ui_TeacherPanel.h"

TeacherPanel::TeacherPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TeacherPanel)
{
    ui->setupUi(this);
    setWindowTitle("Teacher Panel");
}

TeacherPanel::~TeacherPanel()
{
    delete ui;
}
