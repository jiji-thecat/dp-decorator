#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout();
    buttonFieldLayout = new QHBoxLayout();
    resultFieldLayout = new QVBoxLayout();
    iconFieldLayout = new QHBoxLayout();

    setButton();

    rootLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(buttonFieldLayout);
    rootLayout->addLayout(resultFieldLayout);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearLayout(QLayout* layout)
{
    while (QLayoutItem* item = layout->takeAt(0))
    {
        if (QWidget* widget = item->widget()) {
            widget->deleteLater();
        }
        if (QLayout* childLayout = item->layout()) {
            clearLayout(childLayout);
        }

        delete item;
    }
}

void MainWindow::buttonClickedOrder()
{
    clearLayout(resultFieldLayout);
    clearLayout(iconFieldLayout);

    Ramen *ramen, *ramenToppings;

    int ramenId = ramenGroupBox->checkedId();
    int toppingsId = toppingsGroupBox->checkedId();
    qDebug() << "order button" << ramenId << " " << toppingsId;

    switch(ramenId){
    case RamenEnum::Shoyu:
        ramen = new ShoyuRamen();
        break;
    case RamenEnum::Shio:
        ramen = new ShioRamen();
        break;
    }

    switch(toppingsId){
    case ToppingsEnum::Nori:
        ramenToppings = new NoriToppings(*ramen);
        break;
    case ToppingsEnum::Chashu:
        ramenToppings = new ChashuToppings(*ramen);
        break;
    }

    std::string images = ramenToppings->image().toStdString();
    int comma = images.find(",");
    std::string ImgRamen = images.substr(0, comma);
    std::string ImgNori = images.substr(comma+1);
    setLabel(ramenToppings->name(), *resultFieldLayout);
    setImageLabel(ImgRamen.c_str(), *iconFieldLayout);
    setImageLabel(ImgNori.c_str(), *iconFieldLayout);
}

void MainWindow::setButton()
{
    ramenGroupBox = new QButtonGroup();
    QHBoxLayout *ramenBox = new QHBoxLayout();
    setLabel("Choose ramen", *ramenBox);
    QRadioButton *radioButtonRamen1 = new QRadioButton("Shoyu", this);
    QRadioButton *radioButtonRamen2 = new QRadioButton("Shio", this);
    ramenGroupBox->addButton(radioButtonRamen1, RamenEnum::Shoyu);
    ramenGroupBox->addButton(radioButtonRamen2, RamenEnum::Shio);

    ramenBox->addWidget(radioButtonRamen1);
    ramenBox->addWidget(radioButtonRamen2);
    buttonFieldLayout->addLayout(ramenBox);

    toppingsGroupBox = new QButtonGroup();
    QHBoxLayout *toppingsBox = new QHBoxLayout();
    setLabel("Choose toppings", *toppingsBox);
    QRadioButton *radioButtonToppings1 = new QRadioButton("Nori", this);
    QRadioButton *radioButtonToppings2 = new QRadioButton("Chashu", this);
    toppingsGroupBox->addButton(radioButtonToppings1, ToppingsEnum::Nori);
    toppingsGroupBox->addButton(radioButtonToppings2, ToppingsEnum::Chashu);

    toppingsBox->addWidget(radioButtonToppings1);
    toppingsBox->addWidget(radioButtonToppings2);
    buttonFieldLayout->addLayout(toppingsBox);

    QPushButton *button = new QPushButton("&Order", this);
    connect(button, SIGNAL(clicked()), this, SLOT(buttonClickedOrder()));
    buttonFieldLayout->addWidget(button);
}

void MainWindow::setImageLabel(QString string, QHBoxLayout &layout)
{
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(":/assets/" + string);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    layout.addWidget(label);
}

void MainWindow::setLabel(QString string, QBoxLayout &layout)
{
    QLabel *label = new QLabel(string);
    layout.addWidget(label);
}
