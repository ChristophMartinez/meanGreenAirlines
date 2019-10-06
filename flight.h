#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <string>
#include <vector>
#include <chrono>


using namespace std;

class flight
{
    protected://list of all vars and vects in class 
        vector <int> pilotId;
        vector <int> crewId;
        vector <flight> flightList;
        string tailNum;
        int numOfPilots;
        int numOfCrew;
        int minNumCrew;
        int numPassengers;
/*      int tm_sec;//second of min from 0-61
        int tm_min;//min of hr from 0-59
        int tm_hour;//hrs of day from 0-23
        int tm_mday;//day of month from 1-31
        int tm_mon;//month of yr
        int tm_year;//yrs since 1900
        int tm_wday;//days since Sunday from 0-6
        int tm_yday;//days since Jan 1st from 0-365 
*/
        time_t makedate(int year, int month, int day)
        {
            struct tm tm = {0};
            tm.tm_hour = 12;
            tm.tm_min = tm.tm_sec = 0;
            tm.tm_year = year - 1900;
            tm.tm_mon = month - 1;
            tm.tm_mday = day;
            tm.tm_isdst = -1;
            return mktime(&tm);
        }
        string departureTime;
        string arrivalTime;
        string startPortCode;
        string endPortCode;
        string status;
      
 //       vector <flight> flightInfo;
 //       vector <int> flightCrew(int pilotId, int numOfPilots, int numOfCrew);

    public://list of all funcs in class 
        flight();//default construtor 
        flight(string tailNum, int numOfPilotsTemp, int pilotIdTemp, int numCrewTemp, int minNumCrewTemp, string departureTimeTemp, string arrivalTimeTemp, int numPassengerTemp, string startPortCodeTemp, string endPortCodeTemp);
/*
        //time funcs given by Keathly link: https://www.tutorialspoint.com/cplusplus/cpp_date_time
        time_t time(time_t *time);//return the current calendar time of OS
        char *ctime(const time_t *time);//returns a pointer to a string D/Mo/Yr hrs:min:sec
        struct tm *localtime(const time_t *time);//return a ptr to the tm struct of local time
        struct tm *gmtime(const time_t *time);//return a ptr to the time in tm struct form. Greenwich Mean Time(GMT)
        time_t mktime(struct tm *time);//return calendar-time = to time found in struct
        double difftime(time_t time2, time_t time1);
*/
//     time_t makedate(int year, int month, int day);
        double difftime(time_t time2, time_t time1);

        void setPlaneId();
        string getPlaneId(){return tailNum;};
        void setNumOfPilots();
        int getNumOfPilots(){return numOfPilots;};
        void setPilotId();
        void getPilotId();
        void setCrewId();
        void getCrewId();
        void setNumOfCrew();
        int getNumOfCrew(){return numOfCrew;};
        void setMinNumCrew();
        int getMinNumCrew(){return minNumCrew;};
        void setNumPassengers();
        int getNumPassengers(){return numPassengers;};
        void setStartPortCode();
        string getStartPortCode(){return startPortCode;};
        void setEndPortCode();
        string getEndPortCode(){return endPortCode;};
        void setStatus();
        string getStatus(){return status;};
        void setDepartureTime();
        string getDepartureTime(){return departureTime;};
        void setArrivalTime();
        string getArrivalTime(){return arrivalTime;};
};

#endif
