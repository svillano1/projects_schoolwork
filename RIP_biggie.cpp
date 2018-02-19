/*  Author: Steven Villano - SID# -> W0570843
	Date: April 14, 2016
	Description: RIP algorithm implementation using biggie_graph.txt file 
				 from previous assignment.
				 
				 Program reads in the first 52 lines from the biggie_graph.txt file,
				 places each integer into an adjacency list. Then, the program generates
				 random values for the distance links between nodes, and using the adjacency
				 list, and the distances, utilizes the RIP algorithm to find the shortest distance
				 from one node to the target node, and prints the initial and resulting "routing tables".
*/



#include <iostream>		// include i/o processing stream
#include <iomanip>		// include parametric manipulators for output
#include <fstream>		// include file handling library
#include <cstdlib>		// include standard library for random distance values
#include <string>		// include string library 
#include <chrono>		// for length of time for thread to sleep
#include <thread>		// for sleep for function

#define SIZE 52		// define SIZE = 52
using namespace std;	// using standard namespace


static int adj_list[SIZE][SIZE] = {};		// declaration of adjacency list

static int distances[SIZE][SIZE] = {};		// declaration of link distances

// struct representing last jump and distance
struct cell {

	int distance;
	char letter;
};

cell table[SIZE][SIZE];		// our routing table

// function prototypes
void fill_table(void);
void print_table(void);
void rip_alg(void);

// main is the insertion point for the program
void main(void)
{
	// open file "biggie_graph.txt"
	ifstream file("biggie_graph.txt");
	ifstream file_2("BiggieWeightedGraph (1).txt");

	// if the file opened successfully
	if (file.is_open()) {
		if (file_2.is_open()) {

			// read in a character one by one, convert to int, and store in adjacency list
			for (int i = 0; i < SIZE; i++) {

				for (int j = 0; j < SIZE; j++) {

					char number = file.get();		// get character

					// read into adj_list if not a newline character
					if (number != '\n') {

						adj_list[i][j] = number - '0';
					}

					// if looking at same node in column and row, set both attributes to 0
					if (i == j) {
						distances[i][j] = 0;
						adj_list[i][j] = NULL;
					}

					// convert all zeros in adjacency list to -1
					else if (adj_list[i][j] == 0) {
						adj_list[i][j] = -1;
					}

					// otherwise generate a random number for the link distance
					else {

						char dist = file_2.get();
						distances[i][j] = dist;
					}
				} // end inner inner for
			}  // end outer	inner for	
		} // end outer for

		file.close(); // close file "biggie_graph.txt"
	}
	file_2.close();

	fill_table();	// call function fill_table
	print_table();	// print initial routing table

	rip_alg();	// call RIP algorithm to populate table

// header for final routing table
//cout << endl << endl << "Final routing information:" << endl;

	print_table();		// print full table


	system("PAUSE");  // pause command window 
}

// function to fill the table
void fill_table()
{
	// print header
	cout << "Initial routing information:" << endl;


	// traverse table
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {

			// if neighbors, then populate table
			if (adj_list[i][j] == 1) {

				if (j <= 25) {
					table[i][j].letter = j + 'A';
				}
				else {
					table[i][j].letter = j + 'G';
				}
				table[i][j].distance = distances[i][j];

			// if the same node, then values both null
			}
			else if (adj_list[i][j] == 0) {

				table[i][j].letter = 0;
				table[i][j].distance = 0;
			}
			// if not neighbors, then denote with dash
			else {
				table[i][j].letter = '-';
				table[i][j].distance = NULL;
			}
		}
	}


}

// prints our table and headers
void print_table()
{
	// print header
	cout << endl;
	cout << "Information stored at node:" << "\t\t\t\t\t\tNext hop and distance to node:" << endl;
	cout << "-----------------------------------------------------------------------------------";
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

	// traverse and print table
	for (int i = 0; i < SIZE; i++) {

		// for each line, print node character
		if (i <= 25) {
			cout << "\t" << char(i + 'A') << "\t";
		}
		else {
			cout << "\t" << char(i + 'G') << "\t";
		}

		// print existing value at each node
		for (int j = 0; j < SIZE; j++) {

			if (table[i][j].distance != NULL) {
				cout << " " << table[i][j].letter << table[i][j].distance;
			}
			// if not a neighbor, print two dashes to fill slot
			else if (table[i][j].distance == 0) {
				cout << "  " << table[i][j].letter << table[i][j].letter;
			}
			else {
				cout << table[i][j].letter << table[i][j].letter;
			}
		}
		cout << endl;
	}
	// print bottom border
	cout << "-----------------------------------------------------------------------------------";
	cout << "---------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
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
						this_thread::sleep_for(chrono::milliseconds(1));
						system("CLS");
						print_table();
					}					
				}
			}
		}
	}
}
