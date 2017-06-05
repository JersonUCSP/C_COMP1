#ifndef GADGET_H
#define GADGET_H
#include"Widget.h"

class Gadget : public Widget
{
public:
        virtual int f()
        {
            return 2;}
};

#endif // GADGET_H
