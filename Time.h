// Assignment A4 - Steven Villano - SID# W0570843
// Time.h 
// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.

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


// prevent multiple inclusions of header 
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time 
{
public:
   explicit Time( int = 0, int = 0, int = 0 ); // default constructor
   ~Time(); // destructor

   // set functions
   void setTime( int, int, int); // set hour, minute, second
   void setHour( int ); // set hour (after validation)
   void setMinute( int ); // set minute (after validation)
   void setSecond( int ); // set second (after validation)

   // get functions
   unsigned int getHour() const; // return hour
   unsigned int getMinute() const; // return minute
   unsigned int getSecond() const; // return second

   void printUniversal() const; // output time in universal-time format
   void printStandard() const; // output time in standard-time format
private:
   unsigned int hour; // 0 - 23 (24-hour clock format)
   unsigned int minute; // 0 - 59
   unsigned int second; // 0 - 59
}; // end class Time

#endif