#pragma once

struct Basic;

class QPainter;

class SceneObject {
protected:
    int x_;
    int y_;
    int h_;

public:
    SceneObject();
    SceneObject(const Basic &basic);
    SceneObject(const SceneObject &sceneObject);
    SceneObject &operator = (const SceneObject &rhs);

    virtual void draw(QPainter *p) = 0;
};

class NpcObject : public SceneObject {
public:
    NpcObject();
    NpcObject(const Basic &basic);
    NpcObject(const NpcObject &npc) = default;
    NpcObject &operator = (const NpcObject &rhs) = default;

    void draw(QPainter &p);
};

class MyObject : public SceneObject {
public:
    MyObject() {}
    MyObject(const Basic &basic);
    MyObject(const MyObject &rhs) = default;
    MyObject &operator = (const MyObject & rhs) = default;

    void draw(QPainter &p);
};

class ShotObject : public SceneObject {
public:
    ShotObject() {}
    ShotObject(const Basic &basic);
    ShotObject(const ShotObject &rhs) = default;
    ShotObject &operator = (ShotObject &rhs) = default;

    void draw(QPainter &p);
};



