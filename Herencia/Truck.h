#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck:public Vehicle
{
    private:
        int peso;
    public:
        Truck(const string &myLicense, const int myYear, const int myPeso)
            :Vehicle (myLicense,myYear),peso(myPeso){}
        const int myPeso()
        {
            return peso;
        }

        const int getyear()
        {
            int a=2017;

            return a-year;
        }






};

#endif // TRUCK_H
