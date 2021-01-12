#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Logic.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_resultBtn_clicked()//Кнопка для расчёта силы гравитации
{
    QString S1,S2,S3;//Переменные, нужные, чтобы взять данные из LineEditов
    float m1,m2,r;
    S1=ui->EditM1->text();
    S2=ui->EditM2->text();
    S3=ui->EditR->text();
    m1=S1.toFloat();
    m2=S2.toFloat();
    r=S3.toFloat();
    ui->EditResult->insertPlainText("Сила гравитации:"+QString::number(ForceGravity(m1,m2,r))+" при m1:"+
                                    QString::number(m1)+" m2:"+QString::number(m2)+" r:"+QString::number(r)+"\n");
}

void MainWindow::on_Info_triggered()//Справка
{
    QMessageBox::about(this, "Информация:", "Программу написал Раменский А.А. 14 вариант \nОпределить силу притяжения F между телами массы m 1 и m2 , находящимся на расстоянии r друг от друга");
}
