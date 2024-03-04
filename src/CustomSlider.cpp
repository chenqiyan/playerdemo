#include "CustomSlider.h"
#include "globalhelper.h"
#include <QDebug>
#include <QCursor>
#include <QImage>
#include <QPixmap>
CustomSlider::CustomSlider(QWidget *parent)
    : QSlider(parent)
{
    QImage *img = new QImage;
    img->load("://res/cursor.png");
    this->setMaximum(MAX_SLIDER_VALUE);
    mlabel = new QLabel(this);
    mlabel->setPixmap(QPixmap::fromImage(*img));
    mlabel->hide();
    label_x = value();
    connect(this, &CustomSlider::valueChanged, this ,&CustomSlider::OnValueMove);
    this->setMouseTracking(true);
}

CustomSlider::~CustomSlider()
{
}

void CustomSlider::mousePressEvent(QMouseEvent *ev)
{
    //注意应先调用父类的鼠标点击处理事件，这样可以不影响拖动的情况
    QSlider::mousePressEvent(ev);
    //获取鼠标的位置，这里并不能直接从ev中取值（因为如果是拖动的话，鼠标开始点击的位置没有意义了）
    double pos = ev->pos().x() / (double)width();
    setValue(pos * (maximum() - minimum()) + minimum());

    emit SigCustomSliderValueChanged();
    mIsPressed = true;
}

void CustomSlider::mouseReleaseEvent(QMouseEvent *ev)
{
    QSlider::mouseReleaseEvent(ev);

    //emit SigCustomSliderValueChanged();
    mIsPressed = false;
}

void CustomSlider::mouseMoveEvent(QMouseEvent *ev)
{
    QSlider::mouseMoveEvent(ev);
    qDebug()<<ev->x();
    emit SigMouseMove();
    if (mIsPressed)
    {
        //获取鼠标的位置，这里并不能直接从ev中取值（因为如果是拖动的话，鼠标开始点击的位置没有意义了）
        double pos = ev->pos().x() / (double)width();
        setValue(pos * (maximum() - minimum()) + minimum());

        emit SigCustomSliderValueChanged();
    }
}

void CustomSlider::enterEvent(QEvent *ev)
{
    QSlider::enterEvent(ev);
    this->setCursor(QCursor(Qt::PointingHandCursor));
    mlabel->show();

}

void CustomSlider::leaveEvent(QEvent *ev)
{
    QSlider::leaveEvent(ev);
    qDebug()<<"leave";
    emit SigMouseLeave();
    mlabel->hide();
}

void CustomSlider::OnValueMove()
{
    double x;

    x = this->pos().x()+value()/(double)maximum() *width();
    qDebug()<<value()<<"x"<<x;
    mlabel->move(x, this->pos().y());
}
