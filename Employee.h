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


// Employee.h
// Employee class definition
// Author: Steven Villano - #W0570843
// Date: January 28, 2015

#include <string> // class Employee uses C++ standard string library

// Employee class definition
class Employee
{
public:
	explicit Employee( std::string, std::string, int ); // constructor to initialize firstName, lastName, monthlySalary
	void setFirstName( std::string ); // sets the first name
	std::string getFirstName() const; // gets the first name
	void setLastName( std::string ); // sets the last name
	std::string getLastName() const; // gets the last name
	void setMonthlySalary( int ); // sets the monthly salary
	int getMonthlySalary(); // gets the monthly salary
	void increaseMonthlySalary( int ); // increases the monthly salary by integer %
private:
	std::string firstName; // first name for employee
	std::string lastName; // last name for employee
	int monthlySalary; // monthly salary for employee
}; // end class Employee