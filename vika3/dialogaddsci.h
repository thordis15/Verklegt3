#ifndef DIALOGADDSCI_H
#define DIALOGADDSCI_H

#include <QDialog>

namespace Ui {
class DialogAddSci;
}

class DialogAddSci : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddSci(QWidget *parent = 0);
    ~DialogAddSci();

private:
    Ui::DialogAddSci *ui;
};

#endif // DIALOGADDSCI_H
