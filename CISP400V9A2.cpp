// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment A2 description
// Create an Encrypt class which includes Encrypt.h and Encrypt.cpp
// Encrypt class has an integer private data member 8-element array named digits. The first 4 elements are to store the original 4 digit integer, and the next 4 are to store the encypted data
// An Encrypt constructor takes an integer of any digits and stores the last four digits. It encrpyts the las four digits, stores the encrypted information, displays a call to the constructor information, and shows the original information and encrypted information. If the inputted number is less than or equal to 0, the integer is set to 9436.
// A displayOriginalData function does not accept and retuyrn any data. It displays the first four elements of the private data member
// A storeData function takes an integer and does not return anything. It stores the last four digits of the passed in integer to the first 4 elements of the private data member, encrypts the data and store them in the last 4 elements of the private data member.
// A displayEncryptedData function does not accept and return any data. It displays the last foru elements of the private data member.

// CISP400V9A2.cpp
// Test program for class Encrypt.
#include "Encrypt.h" // include definition of class Encrypt
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   Encrypt  app1(0), app2(40), app3(4560), app4(6145698),app5(-6); // create Encrypt objects  
  
   cout<<endl<< "Reset the app1's data to 100." << endl;// display the reset of app1.
	
   app1.storeData(100);// call app1's storeData function
   app1.displayOriginalData();//display the app1's current original data.
   app1.displayEncryptedData();// display the app1's current encrypted data.
   cout << endl;//Jump to the next line
   system("PAUSE");
   return 0; // indicate successful termination
} // end main

