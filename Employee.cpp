// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment AD1 Description:
// Creeate an Employee class that includes three private data members - firstName (type string), lastName (type string), and monthlySalary (type int).
// It also includes several pyublic member functions:
// 1) A constructor initializes the three data members
// 2) A setFirstName function accepts a string parameter and does not return any data. It sets the firstName.
// 3) A getFirstName function does not accept any parameter and returns a string. It returns the firstName.
// 4) A setLastName function accepts a string parameter and does not retuyrn any data. It sets the lastName.
// 5) A getLastName function does not accept any parameter and returns a string. It returns the lastName.
// 6) A setMonthlySalary function accepts an integer parameter and does not return any data. It sets the monthlySalary. If the monthly salary is less than or equal to zero, set it to 1000 and it displayes the employee's first name, last name and the inputted salary with a statement "**==The salary is set to $1000."
// 7) A getMonthlySalary function does not accept any parameter and returns an integer. It returns the monthlySalary.
// 8) An increaseMonthlySalary function accepts an integer parameter and does not return any data. It increases the monthly salary by integer %. The increase could be positive or negative. When this function is called the salary adjusted employee's name and salary information will be displayed.

// Employee.cpp
// Author: Steven Villano - #W0570843
// Date: January 28, 2015

#include <iostream>
#include "Employee.h"

using namespace std;

// constructor initializes firstName, lastName, monthlySalary
Employee::Employee( string fname, string lname, int salary )
{
     setFirstName(fname); // member initializer to initialize firstName
     setLastName(lname); // member initializer to initialize lastName
     setMonthlySalary(salary); // member initializer to initialize monthlySalary
} // end Employee constructor

// function to set the first name
void Employee::setFirstName( string fname )
{
	firstName = fname; // store the first name in the object
} // end function setFirstName

// function to get the first name
string Employee::getFirstName() const
{
	return firstName; // return object's firstName
} // end function getFirstName

// function to set the last name
void Employee::setLastName( string lname )
{
	lastName = lname; // store the last name in the object
} // end function setLastName

// function to get the last name
string Employee::getLastName() const
{
	return lastName; // return object's lastName
} // end function getLastName

// function to set the salary
void Employee::setMonthlySalary( int salary )
{
     if (salary > 0) {
          monthlySalary = salary;
     }
     else {
          cout <<"\n" << "XX Employee: " << Employee::getFirstName() << " " << Employee::getLastName() << "'s inputted salary is " << salary << endl;
          cout << "** The salary is set to $1000. **" << endl;
          monthlySalary = 1000;
     }
} // end function setMonthlySalary

// function to get the salary
int Employee::getMonthlySalary()
{
	return monthlySalary; // return object's monthly salary
} // end function getMonthlySalary

// function to increase salary
void Employee::increaseMonthlySalary(int increase)
{
     int salary = Employee::getMonthlySalary();

     if (increase < 0) {
          cout << "--- Employee: " << Employee::getFirstName() << " " << Employee::getLastName() << " has a salary adjustment of " << increase << "%" << endl;
          cout << "The original monthly salary is $" << Employee::getMonthlySalary() << endl;
          salary = salary + ((salary * increase) / 100);
          Employee::setMonthlySalary(salary);
          cout << "The new monthly salary is $" << Employee::getMonthlySalary() << "\n" <<endl;
     }
     else {
          cout << "*** Employee: " << Employee::getFirstName() << " " << Employee::getLastName() << " has a salary adjustment of " << increase << "%" << endl;
          cout << "The original monthly salary is $" << Employee::getMonthlySalary() << endl;
          salary = salary + ((salary * increase) / 100);
          Employee::setMonthlySalary(salary);
          cout << "The new monthly salary is $" << Employee::getMonthlySalary() << "\n" << endl;
     }
    
}