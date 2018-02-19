// Assignment A7 - Steven Villano - SID# W0570843
// Main.cpp
// Main program file


/* Purpose of assignment is to write a recursive function, quickSortHelper, to sort ten one-dimensional integer vectors. The 
function should receive as arguments a starting index, and an ending index on the original vector being sorted. Create ten vectors
with random size from 0 - 20 elements, and randomly choose the size of the vector numbers from 0 - 200. Put the numbers in the vectors
and use quick sort to sort them.*/


#include <iostream>  // include input/output library
#include <vector>  // include vector library
#include <time.h>  // include time.h to seed random number generator

using namespace std;

void quickSortHelper(vector<int> &, int, int);  // quickSortHelper function template

int main()  // begin main function
{

     srand( time( NULL ) );  // seed random number generator

     // create random sized vectors for all 10 vectors from 0 - 20
     int vec_size1 = rand() % 20;
     int vec_size2 = rand() % 20;
     int vec_size3 = rand() % 20;
     int vec_size4 = rand() % 20;
     int vec_size5 = rand() % 20;
     int vec_size6 = rand() % 20;
     int vec_size7 = rand() % 20;
     int vec_size8 = rand() % 20;
     int vec_size9 = rand() % 20;
     int vec_size10 = rand() % 20;

     int i = 0;  // counter variable

     // create 10 integer vectors
     vector < int > data1( vec_size1 );
     vector < int > data2( vec_size2 );
     vector < int > data3( vec_size3 );
     vector < int > data4( vec_size4 );
     vector < int > data5( vec_size5 );
     vector < int > data6( vec_size6 );
     vector < int > data7( vec_size7 );
     vector < int > data8( vec_size8 );
     vector < int > data9( vec_size9 );
     vector < int > data10( vec_size10 );

     // vector #1
     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size1 == 0 ){
          cout <<"The 1st set of data(" << data1.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }
     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size1; ++i ) {
               data1 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 1st set of data" << "(" << data1.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data1.size(); ++i ) {
               cout << data1 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size1 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data1 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper(data1, 0, vec_size1 - 1);

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data1.size(); ++i ) {
                    cout << data1 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #2
     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size2 == 0 ){
          cout << "The 2nd set of data(" << data2.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size2; ++i ) {
               data2 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 2nd set of data" << "(" << data2.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data2.size(); ++i ) {
               cout << data2 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size2 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data2 [0];
          }
          else{
               // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
               quickSortHelper( data2, 0, vec_size2 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data2.size(); ++i ) {
                    cout << data2 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     //vector #3

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size3 == 0 ){
          cout << "The 3rd set of data(" << data3.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size3; ++i ) {
               data3 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 3rd set of data" << "(" << data3.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data3.size(); ++i ) {
               cout << data3 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size3 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data3 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data3, 0, vec_size3 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data3.size(); ++i ) {
                    cout << data3 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #4

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size4 == 0 ){
          cout << "The 4th set of data(" << data4.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size4; ++i ) {
               data4 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 4th set of data" << "(" << data4.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data4.size(); ++i ) {
               cout << data4 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size4 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data4 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data4, 0, vec_size4 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data4.size(); ++i ) {
                    cout << data4 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #5

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size5 == 0 ){
          cout << "The 5th set of data(" << data5.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size5; ++i ) {
               data5 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 5th set of data" << "(" << data5.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data5.size(); ++i ) {
               cout << data5 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size5 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data5 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data5, 0, vec_size5 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data5.size(); ++i ) {
                    cout << data5 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #6

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size6 == 0 ){
          cout << "The 6th set of data(" << data6.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size6; ++i ) {
               data6 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 6th set of data" << "(" << data6.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data6.size(); ++i ) {
               cout << data6 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size6 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data6 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data6, 0, vec_size6 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data6.size(); ++i ) {
                    cout << data6 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #7

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size7 == 0 ){
          cout << "The 7th set of data(" << data7.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size7; ++i ) {
               data7 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 7th set of data" << "(" << data7.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data7.size(); ++i ) {
               cout << data7 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size7 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data7 [0];
          }
          else{

               // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
               quickSortHelper( data7, 0, vec_size7 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data7.size(); ++i ) {
                    cout << data7 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;


     // vector #8

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size8 == 0 ){
          cout << "The 8th set of data(" << data8.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // otherwise, generate random numbers for each element in the array from 0 - 200
     else{
          for( i = 0; i < vec_size8; ++i ) {
               data8 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 8th set of data" << "(" << data8.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data8.size(); ++i ) {
               cout << data8 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size8 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data8 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data8, 0, vec_size8 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data8.size(); ++i ) {
                    cout << data8 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;



     // vector #9

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size9 == 0 ){
          cout << "The 9th set of data(" << data9.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     else{
          for( i = 0; i < vec_size9; ++i ) {
               data9 [i] = rand() % 200;
          }

          // print header for vector
          cout << "The 9th set of data" << "(" << data9.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data9.size(); ++i ) {
               cout << data9 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size9 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data9 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data9, 0, vec_size9 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data9.size(); ++i ) {
                    cout << data9 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;



     // vector #10

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     if( vec_size10 == 0 ){
          cout << "The 10th set of data(" << data10.size() << "):\n" << "  The vector is empty.\n\n" << "  The sorted vector is empty." << endl;
     }

     // if vector does not contain any elements, print both unsorted and sorted vectors are empty
     else{
          for( i = 0; i < vec_size10; ++i ) {
               data10 [i] = rand() % 200 + 1;
          }

          // print header for vector
          cout << "The 10th set of data" << "(" << data10.size() << "):" << endl;

          // print initial, unsorted vector elements
          cout << "  Initial vector values are:" << endl;
          cout << "  ";

          for( i = 0; i < data10.size(); ++i ) {
               cout << data10 [i] << "  ";
          }

          // if only one element in the vector, print vector is sorted without calling quickSortHelper
          if( vec_size10 == 1 ){
               cout << "\n  Vector is sorted:" << endl;
               cout << "  " << data10 [0];
          }

          // otherwise call quickSortHelper function using 0 as starting index and vec_size-1 as ending index
          else{
               quickSortHelper( data10, 0, vec_size10 - 1 );

               // print sorted vector values
               cout << "\n" << "  The sorted vector values are:" << endl;
               cout << "  ";

               for( i = 0; i < data10.size(); ++i ) {
                    cout << data10 [i] << "  ";
               }
          }
     }
     cout << "\n" << endl;
     system("PAUSE");

     return 0;

}  // end function main

void quickSortHelper( vector<int> &a, int left, int right )   // function definition
{

     // variable declaration

     int i = left;
     int j = right;
     int temp;
     int pivot = a [left];

     // while left is less than right, compare element with 'pivot' value
     while( i < j ) {

          // starting with the right side of the vector, while element is greater than pivot value, decrement j
          while( a [j] > pivot ) {
               j--;
          }

          // otherwise swap value with pivot
          temp = a [j];
          a [j] = pivot;
          a [i] = temp;

          // starting from left side of vector, while element is greater than pivot value, increment i
          while( a [i] < pivot ) {
               i++;
          }

          // otherwise swap values with pivot
          temp = a [i];
          a [i] = pivot;
          a [j] = temp;
          j--;  // decrement j to assist in terminating outer while loop
     }
     // if left index of vector is less than j, then recursively call function using left end of vector and j as beginning and ending points
     if( left < j ) {
          quickSortHelper( a, left, j );
     }

     // if right index of vector is greater than i, then recursively call function using (i + 1) and right end of vector as beginning and ending points
     if( right > i ) {
          quickSortHelper( a, i + 1, right );
     }
}  // end function quickSortHelper