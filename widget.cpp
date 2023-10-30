#include "widget.h"
#include "./ui_widget.h"
#include "student.h"
#include "dialog.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    st_dialog = new Dialog;


}



void Widget::add_student(student *st)
{
    ui->listWidget->addItem((QListWidgetItem*)st);
    St.push_back(st);
}
void Widget::add_student(QString name, QString dob, QString Cl)
{
    student *st = new student(name,dob,Cl);
    add_student(st);
}
void Widget::add_student(QString name)
{
    ui->listWidget->addItem(name);
}
void Widget::rm_student(student *st)
{
    ui->listWidget->removeItemWidget((QListWidgetItem*)st);
    for(int i=0;i<St.size();i++)
    {
        if(St[i]==st)
        {
            St.remove(i);
            delete st;
        }
    }
}
Widget::~Widget()
{
    for(int i=0;i<St.size();i++)
    {
        rm_student(St[i]);
    }
    delete ui;
    delete st_dialog;
}
void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    student *st = (student *)item;
    ui->st_name->setText(st->getName());
    ui->st_dob->setText(st->getDOB());
    ui->st_class->setText(st->getClass());

    st_dialog->show_student((student*)item);
}


void Widget::on_pushButton_clicked()
{
    rm_student((student *) ui->listWidget->currentItem());
}


void Widget::on_pushButton_2_clicked()
{
    add_student("nguyen van F","20/8/2005","C");
}

