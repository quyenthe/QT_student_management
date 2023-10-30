#ifndef DIALOG_H
#define DIALOG_H
#include "student.h"
#include <QDialog>

namespace Ui {
class Dialog;
}
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void show_student(student* st);

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
