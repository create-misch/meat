#include "drawrsceneobject.h"

#include "sceneobject.h"


DrawrSceneObject::DrawrSceneObject(const SceneObjects &sceneObjects) {
    sceneObjects_ = sceneObjects;
}

DrawrSceneObject &DrawrSceneObject::operator =(const SceneObjects &sceneObjects) {
    sceneObjects_ = sceneObjects;
}

void DrawrSceneObject::drawObjects() const {
    for (SceneObject &object : sceneObjects_)
        object.draw(QPainter *p);
}
