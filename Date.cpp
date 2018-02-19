// Assignment A4 - Steven Villano - SID# W0570843
// Date.cpp
// Date class member-function definitions.

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


#include <array>
#include <iostream>
#include <stdexcept>
#include "Date.h" // include Date class definition
#include "Time.h"
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int mn, int dy, int yr, const Time time) :time(time)
{
   if ( mn > 0 && mn <= monthsPerYear ) // validate the month
      month = mn;
   else 
      throw invalid_argument( "month must be 1-12" );

   year = yr; // could validate yr
   day = checkDay( dy ); // validate the day

   // output Date object to show when its constructor is called
   cout << "Date object constructor for date ";
   print();                   
   cout << endl;
} // end Date constructor

// print Date object in form month/day/year
void Date::print() const
{
     cout << month << '/' << day << '/' << year << "\t";
     time.printStandard();
     cout << "\t";
     time.printUniversal();
} // end function print

// output Date object to show when its destructor is called
Date::~Date()
{ 
   cout << "Date object destructor for is called\n";
   print();
   cout << endl;
} // end ~Date destructor

// increment Time by one second
void Date::tick()
{
     int tempSec = time.getSecond();  // gets second
     int tempMin = time.getMinute();  // gets current minute
     int tempHr = time.getHour();   // gets current hour

     // increment second by one and adjust minutes if sec > 59
     if (tempSec < 59) {
          tempSec++;
          time.setSecond(tempSec);
     }

     else if (tempSec >= 59) {
          time.setSecond(0);
          
          // increment minute by one and adjust hours if min > 60
          if (tempMin < 59) {
               tempMin++;
               time.setMinute(tempMin);
          }

          else if (tempMin >= 59) {
               time.setMinute(0);
               
               // increment hour by one and call increaseADay if hr > 23
               if (tempHr < 23){
                    tempHr++;
                    time.setHour(tempHr);
               }

               else if (tempHr >= 23) {
                    time.setHour(0);
                    increaseADay();
               }
          }
     }
}

// function to increase day
void Date::increaseADay()
{
     unsigned int tempDay = 0;
     ++day;   // increment day
     tempDay = checkDay(day);  //assign result to tempDay
     
     // increase month if current dy is greater than number of days in month
     if (tempDay == 0) {
        month++;
        printf("Day (%d) set to 1.\n", day);
        day = 1;

        // increase year if current month is greater than number of months in year
        if (month > monthsPerYear) {
           year++;
           month = 1;
           day = 1;
        }
     }

}
// utility function to confirm proper day value based on 
// month and year; handles leap years, too
unsigned int Date::checkDay( int testDay ) const
{
   static const array< int, monthsPerYear + 1 > daysPerMonth = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determine whether testDay is valid for specified month
   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;
   
   // February 29 check for leap year 
   else if (month == 2 && testDay == 29 && (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0))) {
        return testDay;
   }
   else {
        return 0;
   }

   throw invalid_argument( "Invalid day for current month and year" );
} // end function checkDay
