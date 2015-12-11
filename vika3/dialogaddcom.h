#ifndef DIALOGADDCOM_H
#define DIALOGADDCOM_H#
#include<core.h>
#include <QDialog>

namespace Ui {
class DialogAddCom;
}

class DialogAddCom : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddCom(QWidget *parent = 0);
    ~DialogAddCom();
    void on_confirmAddButton_clicked();
    void on_checkBox_created_clicked(bool checked);

private:
    Ui::DialogAddCom *ui;
    Core core;
};

#endif // DIALOGADDCOM_H
