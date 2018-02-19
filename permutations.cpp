/*
Updated by: Steven Villano - SID: W0570843
Date: April 28, 2016
Original code provided by: http://www.cs.utexas.edu/users/djimenez/utsa/cs3343/lecture25.html
Original code adapted to accept character input instead of integers

Assignment - Using this algorithm "Generating Permutations of a Set of Elements" , modify the code
			 as necessary to generate and print all 5! = 120 combinations of the 5 letter input
			 string: "abcde". Using the same algorithm gradually increase the size of the input string
			 until the program takes at least 5 minutes to complete.
*/



#include <iostream>		// include input/output handling library


// function prototypes
void swap(char[], int , int);
void perm(char[], int, int);


using namespace std;	// using standard namespace

// function to swap array elements
void swap(char v[], int i, int j)
{
	char t;		// declaration of char variable
	
	// swap algorithm
	t = v[i];	
	v[i] = v[j];
	v[j] = t;

} // end function swap


// recursive function to generate permutations
void perm(char v[], int n, int i)
{

	int j;	// declaration of counter


	// when we reach the end of the string
	if (i == n) {

		// print the string, character by character
		for (j = 0; j < n; j++) {

			cout << v[j];			 
		}

		// print a tab between strings
		cout << "\t";
	}

	// otherwise, swap characters, and generate permutations recursively
	else {

		for (j = i; j < n; j++) {

			swap(v, i, j);
			perm(v, n, i + 1);
			swap(v, i, j);
		}
	}

} // end function perm


// main is the entry point for the program
void main(void)
{
	// declaration of our string
	char alpha[2] = { 'a', 'b' }; //, 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	int i;		// initialization of counter

	cout << endl << endl;	// print new lines for beginning of output

	// traverse string and generate permutations
	for (i = 0; i < 2; i++) {

		perm(alpha, 2, 0);
	}

	// pause to keep cmd window open to view output
	system("PAUSE");
}