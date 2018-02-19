// Author: Steven Villano - SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// Below.cs
// Date completed: June 23, 2015

// Purpose: Write three classes to display shapes and a test program to test them.


using System;       // using namespace System

namespace Assignment_AD2   // namespace Assignment_AD2
{
     // class definition Below
     class Below
     {
          // method to display triangles vertically
          public void bel_triangles()
          {
               int i = 0;          // declaration and initialization of variable i
               int x = 0;          // declaration and initialization of variable x

               // outer for loop for first triangle
               for( i = 0; i < 10; i++ )
               {
                    // inner for loop to print first triangle
                    for( x = 0; x <= 10; x++ )
                    {
                         // if x is less than or equal to i, then print an asterisk
                         if( x <= i )
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end if

                         // otherwise print space
                         else
                         {
                              Console.Write( " " );    // print space
                         }  // end else
                    }  // end inner for
                    
                    // start new line for next row of asterisks
                    Console.WriteLine();
               }  // end outer for

               // insert break line between triangles
               Console.WriteLine();

               // outer for loop for second triangle
               for( i = 9; i >= 0; i-- )
               {
                    // inner for loop to print second triangle
                    for( x = 0; x <= 10; x++ )
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
                         } // end else
                    }  // end inner for

                    // start new line for next row of asterisks
                    Console.WriteLine();
               }  // end outer for

               // insert break line between triangles
               Console.WriteLine();

               // outer for loop for third triangle
               for( i = 0; i < 10; i++ )
               {
                    // inner for loop to draw third triangle
                    for( x = 0; x <= 10; ++x )
                    {
                         // if x is less than or equal to i, then print a space
                         if( x <= i )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end inner for loop
                    // start new line for next row of asterisks
                    Console.WriteLine();
               }  // end outer for

               // print break line between triangles
               Console.WriteLine();

               // outer for loop for fourth triangle
               for( i = 9; i >= 0; i-- )
               {
                    // inner loop to draw fourth triangle
                    for( x = 0; x <= 10; x++ )
                    {
                         // if x is less than or equal to i, then print a space
                         if( x <= i )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end inner for loop

                    // start a new line for next row of asterisks
                    Console.WriteLine();
               }  // end outer for loop
          }  // end method bel_triangles
     }  // end class definition Below
}  // end namespace Assignment_AD2
