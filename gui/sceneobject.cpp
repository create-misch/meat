#include <iostream>
#include <QPainter>
#include <QPoint>

#include "Box.h"
#include "sceneobject.h"

SceneObject::SceneObject() :
    x_(0), y_(0), h_(0) {}

SceneObject::SceneObject(const Basic &basic) {
    x_ = basic.x;
    y_ = basic.y;
    h_ = basic.h;
}

SceneObject::SceneObject(const SceneObject &sceneObject) {
    std::memcpy (&x_, &sceneObject, sizeof(SceneObject));
}

SceneObject &SceneObject::operator =(const SceneObject &rhs) {
    std::memcpy (&x_, &rhs, sizeof(SceneObject));
    return *this;
}


NpcObject::NpcObject() {}

NpcObject::NpcObject(const Basic &basic) :
    SceneObject(basic) {}

void NpcObject::draw(QPainter &p) {
    p.save();
    p.drawEllipse(QPoint(x_, y_) ,h_ , h_);
    p.restore();
}


MyObject::MyObject(const Basic &basic) :
    SceneObject(basic) {}

void MyObject::draw(QPainter &p) {
    p.save();
    p.drawEllipse(QPoint(x_, y_) ,h_ , h_);
    p.restore();
}

ShotObject::ShotObject(const Basic &basic) :
    SceneObject(basic){}

void ShotObject::draw(QPainter &p) {
    p.save();
    p.drawEllipse(QPoint(x_, y_) ,h_ , h_);
    p.restore();
}
