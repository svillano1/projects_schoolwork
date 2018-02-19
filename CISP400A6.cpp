// Assignment A6 - Steven Villano - SID# W0570843
// CISP400A6.cpp
// Driver file


/* Purpose of assignment is to write a simple function template for predicate function isEqualTo that compares its two
arguments of the same type with the equality operator (==) and returns true if they are equal and false if they are not
equal. Use this function template in a program that calls isEqualTo on a variety of built-in types and user defined types,
Complex and Date.*/

#include <iostream>
#include <string>
#include "Date.h"
#include "Complex.h"
using namespace std;


template <typename T>
bool isEqualTo(T arg1, T arg2 )
{
     if( arg1 == arg2 ) {
          cout << arg1 << " and " << arg2 << " are equal" << endl;
          return true;
     }
     else {
          cout << arg1 << " and " << arg2 << " are \"NOT\" equal" << endl;
          return false;
     }
}

int main()
{
     string type;

     int a = 1;
     int b = 2;
     int c = 4;
     int d = -1;

     char e = 'a';
     char f = 'c';
     
     double g = 2.2;
     double h = 2.3;
     double i = -2.2;

     Complex j(10, 5);
     Complex k(10, 54);
     Complex l(10, -5);
     Complex m(-10, -5);

     string n = "abcdefg";
     string o = "abcdefh";
     string p = "-abcdefg";

     Date q(2, 31, 2016);
     Date r(-2, 13, 2016);
     Date s(2, 14, 2016);
     Date t(2, 13, 2016);

     cout << "***  Integers Tests  ***" << endl;
     cout << "Integers: ";
     isEqualTo(a, a);
     cout << "Integers: ";
     isEqualTo(b, c);
     cout << "Integers: ";
     isEqualTo(d, a);
     cout << "Integers: ";
     isEqualTo(d, d);

     cout << "\n\n***  Chars Tests  ***" << endl;
     cout << "Characters: ";
     isEqualTo(e, e);
     cout << "Characters: ";
     isEqualTo(e, f);
     cout << "Characters: ";
     isEqualTo(f, e);
     cout << "Characters: ";
     isEqualTo(f, f);

     cout << "\n\n***  Double Tests  ***" << endl;
     cout << "Double numbers: ";
     isEqualTo(g, g);
     cout << "Double numbers: ";
     isEqualTo(g, h);
     cout << "Double numbers: ";
     isEqualTo(i, g);
     cout << "Double numbers: ";
     isEqualTo(i, i);

     cout << "\n\n***  Complex Tests  ***" << endl;
     cout << "Class objects: ";
     isEqualTo(j, j);
     cout << "Class objects: ";
     isEqualTo(j, k);
     cout << "Class objects: ";
     isEqualTo(l, j);
     cout << "Class objects: ";
     isEqualTo(m, m);

     cout << "\n\n***  String Tests  ***" << endl;
     cout << "String objects: ";
     isEqualTo(n, n);
     cout << "String objects: ";
     isEqualTo(n, o);
     cout << "String objects: ";
     isEqualTo(p, n);
     cout << "String objects: ";
     isEqualTo(p, p);

     cout << "\n\n***  Date Tests  ***" << endl;
     cout << "Date objects: ";
     isEqualTo(q, q);
     cout << "Date objects: ";
     isEqualTo(r, s);
     cout << "Date objects: ";
     isEqualTo(r, t);
     cout << "Date objects: ";
     isEqualTo(r, r);


     cout << "\n" << endl;
     system( "PAUSE" );

     return 0;
}