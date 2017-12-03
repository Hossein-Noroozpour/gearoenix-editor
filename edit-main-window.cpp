#include "edit-main-window.hpp"
#include "edit-widget.hpp"
#include "ui_edit-main-window.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Widget *w = new Widget();
    ui->centralWidget->layout()->addWidget(w);
}

MainWindow::~MainWindow()
{
    delete ui;
}
