#ifndef FLIGHTS_H
#define FLIGHTS_H
#include "flight.h"
#include "plane.h"
#include "crewmember.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class flights
{
    protected://list of vects in class 
        vector <flight> flightList (flight);
        vector <crewMember> crewList (crewMember);
        flight flightObject;//way to iterate through vector
        crewMember crewObject;

    public://list of funcs in class
        flights();//default constructor 
//      ~flights();

        void addFlights(vector <flight> &flightList, string &tailNum);
        void editFlights(vector <flight> &flightList, string &tailNum);
        void deleteFlights(vector <flight> &flightList, string &tailNum);
        void searchFlights(vector <flight> &flightList, string &tailNum);
        void printFlightInfo(vector <flight> &flightList, string &tailNum);
};

#endif
