#include "crewmember.h"
#include "pilot.h"
#include <iostream>
#include <string>

using namespace std;

pilot::pilot()
{
    flightHrs = 0.00;
//    rating = " ";
}

pilot::pilot(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp)
{
    flightHrs = flightHrsTemp;
    crewName = crewNameTemp; 
}

void pilot::setPilotRating()
{
    cout << "Enter Pilot rating: " << endl;
    cin.ignore();
    getline(cin, rating);
//    rating = tempRating;
}

void pilot::setPilotFlightHrs()
{
    cout << "Enter how many hours this pilot has flown: " << endl;
    double flightHrs;
    cin >> flightHrs;
}



