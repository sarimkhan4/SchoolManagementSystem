#include "login.h"
#include "DatabaseSetup.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    app.setStyleSheet(
        "QMessageBox {"
        "background-color: #fef6f0;"
        "font: 17px;"
        "border: 1px solid black;"
        "border-radius: 10%;"
        "padding: 20px;"
        "min-width: 600px;"
        "min-height: 350px;"
        "}"
        "QPushButton {"
        "background-color: #ff6b6b;"
        "border: 1.5px solid black;"
        "border-radius: 10px;"
        "padding: 3px 3px 3px 3px;"
        "font-size: 14px;"
        "min-width: 50px;"
        "min-height: 30px;"
        "}"
        "QPushButton:hover {"
        "background-color: #ee5253;"
        "}"
        );
    setupDatabase();
    Login loginWindow;
    loginWindow.show();

    return app.exec();
}
