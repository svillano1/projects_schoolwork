// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment A1 Description
// Modify class Gradebook by:
// a) Include a second private data member instructorName in the GradeBook class. It represents the course instructor's name. The data type of instructorName is a string.
// b) Create a new setInstructorName function in the GradeBook class. The function sets the instructor name. It accepts a string argument and dose not return anything.
// c) Create a new getInstructorName function in the GradeBook class. The function retrieves the instructor name. It does not accept any argument and returns one string data.
// d) Modify the constructor to accept two parameters - one for the course name and one for the instructor name.
// e) Adjust all the necessary statements in the GradeBook.cpp file to display the required space(s) and line space(s).

// GradeBook.cpp - methods for GradeBook class
// Author: Steven Villano
// Date: January 29, 2015

#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName, instructorName with string supplied as argument
GradeBook::GradeBook(string name, string instr)
     : courseName( name ) // member initializer to initialize courseName 
     , instructorName( instr ) // member initializer to initialize instructorName
{                                                                      
   // empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
   return courseName; // return object's courseName
} // end function getCourseName

// function to set the instructor name
void GradeBook::setInstructorName(string instr)
{
     instructorName = instr; // stor the course name in the object
} // end function setInstructorName

// function to get the instructor name
string GradeBook::getInstructorName() const
{
     return instructorName; // return object's instuctorName
} // end function getInstructorName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
   // call getCourseName to get the courseName
   cout << "Welcome to the grade book for\n" << getCourseName() 
      << "!" << endl;
   cout << "This course is presented by: " << getInstructorName() << "\n" << endl;
} // end function displayMessage  