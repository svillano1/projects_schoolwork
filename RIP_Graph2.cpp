/*  Author: Steven Villano - SID# -> W0570843
Date: April 14, 2016
Description: RIP algorithm implementation using graph from previous assignment.

Program uses the given adjacency list, and the distances,
utilizes the RIP algorithm to find the shortest distance
from one node to the target node, and prints the initial and resulting "routing tables".
*/




#include <iostream>  // include i/o processing stream
#include <iomanip>	// include parametric manipulators for output
#include <thread>	// for the sleep_for function	
#include <chrono>	// for length of time for thread to sleep

#define SIZE 7		// define SIZE = 5
using namespace std;	// using standard namespace

						// global constant adjacency list
const int adj_list[SIZE][SIZE] = {

	{ 0, 1, 1, 1, -1, -1, -1 },		//A
	{ 1, 0, 1, -1, -1, -1, 1 },     //B
	{ 1, 1, 0, -1, 1, 1, -1 },      //C
	{ 1, -1, -1, 0, 1, -1, -1 },    //D
	{ -1, -1, 1, 1, 0, 1, -1 },		//E
	{ -1, -1, 1, -1, 1, 0, 1},		//F
	{ -1, 1, -1, -1, -1, 1, 0}		//G
	// A  B  C  D  E  F  G
};

// global constant distances
const int distances[SIZE][SIZE] = {

	{ 0, 2, 4, 3, 0, 0, 0 },    //A
	{ 2, 0, 5, 0, 0, 0, 1 },    //B
	{ 4, 5, 0, 0, 5, 2, 0 },    //C
	{ 3, 0, 0, 0, 2, 0, 0 },    //D
	{ 0, 0, 5, 2, 0, 4, 3 },    //E
	{ 0, 0, 2, 0, 4, 0, 3 },	//F
	{ 0, 1, 0, 0, 0, 3, 0 }		//G
	//A  B  C  D  E  F  G
};

// struct for node attributes
struct cell {

	int distance;
	char letter;
};

cell table[SIZE][SIZE];		// our table declaration

// function prototypes
void fill_table(void);
void print_table(void);
void rip_alg(void);


// main is the insertion point for the program
void main(void)
{
	fill_table();		// fill table with initial values from graph
	print_table();		// print initial table
	
	rip_alg();		// apply RIP algorithm
					// print header
	cout << endl << endl << "Final routing information:" << endl;

	// print final routing table
	print_table();

	// keep command window open
	system("PAUSE");
}

// function to fill table initially
void fill_table()
{
	cout << "Initial routing information:" << endl;


	// traverse table
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			// mark neighbors
			if (adj_list[i][j] == 1) {

				table[i][j].letter = j + 'A';
				table[i][j].distance = distances[i][j];

			}

			// mark self
			else if (adj_list[i][j] == 0) {

				table[i][j].letter = 0;
				table[i][j].distance = 0;
			}

			// mark each non-neighbor
			else {
				table[i][j].letter = '-';
				table[i][j].distance = NULL;
			}
		}
	}


}


// prints the current table
void print_table()
{
	// print header
	cout << endl << "\t\t\t\tNext hop and distance to node:" << endl;
	cout << "Information stored at node:\tA\tB\tC\tD\tE\tF\tG" << endl;
	cout << "-------------------------------------------------------------------------------------" << endl;

	// traverse table
	for (int i = 0; i < SIZE; i++) {

		// print labeled node row
		cout << "\t" << setw(3) << left << char(i + 'A') << "\t\t";

		// print values for each node, otherwise print two dashes
		for (int j = 0; j < SIZE; j++) {

			if (table[i][j].distance != NULL) {
				cout << "\t" << table[i][j].letter << table[i][j].distance;
			}
			else {
				cout << "\t" << table[i][j].letter << table[i][j].letter;
			}
		}
		cout << endl;
	}
	// print footer
	cout << "-------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;
}

// function to implement RIP algorithm
void rip_alg()
{
	while (true) {
		int i, j;
		// traverse table
		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				// if target is not a neighbor
				if (adj_list[i][j] == -1) {

					int k = 0;

					// look for a neighbor who knows how to get to target
					while (k < SIZE) {

						// when we find a neighbor who knows the distance to the target
						if (table[i][k].distance != 0 && table[k][j].distance != 0) {

							// calculate the distance
							int value = table[i][k].distance + table[k][j].distance;

							// if the value is less than the current value
							if (table[i][j].distance == 0 || value < table[i][j].distance) {

								// then change initial jump and distances
								table[i][j].letter = table[i][k].letter;
								table[i][j].distance = value;

							}
						}
						// increment counter
						k++;

						// this is to view a redrawn table with each iteration
						this_thread::sleep_for(chrono::milliseconds(500));
						system("CLS");
						print_table();
					}
				}
			}
		}
	}
}

				