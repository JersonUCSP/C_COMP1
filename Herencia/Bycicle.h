#ifndef BYCICLE_H
#define BYCICLE_H
#include<sstream>
#include"Vehicle.h"

class Bycicle:public Vehicle
{
private:
    string color;
public:
        Bycicle(const string myLicense, const int myYear ,const string myColor)
            : Vehicle(myLicense,myYear),color(myColor){}
        const string &myColor(){
        return color;}

        const string getDesc()
        {
            stringstream ss;
            ss<<year;
            return ss.str()+ " : " + license + color;

        }
};
#endif // BYCICLE_H
