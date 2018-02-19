// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment A2 description
// Create an Encrypt class which includes Encrypt.h and Encrypt.cpp
// Encrypt class has an integer private data member 8-element array named digits. The first 4 elements are to store the original 4 digit integer, and the next 4 are to store the encypted data
// An Encrypt constructor takes an integer of any digits and stores the last four digits. It encrpyts the las four digits, stores the encrypted information, displays a call to the constructor information, and shows the original information and encrypted information. If the inputted number is less than or equal to 0, the integer is set to 9436.
// A displayOriginalData function does not accept and retuyrn any data. It displays the first four elements of the private data member
// A storeData function takes an integer and does not return anything. It stores the last four digits of the passed in integer to the first 4 elements of the private data member, encrypts the data and store them in the last 4 elements of the private data member.
// A displayEncryptedData function does not accept and return any data. It displays the last foru elements of the private data member.


// Encrypt.cpp file - methods for Encrypt class
// Author Steven Villano SID # W0570843
// Date: February 3, 2015

#include <iostream>
#include "Encrypt.h"  // include definition of class Encrypt
using namespace std;

// constructor initializes value with int supplied as argument
Encrypt::Encrypt(int value)
{
     cout << "** The default constructor is called\n" << "    and the passed in number is " << value << ".**\n" << endl;
     if (value <= 0) {
          value = 9436;
          cout << " XXX The inputted number is less than or equal to 0.\n";
          cout << "     The number is reset to " << value << ". XXX\n" << endl;
     }

     storeData(value);
     displayOriginalData();
     displayEncryptedData();

}  // end Encrypt constructor

void Encrypt::storeData( int value )
{
     int i = 0; // initialize counter to store digits
     
     // store digits in array
     for (i = 3; i >= 0; --i) {
          digits[i] = value % 10;
          value = value / 10;
     }

     // swap digits
     digits[4] = digits[2];
     digits[5] = digits[3];
     digits[6] = digits[0];
     digits[7] = digits[1];

     for (i = 4; i <= 7; ++i) {
          digits[i] = (digits[i] + 7) % 10;
     }
}  // end method storeData

void Encrypt::displayOriginalData()
{
     cout << "     The original data is  " << digits[0] << " " << digits[1] << " " << digits[2] << " " << digits[3] << "." << endl;
}

void Encrypt::displayEncryptedData()
{
     cout << "     The encrypted data is  " << digits[4] << " " << digits[5] << " " << digits[6] << " " << digits[7] << ".\n" << endl;
}