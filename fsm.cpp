/*
	Author: Steven Villano - SID: W0570843
	Date: May 4, 2016
	Original code provided by: Dan Ross

	Original code adapted for strings: again, agony, bear, beat, can, caught,
									   caused, me, more, morning, week, went,
									   who, you

	Assignment - Write a program that uses a state machine to parse a sequence 
				 of known strings and insert spaces between words. Use the example
				 state machine program "statemachine.cpp" as your starting point.
				 Use "bobbatcatcan.txt" for initial testing to make sure everything
				 works. Then use "againTHRUyou.txt" to generate your final output

*/

#include <iostream>		// include i/o library
#include <fstream>		// include file handling library
#include <cstdlib>		// include c standard library

using namespace std;	// using standard namespace

// State table for: "againTHRUyou.txt"
const char next_state[18][30] = {
	{1,-1,3,-1,-1,-1,-1,-1,9,-1,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,8,-1,-1,-1,-1,-1,8,-1,-1,-1,-1,-1,-1,-1,16,-1,0,-1,0,-1,-1,-1,24,25,-1,-1,-1,-1,-1},
	{-1,2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,13,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,14,-1,-1,-1,-1,-1,-1,-1,-1,-1,27,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,21,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1},
	{17,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,0,6,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,20,-1,22,-1,-1,26,-1,-1,-1,-1,-1},
	{-1,-1,5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,18,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,29,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,19,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,15,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,12,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0},
	{23,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{28,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}

};

// character map	   a b c d e f g h i j k l m n  o  p q  r s  t  u  v  w x  y z
const char map[26] = { 0,1,2,3,4,0,5,6,7,0,8,0,9,10,11,0,0,12,13,14,15,0,16,0,17,0 };


char state = 0;		// initialization of state we're in
int counter = 0;	// initialization of total word count

// function processes each character and changes state
void process(char ch)
{

	// print current char
	cout << ch;

	// move to next state
	state = next_state[map[ch - 'a']][state];

	// output a space if we are back to initial state
	if (!state) {

		cout << " ";
		counter++;
	}

} // end function process

// main is the entry point for the program
void main(void)
{

	// declaration of character variable
	char ch;

	// open "againTHRUyou.txt"
	fstream file("againTHRUyou.txt");

	// if the file is open
	if (file.is_open()) {

		// read and display one byte at a time
		while (file.get(ch)) {

			process(ch);

		}
		file.close();  // close file
	}
	// otherwise print error
	else {
		cout << "Cannot open file" << endl;
		exit(1);
	}
	// print a couple of blank lines and then total word count
	cout << endl << endl << "Total word count: " << counter << endl << endl;
	// keep cmd window open to view result
	system("PAUSE");

} // end main