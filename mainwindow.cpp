#include "mainwindow.h"
#include "./ui_mainwindow.h"

double firstNum, secondNum;
bool userIsTypingSecondNumber = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->zero, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->one, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->two, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->three, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->four, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->five, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->six, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->seven, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->eight, SIGNAL(released()), this, SLOT(digit_pressed()));
    connect(ui->nine, SIGNAL(released()), this, SLOT(digit_pressed()));

    connect(ui->plusMinus, SIGNAL(released()), this, SLOT(unary_operation_pressed()));
    connect(ui->modulo, SIGNAL(released()), this, SLOT(unary_operation_pressed()));

    connect(ui->add, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->subtract, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->multiply, SIGNAL(released()), this, SLOT(binary_operation_pressed()));
    connect(ui->divide, SIGNAL(released()), this, SLOT(binary_operation_pressed()));

    ui->add->setCheckable(true);
    ui->subtract->setCheckable(true);
    ui->multiply->setCheckable(true);
    ui->divide->setCheckable(true);
    }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui->add->isChecked() || ui->subtract->isChecked() ||
        ui->multiply->isChecked() || ui->divide->isChecked()) && (!userIsTypingSecondNumber))
    {
        // if an operation button is pressed consider new input as a new number
        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber = true; // if operation is checked but new input in then a second digit is being placed in.
        newLabel = QString::number(labelNumber,'g',15);
    }
    else
    {
        if(ui->label->text().contains('.') && button->text() == "0")
        {
            newLabel = ui->label->text() + button->text();
        }
        else
        {
            labelNumber = (ui->label->text() + button->text()).toDouble();
            newLabel = QString::number(labelNumber,'g',15);
        }

    }
    ui->label->setText(newLabel);

}

void MainWindow::on_dot_released()
{
    QString currentText = ui->label->text();
    if (!currentText.contains(".")) //check to see if the current text has a decimal or not, if not add else dont do anything
        ui->label->setText(ui->label->text() + ".");
}

void MainWindow::unary_operation_pressed()
{
    QPushButton * button = (QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    // Set to positive or negative value
    if(button->text() == "+/-")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }

    if(button->text() == "%")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
}

void MainWindow::on_clear_released()
{
    // Clear reset everything
    ui->add->setChecked(false);
    ui->subtract->setChecked(false);
    ui->multiply->setChecked(false);
    ui->divide->setChecked(false);
    userIsTypingSecondNumber = false;

    ui->label->setText("0");
}


void MainWindow::on_equal_released()
{
    double labelNumber;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if(ui->add->isChecked())
    {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->add->setChecked(false);
    }
    else if(ui->subtract->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->subtract->setChecked(false);
    }
    else if(ui->multiply->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->multiply->setChecked(false);
    }
    else if(ui->divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->divide->setChecked(false);
    }
    // else do nothing

    userIsTypingSecondNumber = false; // when equal number is pressed then no second number being input

}

void MainWindow::binary_operation_pressed()
{
    QPushButton * button = (QPushButton*)sender();

    firstNum  = ui->label->text().toDouble();

    button->setChecked(true);

}

