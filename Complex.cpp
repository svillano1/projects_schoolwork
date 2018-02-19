// Assignment A5 - Steven Villano - SID# W0570843
// Complex.cpp
// Complex implementation file


/* Main purpose of assignment: a) Modifiy the class to enable input and output of complex numbers through the overloaded
                               >> and << operators, respectively
                               b) Overload the multiplication operator to enable multiplicationh of two complex numbers.
                               c) Overload the division operator to enable division of two complex numbers.
                               d) Overload the == and != operators to allow comparisons of complex numbers.
                               e) Overload the = operator to allow assignment of one Complex object to another Complex object.
                               f) Create CISP400V9A5.cpp to test all the functions designed in the assignment.*/


// Complex class member-function definitions.
#include <iostream>
#include <iomanip>
#include "Complex.h" // Complex class definition
using namespace std;

// Constructor
Complex::Complex( double realPart, double imaginaryPart ) 
   : real( realPart ),
   imaginary( imaginaryPart )
{ 
    
} // end Complex constructor

// addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real, 
      imaginary + operand2.imaginary );
} // end function operator+

// subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real, 
      imaginary - operand2.imaginary );
} // end function operator-

// multiplication operator
Complex Complex::operator*( const Complex &operand2 ) const
{
     return Complex(((real * operand2.real) - (imaginary * operand2.imaginary)),
           ((real * operand2.imaginary) + (imaginary * operand2.real)));
} // end function operator*

// division operator
Complex Complex::operator/(const Complex &operand2) const
{
     return Complex( ((real * operand2.real) + (imaginary * operand2.imaginary)) / ((operand2.real * operand2.real) + (operand2.imaginary * operand2.imaginary)),
          ((imaginary * operand2.real) - (real * operand2.imaginary)) / ((operand2.real * operand2.real) + (operand2.imaginary * operand2.imaginary)) );
} // end function operator/

// equality operator
bool Complex::operator==( const Complex &operand2 ) const
{
     if( (real != operand2.real) || (imaginary != operand2.imaginary)) {
          return false;
     }
     return true;
}  // end function ==

bool Complex::operator!=( const Complex &operand2 ) const
{
     return !( *this == operand2 );
}  // end function !=

// assignment operator
Complex Complex::operator=( const Complex &operand2 ) 
{
     return Complex( real = operand2.real,
               imaginary = operand2.imaginary );
}  // end function =

// overloaded input operator
istream &operator>>( istream &input, Complex &number )
{
     input.ignore();   // ignore parenthesis
     input >> number.real; // read real number portion
     input.ignore(2); // ignore comma and space
     input >> number.imaginary;  // read imaginary portion
     input.ignore();   // ignore parenthesis

     return input;
}  // end function >>

// overloaded output operator
ostream &operator<<( ostream &output, const Complex &number )
{
     // if Complex number is undefined - output infinite
    if (((isnan(number.real)) || (isnan(number.imaginary)))) {
         output << "infinite";
    }
    // else output Complex number
    else{
        output << "(" << setw(2) << number.real << ", " << setw(2) << number.imaginary << ")";
    }
    return output;
}




