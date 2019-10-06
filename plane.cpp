#include <iostream>
#include <string>
#include "plane.h"

using namespace std;

plane::plane()//default constructor to initialize vars 
{
    planeMake = "none";
    planeModel = 0;
    tailNum = "none";
    numSeats = 0;
    range = 0;
    minNumCrew = 4;
}

plane::plane(string planeMakeTemp, int planeModelTemp, string tailNumTemp, int numSeatsTemp, int rangeTemp, int minNumCrewTemp)//overloader constructor 
{
    planeMake = planeMakeTemp;
    planeModel = planeModelTemp;
    tailNum = tailNumTemp;
    numSeats = numSeatsTemp;
    range = rangeTemp;
    minNumCrew = minNumCrewTemp;
}

void plane::setPlaneMake()
{
    cout << "What is the plane make" << endl;
    cin.ignore();
    getline(cin, planeMake);
}
/*
string plane::getPlaneMake()
{
    return planeMake;
}
*/
void plane::setPlaneModel()
{
    cout << "What is the plane model" << endl;
    cin >> planeModel;
}
/*
int plane::getPlaneModel()
{
    return planeModel;
}
*/
void plane::setTailNum()
{
    cout << "What is the tail number?" << endl;
    cin.ignore();
    getline(cin, tailNum);
}
/*
string plane::getTailNum()
{
    return tailNum;
}
*/
void plane::setNumSeats()
{
    cout << "How many total seats are on the plane?" << endl;
    cin >> numSeats;
}
/*
int plane::getNumSeats()
{
    return numSeats;
}
*/
void plane::setRange()
{
    cout << "How far can the plane travel(in miles) before re-fuel?" << endl;
    cin >> range;
}
/*
int plane::getRange()
{
    return range;
}
*/
void plane::setMinNumCrew()
{
    cout << "What is the minimum crew need?" << endl;
    cin >> minNumCrew;
}
/*
int plane::getMinNumCrew()
{
    return minNumCrew;
}
*/
