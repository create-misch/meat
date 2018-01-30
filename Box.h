#ifndef BOX_H
#define BOX_H

struct Basic {
    int x;
    int y;
    int h;
};

struct Npc : public Basic {
    int r;
    int angle;
    bool active; //отображать или нет бота

}; //структура с местоположение ботов

struct My : public Basic {
    int r;
    int angle; //угол движения
    int x_a; // x конца дула
    int y_a; // у конца дула
    int type_weapon;//тип оружия
    int health; //здоровье

};//структура с местоположением моего танка

struct Shot : public Basic
{
    int type;  // 1 - стандартное , 2 - узи ,  3 - дробовик, 4 рокетница
    int x_end; // конечная точка выстрела х
    int y_end; // клнечная точка выстрела у
    int r;
    int angle;
    bool active;

}; //структура с местоположением выстерла

enum My_action { UP, DOWN, RIGHT, LEFT, SHOT, CHANGE_WEAPON} ;//t1 , t2;

#define MAXNPC 100
#define MAX_SHOTS 50
#define STEP_SHOT 100
#define STEP_MY 2
#define STEP_NPC 5
#define Pi 3.14159265359

class Box
{
public:
    Box();
    int MAX_NPC;
    int level;
    int score;
    Npc npc[MAXNPC];
    My my;
    Shot shot[MAX_SHOTS];


};

#endif // BOX_H
