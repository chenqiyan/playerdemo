#pragma once

#include <QSlider>
#include <QMouseEvent>
#include <QLabel>
class CustomSlider : public QSlider
{
    Q_OBJECT

public:
    CustomSlider(QWidget *parent);
    ~CustomSlider();
protected:
    void mousePressEvent(QMouseEvent *ev);//重写QSlider的mousePressEvent事件
    void mouseReleaseEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);
    void enterEvent(QEvent *ev);
    void leaveEvent(QEvent *ev);
    void OnValueMove();
signals:
    void SigCustomSliderValueChanged();//自定义的鼠标单击信号，用于捕获并处理
    void SigMouseMove();
    void SigMouseLeave();
private:
    bool mIsPressed = false;
    QLabel* mlabel;
    double label_x;
};
