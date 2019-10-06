#include "copilot.h"
#include "crewmember.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

coPilot::coPilot()
{
    coPilotFlightHrs = 0.00;
}

coPilot::coPilot(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp)
{
    coPilotFlightHrs = flightHrsTemp;
}

void coPilot::setCoPilotRating()
{
    cout << "Enter Co-Pilot rating: " << endl;
    cin.ignore();
    getline(cin, coPilotRating);
}

void coPilot::setCoPilotFlightHrs()
{
    cout << "Enter how many hours this Co-Pilot has flown: " << endl;
    double coPilotflightHrs;
    cin >> coPilotflightHrs;
}
