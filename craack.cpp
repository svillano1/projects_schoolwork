/*
Author: Steven Villano - SID: W0570843
Date written: April 23, 2016
Program Description - Write a program to decipher the ciphertext, using the results from the 
					  frequency analysis program. Hard code the character mapping in this program.
					  The output of this program should be the original, unencrypted text from the 
					  provided file.
*/


#include <iostream>		// include input/output stream library
#include <fstream>		// include file handling library

using namespace std;	// using standard namespace


// our character mapping array
						 //  a    b    c    d    e    f    g    h    i    j    k    l    m    n    o    p    q    r    s    t    u    v    w    x    y    z
const char scramble[26] = { 'a', 'v', 'x', 'l', 'g', 'b', 'w', 'r', 'm', 'h', 'c', 'j', 's', 'n', 'i', 'd', 'y', 't', 'o', 'q', 'e', 'z', 'u', 'p', 'k', 'f' };

// main is the insertion point for the program
void main(void)
{

	char letter;	// variable to store read-in character
	char changed_letter;	// variable to store letter after mapping applied
	char crack[8591];		// array to store changed characters in order
	int i = 0;		// initialization of counter

	// open file "e.txt"
	fstream file("e.txt");

	// if the file opens correctly
	if (file.is_open()) {

		// while not at the end of e.txt file
		while (file.get(letter)) {

			// store the letter in the solution array
			crack[i] = letter;
			i++;	// increment counter
		}
		// close the file
		file.close();
	}

	// insert a couple of blank lines
	cout << endl << endl;

	// loop through the array
	for (int i = 0; i < 8591; i++) {

		changed_letter = scramble[crack[i] - 'a'];	// apply character mapping to decipher character
		crack[i] = changed_letter;			// store character back in the appropriate position in the array
		cout << crack[i];					// output to screen each letter after it's been changed
	}

	// insert a couple of blank lines
	cout << endl << endl;

	// pause the cmd window to view output
	system("PAUSE");
}// end main