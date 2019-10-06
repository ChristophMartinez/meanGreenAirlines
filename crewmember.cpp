#include "crewmember.h"
#include "pilot.h"
#include "copilot.h"
#include "cabin.h"

#include <iostream>
#include <string>


crewMember::crewMember()//default constructor to initialize vars
{
    crewName = "none";
    crewType = "none";
    crewId = 0;
}

crewMember::crewMember(string crewNameTemp, string crewTypeTemp)//overloader constructor 
{
    crewName = crewNameTemp;
    crewType = crewTypeTemp;   
}

void crewMember::setCrewName()
{
    cout << "Name of the crew member?" << endl;
    cin.ignore();
    getline(cin, crewName);
}

void crewMember::setCrewId()
{
    cout << "Enter ID for crew member: \n" ;
    cin >> crewId;
}

void crewMember::setCrewType()
{
    pilot obj;
    coPilot obj1;
    cabin obj2;

    string type1 = "pilot";
    string type2 = "copilot";
    string type3 = "cabin";

    cout << "What role is this crewmember? (Example: pilot, co pilot, cabin)" << endl;
    cin.ignore();
    getline(cin, crewType);

    if(crewType == type1)
    {
        obj.setPilotRating();
        obj.setPilotFlightHrs();
    }
    if(crewType == type2)
    {
        obj1.setCoPilotRating();
        obj1.setCoPilotFlightHrs();
    }
    if(crewType == type3)
    {
        obj2.setPosition();
    }
}

/*
string crewMember::getCrewType()
{
    return crewType;
}
*/
