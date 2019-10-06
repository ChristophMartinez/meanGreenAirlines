#ifndef PILOT_H
#define PILOT_H

#include "crewmember.h"
#include "copilot.h"
#include "cabin.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class pilot : protected crewMember
{
    protected:
        string rating;
        double flightHrs;

    public:
        pilot();// default constructor

        pilot(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp);

        void setPilotRating();
        string getPilotRating(){return rating;};
        void setPilotFlightHrs();
        double getPilotFlightHrs(){return flightHrs;};
};

#endif

