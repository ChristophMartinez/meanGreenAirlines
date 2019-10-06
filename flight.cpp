#include "flight.h"
#include "crewmembers.h"
#include <iostream>
#include <string>

flight::flight()//default constructor to initialize vars
{
    tailNum = "none";
    numOfPilots = 2;
    numOfCrew = 2;
    minNumCrew = 4;
    departureTime = "0:00";
    arrivalTime = "0:00";
    numPassengers = 0;
    startPortCode = "none";
    endPortCode = "none";
}

flight::flight(string tailNumTemp, int numOfPilotsTemp, int pilotIdTemp, int numOfCrewTemp, int minNumCrewTemp, string departureTimeTemp, string arrivalTimeTemp, int numPassengerTemp, string startPortCodeTemp, string endPortCodeTemp)//overloader constructor
{
    tailNum = tailNumTemp;
    numOfPilots = numOfPilotsTemp;
    numOfCrew = numOfCrewTemp;
    minNumCrew = minNumCrewTemp;
    departureTime = departureTimeTemp;
    arrivalTime = arrivalTimeTemp;
    numPassengers = numPassengerTemp;
    startPortCode = startPortCodeTemp;
    endPortCode = endPortCodeTemp;
}

void flight::setPlaneId()
{
    cout << "What is the plane id?" << endl;
    cin.ignore();
    getline(cin, tailNum);
}

/*
int flight::getPlaneId()
{
    return planeId;
}
*/
void flight::setNumOfPilots()
{
    cout << "How many Pilots are needed for the flight?" << endl;
    cin >> numOfPilots;
}
/*
int flight::getNumOfPilots()
{
    return numOfPilots;
}
*/
void flight::setPilotId()
{
    cout << "What is the Pilot Id?" << endl;
    int tempId;

    for(int i = 0; i < numOfPilots; i++)
    {
        cin >> tempId;
        pilotId.push_back(tempId);// cin to a temp then oush to the vector
    }
}

void flight::getPilotId()
{
    for(int i = 0; i < numOfPilots; i++)
    {
        cout << pilotId.at(i);
        cout << endl;
    }
}

void flight::setNumOfCrew()
{
    cout << "How many crew members are needed for flight?" << endl;
    cin >> numOfCrew;
}
/*
int flight::getNumOfCrew()
{
    return numOfCrew;
}
*/
void flight::setCrewId()
{
    cout << "What is the Crew Member's Id?" << endl;
    int tempCrewId;

    for(int i = 0; i < numOfCrew; i++)
    {
        cin >> tempCrewId;
        crewId.push_back(tempCrewId);
    }
}

void flight::getCrewId()
{
    for(int i = 0; i < numOfCrew; i++)
    {
        cout << crewId.at(i);
        cout << endl;
    }
}

void flight::setMinNumCrew()
{
    cout << "Are more than the minimun number of crew members needed for the flight? If so how many crew members are needed in total?" << endl;
    cin >> minNumCrew;
}
/*
int flight::getMinNumCrew()
{
    return minNumCrew;
}
*/
void flight::setDepartureTime()
{
    cout << "What is the departure time for this flight?" << endl;
    cin.ignore();
    getline(cin, departureTime);
}
/*
string flight::getDepartureTime()
{
    return departureTime;
}
*/
void flight::setArrivalTime()
{
    cout << "What is the arrival time for this flight?" << endl;
    cin.ignore();
    getline(cin, arrivalTime);
}

void flight::setNumPassengers()
{
    cout << "How many passengers will be on this flight?" << endl;
    cin >> numPassengers;
}
/*
int flight::getNumPassengers()
{
    return numPassengers;
}
*/
void flight::setStartPortCode()
{
    cout << "What airport code will this flight depart from?" << endl;
    cin.ignore();
    getline(cin, startPortCode);
}
/*
string flight::getStartPortCode()
{
    return startPortCode;
}
*/
void flight::setEndPortCode()
{
    cout << "What airport code will this flight arrive at?" << endl;
    cin.ignore();
    getline(cin, endPortCode);
}
/*
string flight::getEndPortCode()
{
    return endPortCode;
}
*/
void flight::setStatus()
{
    cout << "Is this flight on time and available? Yes or No." << endl;
    cin.ignore();
    getline(cin, status);
}