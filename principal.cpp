#include "principal.h"
#include "ui_principal.h"
#include <QMessageBox>
#include <QtDebug>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_pushButton_clicked()
{
    int peso;
    int altura;
    peso = ui->inPeso->value();
    altura= ui->inAltura->value();


    double pesototal = (peso/(altura*altura));
    if (pesototal<18.5){
        ui->statusbar->showMessage("Bajo de peso",2000);
        return;
    }
  if (pesototal >=18.5 ){
    ui->statusbar->showMessage("Peso normal",2000);
    return;
}
  if (pesototal>=25){
      ui->statusbar->showMessage("Sobrepeso",2000);
      return;
    }
if (pesototal>=30){
    ui->statusbar->showMessage("Obesidad",2000);
    return;
    }


}

