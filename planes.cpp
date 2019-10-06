#include <iostream>
#include <vector>
#include <iomanip>
#include "planes.h"

using namespace std;

planes::planes()//default constructor 
{
    //not sure what to put here
}

void planes::addPlanes(vector <plane> &planeList)
{
    planeObject.setPlaneMake();
    planeObject.setPlaneModel();
    planeObject.setTailNum();
    planeObject.setNumSeats();
    planeObject.setRange();
    planeObject.setMinNumCrew();

    planeList.push_back(planeObject);//add object to vector 

}

void planes::editPlanes(vector <plane> &planeList, string &tailNum)
{
    string tempTailNum;
    planes object1;
    cout << "Enter the plane tail number:" << endl;
    cin.ignore();    
    getline(cin, tempTailNum);

    int x = planeList.size();

    for(int i = 0; i < x; i++)
    {
        if(planeList.at(i).getTailNum() == tempTailNum)
        {
            planeObject.setPlaneMake();
            planeObject.setPlaneModel();
            planeObject.setTailNum();
            planeObject.setNumSeats();
            planeObject.setRange();
            planeObject.setMinNumCrew();

            planeList.at(i) = planeObject;
            planeList.push_back(planeObject);
        }
        else
        {
            cout << "Plane not found" << endl;
        }
    }
}

void planes::deletePlanes(vector <plane> &planeList, string &tailNum)
{
    string tempTailNum;
    planes object1;
    cout << "Enter the plane tail number" << endl;
    cin.ignore();
    getline(cin, tempTailNum);

    int x = planeList.size();

    for (int i = 0; i < x; i++)
    {
        if(planeList.at(i).getTailNum() == tempTailNum)
        {
            planeList.erase(planeList.begin() + i);//delete an object in the vector 
        }
        else
        {
            cout << "Plane not found" << endl;
        }
    }
}

void planes::searchPlanes(vector <plane> &planeList, string &tailNum)
{
    string tempTailNum;
    cout << "Enter the plane tail number:" << endl;
    cin.ignore();    
    getline(cin, tempTailNum);
    int x = planeList.size();

    for(int i = 0; i < x; i++)
    {
        if(planeList.at(i).getTailNum() == tempTailNum)
        {
            cout << "Plane was found." << endl;
            //return planeList.at(i).getTailNum();
        }
        else
        {
            cout << "Plane was not found" << endl;
            cout << "Please enter tail number again" << endl;
            cin.ignore();
            getline(cin, tempTailNum);
        }
    }
}

void planes::printPlaneInfo(vector <plane> &planeList, string &tailNum)
{
    string tempTailNum;
    cout << "Enter the plane tail number" << endl;
    cin.ignore();
    getline(cin, tempTailNum);
    int x = planeList.size();

    for(int i = 0; i < x; i++)
    {
        if(planeList.at(i).getTailNum() == tempTailNum)
        {
            cout << "Plane Make:" << setw(2) << planeList.at(i).getPlaneMake() << endl;
            cout << "Plane Model:" << setw(2) << planeList.at(i).getPlaneModel() << endl;
            cout << "Tail Number:" << setw(2) << planeList.at(i).getTailNum() << endl;
            cout << "Number of seat:" << setw(2) << planeList.at(i).getNumSeats() << endl;
            cout << "Range of miles before re-fuel:" << setw(2) << planeList.at(i).getRange() << endl;
            cout << "Minimum number of crew needed:" << setw(2) << planeList.at(i).getMinNumCrew() << endl;
        }
        else if(planeList.at(i).getTailNum() != tempTailNum)
        {
            cout << "Plane was not found" << endl;
            cout << "Please enter tail number again" << endl;
            cin.ignore();
            getline(cin, tempTailNum);
        }
    }
}
