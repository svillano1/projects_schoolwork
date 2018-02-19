// Assignment A5 - Steven Villano - SID# W0570843
// CISP400V9A5.cpp


/* Main purpose of assignment: a) Modifiy the class to enable input and output of complex numbers through the overloaded
                               >> and << operators, respectively
                               b) Overload the multiplication operator to enable multiplicationh of two complex numbers.
                               c) Overload the division operator to enable division of two complex numbers.
                               d) Overload the == and != operators to allow comparisons of complex numbers.
                               e) Overload the = operator to allow assignment of one Complex object to another Complex object.
                               f) Create CISP400V9A5.cpp to test all the functions designed in the assignment.*/


// Complex class test program.
#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
     // instantiate Complex objects
   Complex x;
   Complex y( 4.3, 8.2 );
   Complex z( 3.3, 1.1 );
   Complex k;
   Complex l;
   Complex m( 0, 0.1 );

   // prompt user for input for Complex object k
   cout << "Enter a complex number in the form: (a, b) for Complex object k: " << endl;
   cout << "(Performing >> operator overloading.)" << endl;
   cout << "? ";
   cin >> k;  // read input into k using overloaded >> operator

   // print existing Complex objects using overloaded << operator
   cout << "\nThe existing Complex objects are:" << endl;
   cout << "(Performing << operator overloading.)" << endl;
   cout << "\nx: " << x;
   cout << "\ny: " << y;
   cout << "\nz: " << z;
   cout << "\nk: " << k;
   cout << "\nl: " << l;
   cout << "\nm: " << m << '\n';

   // demonstrate overloaded +, =, and << operators working correctly
   cout << "\nPerforming +, = and << operators overloading.";
   x = y + z;
   cout << "\nx = y + z:\n" << x;
   cout << " = " << y;
   cout << " + " << z << endl;

   // demonstrate overloaded -, =, and << operators working correctly
   cout << "\nPerforming -, = and << operators overloading.";
   x = y - z;
   cout << "\nx = y - z:\n" << x;
   cout << " = " << y;
   cout << " - " << z << endl;

   // demonstrate overloaded *, =, and << operators working correctly
   cout << "\nPerforming *, = and << operators overloading.";
   x = y * z;
   cout << "\nx = y * z:\n" << x;
   cout << " = " << y;
   cout << " * " << z << endl;

   // demonstrate overloaded /, =, and << operators working correctly
   cout << "\nPerforming /, = and << operators overloading.";
   x = y / z;
   cout << "\nx = y / z:\n" << x;
   cout << " = " << y;
   cout << " / " << z << endl;

   // demonstrate overloaded / operator with divisor of (0, 0)
   cout << "\nPerforming /, = and << operators overloading where divisor is (0, 0).";
   x = y / l;
   cout << "\nx = y / l:\n" << x;
   cout << " = " << y;
   cout << " / " << l << endl;

   // demonstrate overloaded / operator with divisor close to 0
   cout << "\nPerforming /, = and << operators overloading where divisor is (0, 0.1).";
   x = y / m;
   cout << "\nx = y / m:\n" << x;
   cout << " = " << y;
   cout << " / " << m << endl;

   // demonstrate inequality operator working correctly
   cout << "\nPerforming != and << operators overloading." << endl;
   cout << "check x != k" << endl;
   if( x != k ) {
        cout << x << " != " << k << endl;
   }

   // demonstrate assignment, and equality operators working correctly
   cout << "\nPerforming =, == and << operators overloading." << endl;
   cout << "assign k to x by using x = k statement." << endl;
   cout << "check x == k" << endl;
   x = k;
   if( x == k ) {
        cout << x << " == " << k << endl;
   }

   system("PAUSE");
   cout << "\nPress any key to continue...." << endl;
} // end main
