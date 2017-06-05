#include <iostream>
#include<vector>
using namespace std;
#include"Widget.h"
#include"Gadget.h"
#include"Gizmo.h"

int main()
{
    vector<Widget*> Widgets;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    Widgets.push_back(&wid);
    Widgets.push_back(&gad);
    Widgets.push_back(&giz);

    for(size_t i=0; i<Widgets.size();i++)
        do_it(Widgets[i]);
}
