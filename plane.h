#ifndef PLANE_H
#define PLANE_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class plane
{
    protected://list of all vars in class
        string planeMake;
        int planeModel;
        string tailNum;
        int numSeats;
        int range;
        int minNumCrew;
//        bool planeAvail;
        
//        vector <plane> planeInfo;
        
    public://list of all funcs in class
        plane();//default constructor
        plane(string planeMakeTemp, int planeModelTemp, string tailNumTemp, int numSeatsTemp, int rangeTemp, int minNumCrewTemp);//overloader 

        void setPlaneMake();
        string getPlaneMake(){return planeMake; };
        void setPlaneModel();
        int getPlaneModel(){return planeModel;};
        void setTailNum();
        string getTailNum(){return tailNum;};
        void setNumSeats();
        int getNumSeats(){return numSeats;};
        void setRange();
        int getRange(){return range;};
        void setMinNumCrew();
        int getMinNumCrew(){return minNumCrew;};
};

#endif
