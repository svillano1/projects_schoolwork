// Author: Steven Villano - SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// Side_by_side.cs
// Date completed: June 23, 2015

// Purpose: Write three classes to display shapes and a test program to test them.

using System;       // using namespace System


namespace Assignment_AD2      // namespace Assignment_AD2
{
     // begin class definition Side_by_side
     class Side_by_side
     {
          // method to display triangles side by side
          public void sbs_triangles()
          {
               // declaration and initialization of variables
               int x = 0;
               int j = 0;
               int k = 0;
               int l = 0;
               int m = 0;

               // outer loop to print all four triangles side by side
               for( j = 0; j < 10; j++ )
               {
                    // inner for loop to draw first triangle
                    for( x = 0; x <= 10; x++ )
                    {
                         // if x is less than or equal to j, then print an asterisk
                         if( x <= j )
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end if

                         // otherwise print a space
                         else
                         {
                              Console.Write( " " );    // print space
                         }  // end else
                    }  // end inner for loop

                    // print a tab break between triangles
                    Console.Write( "\t" );

                    // inner for loop to draw second triangle
                    for( k = 10; k >= 0; k-- )
                    {
                         // if k is less than j, then print an asterisk
                         if( k > j )
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end if

                         // otherwise print a space
                         else
                         {
                              Console.Write( " " );    // print space
                         }  // end else
                    }  // end inner for loop

                    // print a tab break between triangles
                    Console.Write( "\t" );

                    // inner for loop to draw third triangle
                    for( l = 0; l <= 10; l++ )
                    {
                         // if l is less than or equal to j, then print a space
                         if( l <= j )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end third inner for loop

                    // print a tab break between triangles
                    Console.Write( "\t" );

                    // inner loop to draw fourth triangle
                    for( m = 10; m >= 0; m-- )
                    {
                         // if m is less than j, then print a space
                         if( m > j )
                         {
                              Console.Write( " " );    // print space
                         }  // end if

                         // otherwise print an asterisk
                         else
                         {
                              Console.Write( "*" );    // print asterisk
                         }  // end else
                    }  // end fourth inner for loop
                    
                    // print blank line
                    Console.WriteLine();
               }  // end outer for loop
          }  // end method sbs_triangles
     }  // end class definition Side_by_side
}  // end namespace Assignment_AD2
