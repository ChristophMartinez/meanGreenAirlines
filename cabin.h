#ifndef CABIN_H
#define CABIN_H

#include "crewmember.h"
#include "pilot.h"
#include "copilot.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cabin : protected crewMember 
{
    protected:
        string position;

    public:
        cabin();//default constructor 

        cabin(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp);

        void setPosition();
        string getPosition(){return position;};
};

#endif 
