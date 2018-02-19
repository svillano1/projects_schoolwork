// CISP 400 Spring 2015 Steven Villano SID # W0570843
// Assignment A2 description
// Create an Encrypt class which includes Encrypt.h and Encrypt.cpp
// Encrypt class has an integer private data member 8-element array named digits. The first 4 elements are to store the original 4 digit integer, and the next 4 are to store the encypted data
// An Encrypt constructor takes an integer of any digits and stores the last four digits. It encrpyts the las four digits, stores the encrypted information, displays a call to the constructor information, and shows the original information and encrypted information. If the inputted number is less than or equal to 0, the integer is set to 9436.
// A displayOriginalData function does not accept and retuyrn any data. It displays the first four elements of the private data member
// A storeData function takes an integer and does not return anything. It stores the last four digits of the passed in integer to the first 4 elements of the private data member, encrypts the data and store them in the last 4 elements of the private data member.
// A displayEncryptedData function does not accept and return any data. It displays the last foru elements of the private data member.


// Encrypt.h header file
// Author Steven Villano SID # W0570843
// Date: February 3, 2015

#include <array>

class Encrypt
{
private:
     std::array< int, 8 > digits;  // array for original and encrypted digits

public:
     explicit Encrypt(int); // constructor to store last 4 digits, encrypts last 4 digits, stores encrypted digits, displays a call to the constructor and all information
     void displayOriginalData();  // displays the original digits before encryption
     void storeData(int);  // stores the data in the first 4 elements of the digits array
     void displayEncryptedData(); // displays the data after encryption

};