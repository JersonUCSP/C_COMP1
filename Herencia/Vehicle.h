#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
using namespace std;

class Vehicle
{
    protected:
        string license;
        int year;
    public:
        Vehicle(const string myLicense, const int myYear):
            license(myLicense), year(myYear){};
        const string getDesc() const
            {return license+ "from" + "anho";
        }
        const string &getLicense(){
            return license;
        }
        const int getyear(){
            return year;
        }

};

#endif // VEHICLE_H
