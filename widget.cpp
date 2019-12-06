#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}

auto layout = new QBoxLayout(QBoxla);

chartView = new QChartView(layout);
barSeries = new QBarSeries(this);
auto axisY = new QvalueAxis(this);
auto axisX = new QBarCategoryAxis(this);

axisX->append(QStringList {"Nota 1", "Nota 2", "Média"});
axisY->setTickCount(5);
