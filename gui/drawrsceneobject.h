#ifndef DRAWRSCENEOBJECT_H
#define DRAWRSCENEOBJECT_H

#include <QList>

using SceneObjects = QList<SceneObjects *>;

class DrawrSceneObject
{
public:
    DrawrSceneObject() {}

    DrawrSceneObject(const SceneObjects &sceneObjects);
    DrawrSceneObject &operator = (const SceneObjects &sceneObjects);

    void drawObjects() const;

private:
    SceneObjects sceneObjects_;

};

#endif // DRAWRSCENEOBJECT_H
