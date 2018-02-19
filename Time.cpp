// Assignment A4 - Steven Villano - SID# W0570843
// Time.cpp
// Member-function definitions for class Time.

/* Main purpose of assignment: Modify the Time class of Figs. 9.4�9.5(attached) to be able to work with Date class.
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


#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

// Time constructor initializes each data member 
Time::Time( int hour, int minute, int second ) 
{ 
   setTime( hour, minute, second ); // validate and set time
   cout << "Time object constructor is called. ";

   printStandard();
   cout << "\t";
   printUniversal();
   cout << "\n";
} // end Time constructor

// set new Time value using universal time
void Time::setTime( int h, int m, int s )
{
   setHour( h ); // set private field hour
   setMinute( m ); // set private field minute
   setSecond( s ); // set private field second
} // end function setTime

// set hour value
void Time::setHour( int h )
{
   if ( h >= 0 && h < 24 )
      hour = h;
   else
      throw invalid_argument( "hour must be 0-23" );
} // end function setHour

// set minute value
void Time::setMinute( int m )
{
   if ( m >= 0 && m < 60 )
      minute = m; 
   else
      throw invalid_argument( "minute must be 0-59" );
} // end function setMinute

// set second value
void Time::setSecond( int s )
{
   if ( s >= 0 && s < 60 )
      second = s;
   else
      throw invalid_argument( "second must be 0-59" );
} // end function setSecond

// return hour value
unsigned int Time::getHour() const
{
   return hour;
} // end function getHour

// return minute value
unsigned int Time::getMinute() const
{
   return minute;
} // end function getMinute

// return second value
unsigned int Time::getSecond() const
{
   return second;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
   cout << ( ( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
} // end function printStandard

// Time destructor
Time::~Time()
{
     cout << "Time object destructor is called. ";
     printStandard();
     cout << "\t";
     printUniversal();
     cout << "\n";
}