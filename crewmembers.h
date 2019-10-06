#ifndef CREWMEMBERS_H
#define CREWMEMBERS_H
#include "crewmember.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class crewMembers 
{
    protected://list of vects in class 
        vector <crewMember> crewList (crewMember);
        crewMember crewObject;
        
    public://list of funcs in class 
        crewMembers();//default constructor 
 //       ~crewMembers();
        crewMembers(string crewNameTemp, string crewTypeTemp);

        void addCrewMembers(vector <crewMember> &crewList, int &crewId);
        void editCrewMembers(vector <crewMember> &crewList, int &crewId);
        void deleteCrewMembers(vector <crewMember> &crewList, int &crewId);
        void searchCrewMembers(vector <crewMember> &crewList, int &crewId);
        void printCrewMembers(vector <crewMember> &crewList, int &crewId);
};

#endif
