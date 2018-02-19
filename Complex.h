// Assignment A5 - Steven Villano - SID# W0570843
// Complex.h
// Complex class definition.


/* Main purpose of assignment: a) Modifiy the class to enable input and output of complex numbers through the overloaded
                               >> and << operators, respectively
                               b) Overload the multiplication operator to enable multiplicationh of two complex numbers.
                               c) Overload the division operator to enable division of two complex numbers.
                               d) Overload the == and != operators to allow comparisons of complex numbers.
                               e) Overload the = operator to allow assignment of one Complex object to another Complex object.
                               f) Create CISP400V9A5.cpp to test all the functions designed in the assignment.*/


#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
     friend std::ostream &operator<<(std::ostream &, const Complex &); // output
     friend std::istream &operator>>(std::istream &, Complex &); // input

public:
   explicit Complex( double = 0.0, double = 0.0 ); // constructor
   Complex operator+( const Complex & ) const; // addition
   Complex operator-( const Complex & ) const; // subtraction
   Complex operator*( const Complex & ) const; // multiplication
   Complex operator/( const Complex & ) const; // division
   bool operator==( const Complex & ) const; // equivalent
   bool operator!=( const Complex & ) const; // not-equivalent
   Complex operator=( const Complex & ); // assignment operator
   
private:
   double real; // real part
   double imaginary; // imaginary part
}; // end class Complex

#endif