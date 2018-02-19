/*
Author: Steven Villano - SID: W0570843
Date written: April 23, 2016
Assignment: Write a program to perform a frequency analysis on a ciphertext file,
			and use the output to begin breaking the ciphertext file.
*/


#include<iostream>	// include input/output handling library
#include<fstream>	// include file handling library

using namespace std;	// using standard namespace

// main is the entry point for our program
void main(void)
{

	float counter[26] = {};		// initialize an array of floats
	int total_count = 0;		// initialize a total count


	// open file "e.txt" for processing
	fstream file("constitution.txt");

	// if the file opens successfully
	if (file.is_open()) {

		char letter;	// declaration of variable char

		// while we're not at the end of the e.txt file
		while (file.get(letter)) {

			// for each letter, increase count of the letter, and the total count
			switch (letter)
			{
			case 'a':
				counter[0]++;
				total_count++;
				break;
			case 'b':
				counter[1]++;
				total_count++;
				break;
			case 'c':
				counter[2]++;
				total_count++;
				break;
			case 'd':
				counter[3]++;
				total_count++;
				break;
			case 'e':
				counter[4]++;
				total_count++;
				break;
			case 'f':
				counter[5]++;
				total_count++;
				break;
			case 'g':
				counter[6]++;
				total_count++;
				break;
			case 'h':
				counter[7]++;
				total_count++;
				break;
			case 'i':
				counter[8]++;
				total_count++;
				break;
			case 'j':
				counter[9]++;
				total_count++;
				break;
			case 'k':
				counter[10]++;
				total_count++;
				break;
			case 'l':
				counter[11]++;
				total_count++;
				break;
			case 'm':
				counter[12]++;
				total_count++;
				break;
			case 'n':
				counter[13]++;
				total_count++;
				break;
			case 'o':
				counter[14]++;
				total_count++;
				break;
			case 'p':
				counter[15]++;
				total_count++;
				break;
			case 'q':
				counter[16]++;
				total_count++;
				break;
			case 'r':
				counter[17]++;
				total_count++;
				break;
			case 's':
				counter[18]++;
				total_count++;
				break;
			case 't':
				counter[19]++;
				total_count++;
				break;
			case 'u':
				counter[20]++;
				total_count++;
				break;
			case 'v':
				counter[21]++;
				total_count++;
				break;
			case 'w':
				counter[22]++;
				total_count++;
				break;
			case 'x':
				counter[23]++;
				total_count++;
				break;
			case 'y':
				counter[24]++;
				total_count++;
				break;
			case 'z':
				counter[25]++;
				total_count++;
				break;

			default:
				break;
			}
		}
		// close e.txt file
		file.close();

	}

	// print header
	cout << "Letter\t" << "Frequency" << endl;
	cout << "---------------------------" << endl;

	// print element values as percentages
	for (int i = 0; i < 26; i++) {

		cout << "  " << char(i + 'a') << "\t" << counter[i] / total_count * 100 << "%" << endl;
	}

	// print total character count
	cout << endl << "Total character count is: " << total_count << endl;

	// pause the cmd window to view output
	system("PAUSE");

} // end main