#include "dialogaddcom.h"
#include "ui_dialogaddcom.h"
#include "machines.h"
DialogAddCom::DialogAddCom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddCom)
{
    ui->setupUi(this);
}

DialogAddCom::~DialogAddCom()
{
    delete ui;
}

void DialogAddCom::on_confirmAddButton_clicked()
{
    bool found = true;
    QString name = ui ->lineEdit_addComName->text();
    string nafn = name.toStdString();
    QString type = ui->lineEdit_addTypeName->text();
    string typa = type.toStdString();
    QString creYear = ui->lineEdit_addCreationYear->text();
    int creationYear = creYear.toInt();
    Computer c1(creationYear, typa,nafn);
    if(name.isEmpty()||type.isEmpty())
    {
        //found = false;
        // Error
       // return;
    }


    core.addComputer(c1,found);
    this->close();
}

void DialogAddCom::on_checkBox_created_clicked(bool checked)
{
    bool temp;
    if(checked == true)
    {
        temp = false;
    }
    else
    {
        temp = true;
    }

    ui->lineEdit_addCreationYear->setDisabled(temp);
}
