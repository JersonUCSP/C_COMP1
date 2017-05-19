#ifndef CAR_H
#define CAR_H
#include"Vehicle.h"

#include<sstream>

class Car: public Vehicle
{
private:
    string style;
public:
    Car(const string &myLicense, const int myYear, const string &myStyle)
        :Vehicle (myLicense,myYear),style(myStyle){}
    const string &getStyle()
        {return style;}
    const string getDesc()
        {
            stringstream ss;
            ss<<year;
            return ss.str()+ ' '  + style + " : " + license;

        }

};

#endif // CAR_H
