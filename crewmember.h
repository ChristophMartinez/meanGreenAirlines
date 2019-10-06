#ifndef CREWMEMBER_H
#define CREWMEMBER_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class crewMember
{
    protected://list of vars in class
        string crewName;
        int crewId;
        string crewType;
        vector <crewMember> crewList;


    public://list of funcs in class
        crewMember();
//        ~crewMember();
        crewMember(string crewNameTemp, string crewTypeTemp);
        
        void setCrewName();
        string getCrewName(){return crewName;};
        void setCrewId();
        int getCrewId(){return crewId;};
        void setCrewType();
        string getCrewType(){return crewType;};
};

#endif
