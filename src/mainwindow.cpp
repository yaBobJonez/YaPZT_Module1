#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->todoList->setModel(new QStringListModel());
    ui->wipList->setModel(new QStringListModel());
    ui->doneList->setModel(new QStringListModel());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addAction_triggered()
{
    auto list = qobject_cast<QListView*>(QApplication::focusWidget());
    if (list == nullptr) return;
    auto model = list->model();
    model->insertRow(model->rowCount());
    auto index = model->index(model->rowCount() - 1, 0);
    list->setCurrentIndex(index);
    list->edit(index);
}


void MainWindow::on_editAction_triggered()
{
    auto list = qobject_cast<QListView*>(QApplication::focusWidget());
    if (list == nullptr) return;
    list->edit(list->currentIndex());
}


void MainWindow::on_removeAction_triggered()
{
    auto list = qobject_cast<QListView*>(QApplication::focusWidget());
    if (list == nullptr) return;
    list->model()->removeRow(list->currentIndex().row());
}

