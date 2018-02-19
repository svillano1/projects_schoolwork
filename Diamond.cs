// Author: Steven Villano - SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// Diamond.cs
// Date completed: June 23, 2015

// Purpose: Write three classes to display shapes and a test program to test them.

using System;       // using System namespace

namespace Assignment_AD2      // namespace Assignment_AD2
{
     // class Diamond definition
     class Diamond
     {
          // method to display diamond with required argument
          public void display( int value )
          {
               int i, m, x;        // declaration of variables
               value /= 2;         // value = value / 2 to maintain size designated by user input

               // outer for loop to draw top of diamond
               for( i = 0; i <= value; i++ )
               {
                    // inner for loop to draw upper left quadrant of diamond
                    for( m = value; m >= 0; m-- )
                    {
                         // if m is greater than or equal to i then print a space.
                         if( m >= i )
                         {
                              Console.Write( " " );  // print space
                         }  // end if
                         
                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );   // print asterisk
                         }  // end else
                    }  // end inner for loop

                    // inner for loop to dray upper right quadrant of diamond
                    for( x = 0; x <= value; x++ )
                    {
                         // if x is less than or equal to i, then print an asterisk
                         if( x <= i )
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end if

                         // otherwise print a space
                         else
                         {
                              Console.Write( " " );    // print space
                         }  // end else
                    }  // end inner for loop

                    Console.WriteLine();  // write blank line to separate top and bottom of diamond
               }  // end outer for loop

               // outer for loop to draw bottom half of diamond
               for( i = 1; i <= value; i++ )
               {
                    // inner for loop to draw bottom left quadrant of diamond
                    for( m = 0; m <= value; m++ )
                    {
                         // if m <= i, then print a space
                         if( m <= i )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end inner for loop

                    // inner for loop to draw bottom right quadrant of diamond
                    for( x = value; x >= 0; x-- )
                    {
                         // if x < i, then print a space
                         if( x < i )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end inner for loop
                    
                    // insert a blank line
                    Console.WriteLine();
               }  // end outer for loop
          }  // end method display()
     }  // end class definition of Diamond
}  // end namespace Assignment_AD2
