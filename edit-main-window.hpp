#ifndef EDITMAINWINDOW_HPP
#define EDITMAINWINDOW_HPP

#include <QMainWindow>

class QGraphicsScene;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QGraphicsScene *scene;
    Ui::MainWindow *ui;
};

#endif // EDITMAINWINDOW_HPP
