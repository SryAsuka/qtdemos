//author : Linxinhang
//date : 2023.3.15
//project : GotoCell is designed by Qt Designer
//version 0.1.0

#include "dialog.h"

#include <QApplication>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto window {std::make_unique<Dialog>()};
    window->show();
    return a.exec();
}
