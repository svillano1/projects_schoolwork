// Author: Steven Villano - SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// Triangles.cs
// Date completed: June 23, 2015

// Purpose: Write three classes to display shapes and a test program to test them.

using System;       // using namespace System

namespace Assignment_AD2      // create namespace Assignment_AD2
{
     // Triangles class definition
     class Triangles
     {
          // Main() is the entry point to the program
          static void Main( string[] args )
          {
               string selection;   // declaration of variable selection
               int rows;      // declaration of variable rows

               // user menu selections; prompt for input
               Console.WriteLine( "Enter a selection from the following list:" );
               Console.WriteLine( "a.  Display all Triangle shapes one below the other." );
               Console.WriteLine( "b.  Display all Triangle shapes side by side." );
               Console.WriteLine( "c.  Display a diamond of the appropriate size." );
               Console.WriteLine( "d.  Exit this program.\n" );

               selection = Console.ReadLine();         // variable selection assigned value of input
               Below vertical = new Below();           // instantiation of class Below
               Side_by_side horizontal = new Side_by_side();     // instantiation of class Side_by_side
               Diamond pattern = new Diamond();        // instantiation of class Diamond

               // while user does not select to end program
               while( selection != "d" )
               {
                    // if selection is "a", call method from class Below
                    if( selection == "a" )
                    {
                         vertical.bel_triangles();  // method to display triangles vertically
                    }
                    
                    // if selection is "b", call method from class Side_by_side
                    if( selection == "b" )
                    {
                         horizontal.sbs_triangles();  // method to display triangles horizontally
                    }

                    // if selection is "c", call method from class Diamond
                    if( selection == "c" )
                    {
                         // prompt user for input of number of rows
                         Console.WriteLine( "Enter number of rows (odd number 1 to 19): " );

                         // read input and convert variable rows to Int32
                         rows = Convert.ToInt32( Console.ReadLine() );

                         // validate input - input must be an odd number
                         while( rows % 2 == 0 )
                         {
                              // display input error to user
                              Console.WriteLine( "Number of rows must be an odd number!" );

                              // prompt user for appropriate input
                              Console.WriteLine( "Please enter an odd number from 1 to 19: " );

                              // read input and convert variable rows to Int32
                              rows = Convert.ToInt32( Console.ReadLine() );
                         }
                         // once input is valid, call method to display diamond shape with appropriate number of rows
                         pattern.display( rows );
                    }

                    // loop menu - prompt user for input, until user terminates program
                    Console.WriteLine( "Enter a selection from the following list:" );
                    Console.WriteLine( "a.  Display all Triangle shapes one below the other." );
                    Console.WriteLine( "b.  Display all Triangle shapes side by side." );
                    Console.WriteLine( "c.  Display a diamond of the appropriate size." );
                    Console.WriteLine( "d.  Exit this program.\n" );

                    selection = Console.ReadLine();        // store user input in variable selection
               }

               // if user selects to end program
               Console.WriteLine( "See you later." );   // print message to user
               Console.WriteLine();          // insert a blank line
               Console.WriteLine( "Press any key to continue . . ." );     // prompt user to press a key to end
               Console.ReadKey();            // keep command window open until user presses a key
 
          }    // end Main      
     }    // end Triangles class definition
}    // end namespace Assignment_AD2
