#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidgetItem>
#include <QString>
#include <QVector>
#include "student.h"
#include "dialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Dialog;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void add_student(student *st);
    void add_student(QString name,QString dob,QString Cl);
    void add_student(QString name);
    void rm_student(student *st);


private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;

    QVector<student *> St;
    Dialog* st_dialog;
};
#endif // WIDGET_H
