// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment A1 Description
// Modify class Gradebook by:
// a) Include a second private data member instructorName in the GradeBook class. It represents the course instructor's name. The data type of instructorName is a string.
// b) Create a new setInstructorName function in the GradeBook class. The function sets the instructor name. It accepts a string argument and dose not return anything.
// c) Create a new getInstructorName function in the GradeBook class. The function retrieves the instructor name. It does not accept any argument and returns one string data.
// d) Modify the constructor to accept two parameters - one for the course name and one for the instructor name.
// e) Adjust all the necessary statements in the GradeBook.cpp file to display the required space(s) and line space(s).

/ Gradebook.h - class definintion
// Author: Steven Villano
// Date: January 29, 2015

#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
   explicit GradeBook( std::string, std::string ); // constructor initialize courseName and instructorName
   void setCourseName( std::string ); // sets the course name
   std::string getCourseName() const; // gets the course name
   void setInstructorName(std::string); // sets the instructor name
   std::string getInstructorName() const; // gets the instructor name
   void displayMessage() const; // displays a welcome message
private:
   std::string courseName; // course name for this GradeBook
   std::string instructorName; // instructor name for this GradeBook
}; // end class GradeBook  


