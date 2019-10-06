#include "cabin.h"
#include "crewmember.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

cabin::cabin()
{
    position = "none";
}

cabin::cabin(string crewNameTemp, string crewTypeTemp, double flightHrsTemp, string positionTemp)
{
    position = positionTemp;
}

void cabin::setPosition()
{
    cout << "What position will this crewmember be working in?" << endl;
    cin.ignore();
    string tempPosition;
    getline(cin, tempPosition);
}
