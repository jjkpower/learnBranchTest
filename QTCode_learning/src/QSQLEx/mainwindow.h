#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGroupBox>
#include <QTableView>
#include <QListWidget>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    QGroupBox *createCarGroupBox();
    QGroupBox *createFactoryGroupBox();
    QGroupBox *createDetailsGroupBox();
    void createMenuBar();
    QTableView *carView;
    QTableView *factoryView;
    QListWidget *attribList;

    QLabel *profileLabel;
    QLabel *titleLabel;
};
#endif // MAINWINDOW_H
