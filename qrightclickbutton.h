#ifndef QRIGHTCLICKBUTTON_H
#define QRIGHTCLICKBUTTON_H

#include<QPushButton>
#include<QMouseEvent>
//#include<QMainWindow>
//#include"mainwindow.h"
#include"stdint.h"

class QRightClickButton : public QPushButton
{
    Q_OBJECT

    uint8_t ansNumber=0;
    //MainWindow * w;




public:

    explicit QRightClickButton(QWidget *parent = 0);
    void setAnsNumber(uint8_t input);
    uint8_t getAnsNumber(void);
 //   void setWindowPointer(MainWindow* w);

private slots:
    void mousePressEvent(QMouseEvent *e);
    void mouseDoubleClickEvent(QMouseEvent *e);

signals:
    void rightClicked(uint8_t);
    void leftClicked(uint8_t);
    void rightDoubleClicked(uint8_t);
    void leftDoubleClicked(uint8_t);

public slots:

};

#endif // QRIGHTCLICKBUTTON_H
