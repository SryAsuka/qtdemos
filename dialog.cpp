#include <QtGui>

#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GotoCell)
{
    ui -> setupUi(this);

    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui->lineEdit -> setValidator(new QRegularExpressionValidator(regExp,this));

    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(accept()));
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));
}

void Dialog::on_lineEdit_textChanged()
{
    ui->okButton->setEnabled(ui->lineEdit -> hasAcceptableInput());
}

Dialog::~Dialog()
{
    delete ui;
}

