#include "qrightclickbutton.h"

QRightClickButton::QRightClickButton(QWidget *parent) :
    QPushButton(parent)
{
    setStyleSheet ("text-align: right; font: bold 10px");
}


void QRightClickButton::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::RightButton)
        emit rightClicked(ansNumber);
    else if(e->button()==Qt::LeftButton)
        emit leftClicked(ansNumber);
}

void QRightClickButton::mouseDoubleClickEvent(QMouseEvent *e)
{
    if(e->button()==Qt::RightButton){
        emit rightDoubleClicked(ansNumber);
    }
    else if(e->button()==Qt::LeftButton){
        emit leftDoubleClicked(ansNumber);
    }
}

void QRightClickButton::setAnsNumber(uint8_t input)
{
    ansNumber = input;
}

uint8_t QRightClickButton::getAnsNumber(void)
{
    return ansNumber;
}

//void QRightClickButton::setWindowPointer(MainWindow* window){
//    w = window;
//}


