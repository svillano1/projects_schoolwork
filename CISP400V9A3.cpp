// Assignment A3 - Steven Villano - SID# W0570843
// GradeBook class definition that counts letter grades.
// Member functions are defined in GradeBook.cpp

/* Main purpose of assignment: Create a GradeBook class that calculates a grade-point average for a set of grades and displays
** information. You can input A, a, B, b, C, c, D, d, F, f for grades. The inputted data may also be any characters; upper case, 
** lower case, or a special character. The system should detect an improper grade input and allow reentering information.
** The grade of A is worth 4 points, B is worth 3 points, etc. 
** You can use GradeBook program of Fig. 5.9 - Fig. 5.11 as a starting point.*/

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

int main()
{
   // create GradeBook object myGradeBook and 
   // pass course name to constructor
   GradeBook myGradeBook( "CISP400 Object Oriented Programming with C++" );

   myGradeBook.displayMessage(); // display welcome message
   myGradeBook.inputGrades(); // read grades from user
   myGradeBook.displayInputs(); // display inputted information
   myGradeBook.displayGradeReport(); // display report based on grades
   myGradeBook.~GradeBook(); // call destructor
	myGradeBook.displayMessage(); //try to display the destroyed object information
   system("PAUSE");
   return 0; // indicate successful termination
} // end main

