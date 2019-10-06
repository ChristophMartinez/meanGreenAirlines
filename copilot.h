#ifndef COPILOT_H
#define COPILOT_H

#include "crewmember.h"
#include "pilot.h"
#include "cabin.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class coPilot : protected crewMember
{
    protected:
        string coPilotRating;
        double coPilotFlightHrs;

    public:
        coPilot();// default constructor
        
        coPilot(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp);

        void setCoPilotRating();
        string getCoPilotRating(){return coPilotRating;};
        void setCoPilotFlightHrs();
        double getCoPilotFlightHrs(){return coPilotFlightHrs;};
};

#endif 

