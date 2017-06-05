#ifndef GIZMO_H
#define GIZMO_H
#include"Widget.h"

class Gizmo:public Widget{

public:
    virtual int f()
    {
    return 3;}
};

#endif // GIZMO_H
