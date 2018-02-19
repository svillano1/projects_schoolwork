// Assignment A4 - Steven Villano - SID# W0570843
// CISP400V9A4.cpp

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

#include <iostream> 
using std::cout; 
using std::endl; 

#include "Time.h" // include Time class definition
#include "Date.h" // include Date class definition

const int MAX_TICKS = 50;

int main()
{
	Time t(23, 59, 58);// create a time object

  Date d(12, 31, 2014, t); // create date object

   // output Time object t's values 
   for ( int ticks = 1; ticks < MAX_TICKS; ++ticks ) 
   {
      d.print(); // invokes print 
	  cout << endl;
      d.tick(); // invokes function tick
   } // end for
   d.~Date();// call Date destructor
system("PAUSE");
   return 0;
} // end main
