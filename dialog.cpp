#include "dialog.h"
#include "ui_dialog.h"
#include "widget.h"
#include "student.h"
#include "./ui_widget.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}
void Dialog::show_student(student *st)
{
    ui->lineEdit->setText(st->getName());
    ui->lineEdit_2->setText(st->getDOB());
    ui->lineEdit_3->setText(st->getClass());
    show();

}
Dialog::~Dialog()
{
    delete ui;
}
