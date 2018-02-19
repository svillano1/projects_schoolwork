/* Original code provided by: Dan Ross
   Updated by: Steven Villano - SID # -> W0570843
   Date: February 23, 2016
   CISP 430 - Data Structures --> Prof. Dan Ross
   Folsom Lake College - Spring 2016
   Homework #4 - Stack, Queue and Priority Queue Implementations
   
   Assignment: Write four separate programs using linked nodes to implement:
               1) Stack
               2) Queue
               3) Priority Queue
               4) Double linked list
               
               State the TIME COMPLEXITY in Big Oh notation for every function. 
               
               The Stack must support the following functions:
               -----------------------------------------------
               push ( data );
                    appends data to the head of the list
               char pop ( void );
                    removes the head node and returns data; returns -1 if empty
               char peek ( void );
                    returns a copy of data at the head but does not remove the head; returns -1 if empty
               bool isEmpty ( void );
                    returns true if the stack is empty, returns false otherwise
*/


#include <iostream>

using namespace std;


// The node
struct node {
     node * next;
     char d;
};

// head and tail pointers
node *head = NULL;
node *tail = NULL;


// function declarations
void push ( char );
char pop ( void );
char peek ( void );
bool isEmpty ( void );
void traverse( void );


// pushes a node onto the head of the linked list (stack)
void push( char d )
{

     // create a new node
     node *p = new node;

     p -> next = NULL;
     p -> d = d;

     if( !(head) ) {

          head = tail = p;

     }
     else {

          p -> next = head;
          head = p;

     }

} // end function push


// removes a char element from the head of the list and returns it; returns -1 if the list is empty
char pop( void )
{
     node *p;
     char temp;

     // return -1 if the list is empty
     if( !(head) ) {
          
          return -1;

     }

     // if there is only one node
     if( head == tail ) {
          
          temp = head->d;
          delete head;
          head = tail = 0;
          return temp;

     }

     // if there is more than one node, remove and destroy head node
     p = head;
     head = head -> next;
     temp = p -> d;
     delete p;
     return temp;

} // end function pop


// checks if the list is empty; returns true if it is empty; returns false otherwise
bool isEmpty( void )
{

     if( head ) {
          return false;
     }
     else {
          return true;
     }


} // end function isEmpty


// traverses the list from the head to tail, and prints out each char element
void traverse( void )
{
     node *p = head;

     cout << "The list contains: ";

     while( p ) {

          cout << ( char ) p->d << "";
          p = p -> next;

     }
     cout << endl;

} // end function traverse


// returns a copy of the data at the head but does not remove the head; returns -1 if the list is empty
char peek( void )
{
     char temp;
     node *p = head;

     if( !(head) ) {

          return -1;

     }
     else {

          temp = p -> d;
          return temp;

     }

} // end function peek


void main( void )
{
     cout << endl;

     push('!');
     cout << "Added: " << peek() << endl;
     push('s');
     cout << "Added: " << peek() << endl;
     push('k');
     cout << "Added: " << peek() << endl;
     push('c');
     cout << "Added: " << peek() << endl;
     push('o');
     cout << "Added: " << peek() << endl;
     push('R');
     cout << "Added: " << peek() << endl;
     push(' ');
     push('s');
     cout << "Added: " << peek() << endl;
     push('s');
     cout << "Added: " << peek() << endl;
     push('o');
     cout << "Added: " << peek() << endl;
     push('R');
     cout << "Added: " << peek() << endl;

     cout << endl;
     traverse();
     cout << endl;

     cout << "Removed: " << pop() << endl;
     cout << "Removed: " << pop() << endl;
     cout << "Removed: " << pop() << endl;
    
     cout << endl;

     traverse();

     cout << endl;

     while(! (isEmpty()) ) {

          cout << "Removed: " << pop() << endl;
     }
     cout << endl;
     system("PAUSE");
}