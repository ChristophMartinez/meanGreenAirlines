#ifndef PLANES_H
#define PLANES_H
#include "plane.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class planes
{
    protected://list of vects in class
        vector <plane> planeList (plane);

    public://list of funcs in class
        planes();//default constructor 
        plane planeObject;//way to iterate through the vector 
    
        void addPlanes(vector <plane> &planeList);
        void editPlanes(vector <plane> &planeList, string &tailNum);
        void deletePlanes(vector <plane> &planeList, string &tailNum);
        void searchPlanes(vector <plane> &plantList, string &tailNum);
        void printPlaneInfo(vector <plane> &planeList,string &tailNum);
};

#endif
