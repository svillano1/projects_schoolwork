// Assignment A4 - Steven Villano - SID# W0570843
// Date.h 
// Date class definition; Member functions defined in Date.cpp

/* Main purpose of assignment: Modify the Time class of Figs. 9.4–9.5(attached) to be able to work with Date class. 
The Time object should always remain in a consistent state. 
Modify the Date class of Figs. 9.17- 9.18(attached) to include a Time class object as a composition, 
a tick member function that increments the time stored in a Date object by one second, 
and increaseADay function to increase day, month and year when it is proper. 
Please use CISP400V9A4.cpp that tests the tick member function in a loop that prints the time in standard format during 
iteration of the loop to illustrate that the tick member function works correctly. Be aware that we are testing the following cases:

a) Incrementing into the next minute.
b) Incrementing into the next hour.
c) Incrementing into the next day (i.e., 11:59:59 PM to 12:00:00 AM).
d) Incrementing into the next month and next year.*/


#ifndef DATE_H
#define DATE_H

#include "Time.h"

class Date
{
public:
   static const unsigned int monthsPerYear = 12; // months in a year
   explicit Date(int = 1, int = 2, int = 1900, const Time = Time()); // default constructor
   void print() const; // print date in month/day/year format
   void increaseADay();  // increases private data member day by one
   void tick(); // increases one second to Time object
   ~Date(); // provided to confirm destruction order

private:
   unsigned int month; // 1-12 (January-December)
   unsigned int day; // 1-31 based on month
   unsigned int year; // any year
   Time time; // private Time object


   // utility function to check if day is proper for month and year
   unsigned int checkDay(int) const;
}; // end class Date

#endif