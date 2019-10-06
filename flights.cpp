#include "flights.h"
#include "crewmembers.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

flights::flights()//default constructor 
{
    //not sure if I really needs this 
}

void flights::addFlights(vector <flight> &flightList, string &tailNum)
{
    flightObject.setPlaneId();
    flightObject.setNumOfPilots();
    flightObject.setPilotId();
    flightObject.setNumOfCrew();
    flightObject.setMinNumCrew();
    flightObject.setDepartureTime();
    flightObject.setArrivalTime();
    flightObject.setNumPassengers();
    flightObject.setStartPortCode();
    flightObject.setEndPortCode();
    flightObject.setStatus();

    flightList.push_back(flightObject);//add object to vector 
}

void flights::editFlights(vector <flight> &flightList, string &tailNum)
{
    string tempTailNum;
  //  flights object1;
    cout << "Enter the Plane Id/Tail Number that you want to edit:" << endl ;
    cin.ignore();
    getline(cin, tempTailNum);
    int x = flightList.size();

    for(int i = 0; i < x; i++)
    {
        if(flightList.at(i).getPlaneId() == tempTailNum)
        {
            flightObject.setPlaneId();
            flightObject.setNumOfPilots();
            flightObject.setNumOfPilots();
            flightObject.setNumOfCrew();
            flightObject.setCrewId();
            flightObject.setMinNumCrew();
            flightObject.setDepartureTime();
            flightObject.setArrivalTime();
            flightObject.setNumPassengers();
            flightObject.setStartPortCode();
            flightObject.setEndPortCode();
            flightObject.setStatus();

            flightList.at(i) = flightObject;
            flightList.push_back(flightObject);
        }
        else
        {
            cout << "Plane was not found" << endl;
        }
    }
}

void flights::deleteFlights(vector <flight> &flightList, string &tailNum)
{
    string tempTailNum;
    cout << "Enter the Plane Id/Tail Number that you would like to delete:" << endl;
    cin.ignore();
    getline(cin, tempTailNum);

    int x = flightList.size();

    for(int i = 0; i < x; i++)
    {
        if(flightList.at(i).getPlaneId() == tempTailNum)
        {
            flightList.erase(flightList.begin() + i);
        }
        else
        {
            cout << "Plane was not found" << endl;
        }
    }
}

void flights::searchFlights(vector <flight> &flightList, string &tailNum)
{
    string tempTailNum;
    cout << "Enter the Plane Id/Tail Number that you want to search for:" << endl;
    cin.ignore();
    getline(cin, tempTailNum);

    int x = flightList.size();

    for(int i = 0; i < x; i++)
    {
        if(flightList.at(i).getPlaneId() == tempTailNum)
        {
            cout << "The Plane was found" << endl;
        }
        else
        {
            cout << "The Plane your searched was not found" << endl;
            cout << "Please enter the Plane Id/Tail Number again" << endl;
            cin.ignore();
            getline(cin, tempTailNum);
        }
    }
}

void flights::printFlightInfo(vector <flight> &flightList, string &tailNum)
{
    string tempTailNum;
    cout << "Enter the Plane Id/Tail Number that you want to print info for:" << endl;
    cin.ignore();
    getline(cin, tempTailNum);

    int x = flightList.size();

    for(int i = 0; i < x; i++)
    {
        if(flightList.at(i).getPlaneId() == tempTailNum)
        {
            cout << "Plane Id:" << setw(2) << flightList.at(i).getPlaneId() << endl;
            cout << "Number of Pilots:" << setw(2) << flightList.at(i).getNumOfPilots() << endl;
            cout << "Number of Crew:" << setw(2) << flightList.at(i).getNumOfCrew() << endl;
            cout << "Minnimum number of crew needed:" << setw(2) << flightList.at(i).getMinNumCrew() << endl;
            cout << "Departure time:" << setw(2) << flightList.at(i).getDepartureTime() << endl;
            cout << "Arrival time:" << setw(2) << flightList.at(i).getArrivalTime() << endl;
            cout << "Number of Passengers:" << setw(2) << flightList.at(i).getNumPassengers() << endl;
            cout << "Departing Airport Code:" << setw(2) << flightList.at(i).getStartPortCode() << endl;
            cout << "Arrival Airpot Code:" << setw(2) << flightList.at(i).getEndPortCode() << endl;
            cout << "Flight Status:" << setw(2) << flightList.at(i).getStatus() << endl;
        }
        else
        {
            cout << "The Plane Id was not found" << endl;
            cout << "Please re-enter the Plane Id/Tail Number:" << endl;
            cin.ignore();
            getline(cin, tempTailNum);
        }  
    }
}

