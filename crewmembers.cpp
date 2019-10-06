#include "crewmembers.h"
#include "pilot.h"
#include "copilot.h"
#include "cabin.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

crewMembers::crewMembers()//default constructor 
{
    //not sure what to put here 
}

void crewMembers::addCrewMembers(vector <crewMember> &crewList, int &crewId)
{
    crewObject.setCrewName();
    crewObject.setCrewId();
    crewObject.setCrewType();
    

    crewList.push_back(crewObject);//add object to vector 
}

void crewMembers::editCrewMembers(vector <crewMember> &crewList, int &crewId)
{
    int tempCrewId;
   // crewMembers object1;

    cout << "Enter the Employee Id/Crew Id:" << endl;
    cin >> tempCrewId;

    int x = crewList.size();

    for(int i = 0; i < x; i++)
    {
        if(crewList.at(i).getCrewId() == tempCrewId)
        {
            crewObject.setCrewName();
            crewObject.setCrewId();
            crewObject.setCrewType();

            crewList.at(i) = crewObject;
            crewList.push_back(crewObject);
        }
        else
        {
            cout << "The Employee Id/Crew Id you enter was not found" << endl;
            cout << "Please re-enter an Employee Id/Crew Id:" << endl;
            cin >> tempCrewId;
        }
    }
}

void crewMembers::deleteCrewMembers(vector <crewMember> &crewList, int &crewId)
{
    int tempCrewId;
    crewMembers object;
    
    cout << "Enter the Employee Id/Crew Id:" << endl;
    cin >> tempCrewId;

    int x = crewList.size();

    for(int i = 0; i < x; i++)
    {
        if(crewList.at(i).getCrewId() == tempCrewId)
        {
           crewList.erase(crewList.begin() + i);//delete object in vector
        }
    }
}

void crewMembers::searchCrewMembers(vector <crewMember> &crewList, int &crewId)
{
    int tempCrewId;
    crewMembers object;

    cout<< "Enter the Employee Id/Crew Id:" << endl;
    cin >> tempCrewId;

    int x = crewList.size();

    for(int i = 0; i < x; i++)
    {
        if(crewList.at(i).getCrewId() == tempCrewId)
        {
            cout << "The Employee you were looking for was found." << endl;
        }
        else
        {
            cout << "The Employee your were looking for was not found." << endl;
        }
    }

}

void crewMembers::printCrewMembers(vector <crewMember> &crewList, int &crewId)
{
    int tempCrewId;

    cout << "Enter the Employee Id/Crew Id you would like to print the info for:" << endl;
    cin >> tempCrewId;

    int x = crewList.size();

    for(int i = 0; i < x; i++)
    {
        if(crewList.at(i).getCrewId() == tempCrewId)
        {
            cout << "Crewmember Name:" << setw(2) << crewList.at(i).getCrewName() << endl;
            cout << "Crewmember Id:" << setw(2) << crewList.at(i).getCrewId() << endl;
            cout << "Crewmember Type:" << setw(2) << crewList.at(i).getCrewType() << endl;
        }
        else
        {
            cout << "The Employee Id/Crew Id was not found." << endl;
            cout << "Please enter a Employee Id/Crew Id again:" << endl;
            cin >> tempCrewId;
        }
    }
}
