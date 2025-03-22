#include "login.h"
#include "DatabaseSetup.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    setupDatabase();
    Login loginWindow;
    loginWindow.show();

    return app.exec();
}
