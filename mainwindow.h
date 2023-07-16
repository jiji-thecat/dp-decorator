#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QRadioButton>
#include <QLabel>
#include <QButtonGroup>

#include "ramen.h"
#include "shoyu-ramen.h"
#include "nori-toppings.h"
#include "shio-ramen.h"
#include "chashu-toppings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    enum RamenEnum{ Shoyu, Shio };
    enum ToppingsEnum{ Nori, Chashu };
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QHBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;
    QVBoxLayout *resultFieldLayout;
    QButtonGroup *ramenGroupBox, *toppingsGroupBox;
    void setButton();
    void setImageLabel(QString string, QHBoxLayout &layout);
    void setLabel(QString string, QBoxLayout &layout);
    void clearLayout(QLayout* layout);


private slots:
    void buttonClickedOrder();
};
#endif // MAINWINDOW_H
