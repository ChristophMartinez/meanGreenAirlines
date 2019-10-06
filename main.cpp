/*
Christopher Martinez 
christophermartinez9@my.unt.edu
Program: This Program is builds a data base and user menu for an admin to input informations for aircrafts, employees, and flights.
*/
#include "plane.h"
#include "flight.h"
#include "crewmember.h"
#include "planes.h"
#include "flights.h"
#include "crewmembers.h"
#include "pilot.h"
#include "copilot.h"
#include "cabin.h"
#include <iomanip>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

//enum Choice{AddPlane = 1, EditPlane = 2, DeletePlane = 3, SearchPlane = 4, PrintPLaneInfo = 5, AddFlight = 6, EditFlight = 7, DeleteFlight = 8, SearchFlight = 9, PrintFlightInfo = 10, AddCrewMember = 11, EditCrewMember = 12, DeleteCrewMember = 13, SearchCrewMember = 14, PrintCrewInfo = 15};
void intro();//display the intro and header information 
void descript();//display the description of the program


int main()
{
    vector <plane> planeList;
    vector <flight> flightList;
    vector <crewMember> crewList;
    int userChoice = 0;
    int userChoice2 = 0;//initialize the users entry
    planes object;//way to call functions from classes 
    flights object1;//way to call functions from classes 
    crewMembers object2;//way to call functions from classes 
    string tailNum;
    int crewId;

intro();//call the intro function
descript();//call the description function

/*
    ifstream in_s;
    ofstream out_s;
    fstream iodataFile;

    int userInput;

    cout << "Would like to add on to a previous database? Yes = 1 or No = 2" << endl;
    cin >> userInput;


 if(userInput == 1)
    {
        inFileStream.open("datafile.txt");


        // This is an error checking prosses for the input file.
        while(in_s.fail())
        {
            cout << "The file you tired to open failed. Please try again: ";
            cin >> infile;
            in_s.open(infile);
        }

    else if(userInput == 2)
    {
        return 0;
    }
*/

do//open up the first menu
{
        cout << "          Main Menu                 " << endl;
        cout << " Enter 1 for Plane Options.         " << endl;
        cout << " Enter 2 for Flight Options.        " << endl;
        cout << " Enter 3 for Crew/Employee options. " << endl;
        cout << " Enter 4 to exit.                   " << endl;
        
        int userChoice;
        cin >> userChoice; 
    
    if(userChoice == 1)//opens plane menu
    {
        do
        {
                cout << "             Plane Menu                   " << endl;
                cout << " Select 1 to Add Plane                    " << endl;
                cout << " Select 2 to Edit Plane                   " << endl;
                cout << " Select 3 to Delete Planes                " << endl;
                cout << " Select 4 to Search Planes                " << endl;
                cout << " Select 5 to Print Plane Details          " << endl;
                cout << " Select 16 to exit.                       " << endl;
            
                cin >> userChoice2;//determines what function to call 

            if(userChoice2 == 1)
            {
                object.addPlanes(planeList);//call add plane function
            }
            else if(userChoice2 == 2)
            {
                object.editPlanes(planeList, tailNum);
                cout << "Thank You" << endl;//call edit plane function 
            }   
            else if(userChoice2 == 3)
            {
                object.deletePlanes(planeList, tailNum);
                cout << "Thank You" << endl;//call edit plane function
            }
            else if(userChoice2 == 4)
            {
                object.searchPlanes(planeList, tailNum);//call search plane function 
            }
            else if(userChoice2 == 5)
            {
                object.printPlaneInfo(planeList, tailNum);//call print plane info function
            }
        }while(userChoice2 != 16);
    }
    else if(userChoice == 2)//opens flight menu
    {
        do
        {
                cout << "             Flight Menu                  " << endl;
                cout << " Select 6 to Add Flight.                   " << endl;
                cout << " Select 7 to Edit Flights.                 " << endl;
                cout << " Select 8 to Delete Flights.               " << endl;
                cout << " Select 9 to Search Flights.               " << endl;
                cout << " Select 10 to Print Flight Details.        " << endl;
                cout << " Select 16 to exit.                        " << endl;

                cin >> userChoice2;//determines what function to call

            if(userChoice2 == 6)
            {
                object1.addFlights(flightList, tailNum);
                cout << "Thank You" << endl;//call add flight function
            }
            else if(userChoice2 == 7)
            {
                object1.editFlights(flightList, tailNum);
                cout << "Thank You" << endl;// call edit flight function 
            }
            else if(userChoice2 == 8)
            {
                object1.deleteFlights(flightList, tailNum);
                cout << "Thank You" << endl;//call delete flight function 
            }
            else if(userChoice2 == 9)
            {
                object1.searchFlights(flightList, tailNum);
                cout << "test 9" << endl;//call search flight function
            }
            else if(userChoice2 == 10)
            {
                object1.printFlightInfo(flightList, tailNum);//call print flight function 
            }
        }while(userChoice2 != 16);
    }
    else if(userChoice == 3)
    {
        do
        {    
                cout << "             Crew                             " << endl;
                cout << " Select 11 to Add Crew Member                 " << endl;
                cout << " Select 12 to Edit Crew Member                " << endl;
                cout << " Select 13 to Delete Crew Member              " << endl; 
                cout << " Select 14 to Search Crew Member              " << endl;
                cout << " Select 15 to Print Crew Member Details       " << endl;
                cout << " Select 16 to Exit                            " << endl;
        
                cin >> userChoice2;//determines what function to call 

            if(userChoice2 == 11)
            {
                object2.addCrewMembers(crewList, crewId);
                cout << "Thank You" << endl;
            }
            else if(userChoice2 == 12)
            {
                object2.editCrewMembers(crewList, crewId);
                cout << "Thank You" << endl;
            }
            else if(userChoice2 == 13)
            {
                object2.deleteCrewMembers(crewList, crewId);
            }
            else if(userChoice2 == 14)
            {
                object2.searchCrewMembers(crewList, crewId);
            }
            else if(userChoice2 == 15)
            {
                object2.printCrewMembers(crewList, crewId);//call print function 
            }
        }while(userChoice2 != 16);
    }
    else if(userChoice == 16)
    {
        return 0;
    }
    
    else//default for user option 
    {
        do
        {
            if(userChoice == 4)
            {
                return 4;
            }
            else
            {
                cout << "Choose another option:" << endl;
                cin >> userChoice;
                if(cin.fail())
                {
                    return 0;
                }
            }
        }while(userChoice2 != 1 && userChoice2 != 2 && userChoice2 != 3 && userChoice2 != 4 && userChoice2 != 5 && userChoice2 != 6 && userChoice2 != 7 && userChoice2 != 8 && userChoice2 != 9 && userChoice2 != 10 && userChoice2 != 11 && userChoice2 != 12 && userChoice2 != 13 && userChoice2 != 14 && userChoice2 != 15 && userChoice2 != 16); 
    }
}while(userChoice != 4);

return 0;
}

void intro()//defintiion on intro func
{
    cout << "******************************************************************************" << endl;
    cout << "**                   Computer Science and Engineering                       **" << endl;
    cout << "**                    CSCE 1040 - Computer Science II                       **" << endl;
    cout << "** Christopher Martinez   --   cbm0166  --  christophermartinez9@my.unt.edu **" << endl;
    cout << "******************************************************************************" << endl;
    cout << endl;
}

void descript()//definition of description func
{
    cout << "*************************The Mean Green Airlines****************************" << endl;
    cout << "Welcome to the Mean Green Airlines Employee and Flight Database.          \n";
    cout << "This program is designed to allow you, the user, to enter information     \n";
    cout << "for new employees, aircrafts, and flights. You are also able to update    \n";
    cout << "current existing information for any of these topics. The menu will       \n";
    cout << "will easily walk you through these processes. Ensure that you read        \n";
    cout << "the menus and prompts carfully before entering the information.           \n";
    cout << "                           Thank You!                                      " << endl;
    cout << "***************************************************************************" << endl;
}

