// Author: Steven Villano - SID # - W0570843
// Date completed: July 7, 2015
// Filename: Salaries.cs


// Purpose: Using a one-dimensional array, write an application (using an array of counters) that determines
// how many of the salespeople earned salaries in each of the provided ranges

using System;       // using namespace System

namespace Assignment_A4       // definition of namespace Assignment_A4
{
     class Salaries  // definition of class Salaries
     {
          // Main function is entry point of program
          static void Main( string[] args )
          {
               int sales = 0;      // declaration and initialization of variable sales
               int[] salary = new int[9];       // declaration of array salary and define number of elements
               int range = 0;      // declaration and initialization of variable range

               // while 'sales' is greater than or equal to zero
               while (sales >= 0)
               {
                    // prompt user for input, using negative number as sentinel value
                    Console.Write( "Enter sales amount (negative to end): " );

                    // read user input
                    sales = Convert.ToInt32(Console.ReadLine());

                    // if sales is a negative number, break from loop immediately
                    if( sales < 0 )
                    {
                         break;
                    } // end if

                    // calculate range based on a weekly salary of $200 + 9% of total sales
                    range = (int)( 200 + ( 0.09 * (sales) ) );

                    // based on calculated salary range, increment appropriate array element
                    // range $200 - $299, increment first element
                    if( range >= 200 && range <= 299 )
                    {
                         salary[0]++; // increment element [0] by 1
                    }// end if

                    // range $300 - $399, increment second element
                    else if( range >= 300 && range <= 399 )
                    {
                         salary[1]++;  // increment element [1] by 1
                    } // end else if

                    // range $400 - $499, increment third element
                    else if( range >= 400 && range <= 499 )
                    {
                         salary[2]++;  // increment element [2] by 1
                    }  // end else if

                    // range $500 - $599, increment fourth element
                    else if( range >= 500 && range <= 599 )
                    {
                         salary[3]++;  // increment element [3] by 1
                    }  // end else if

                    // range $600 - $699, increment fifth element
                    else if( range >= 600 && range <= 699 )
                    {
                         salary[4]++;  // increment element [4] by 1
                    }  // end else if

                    // range $700 - $799, increment sixth element
                    else if( range >= 700 && range <= 799 )
                    {
                         salary[5]++;  // increment element [5] by 1
                    }  // end else if

                    // range $800 - $899, increment seventh element
                    else if( range >= 800 && range <= 899 )
                    {
                         salary[6]++;  // increment element [6] by 1
                    }  // end else if

                    // range $900 - $999, increment eighth element
                    else if( range >= 900 && range <= 999 )
                    {
                         salary[7]++;  // increment element [7] by 1
                    }  // end else if

                    // range over $1000, increment ninth element
                    else
                    {
                         salary[8]++;  // increment element [8] by 1
                    }  // end else
               }  // end while loop

               // output of results in tabular format
               Console.WriteLine();     // output blank line for spacing
               Console.WriteLine( "{0}{1,20}", "Range", "Number" );   // output headers for tabular format
               Console.WriteLine( "{0}{1,13}", "$200-$299", salary[0] );   // output results for range $200 - $299
               Console.WriteLine( "{0}{1,13}", "$300-$399", salary[1] );   // output results for range $300 - $399
               Console.WriteLine( "{0}{1,13}", "$400-$499", salary[2] );   // output results for range $400 - $499
               Console.WriteLine( "{0}{1,13}", "$500-$599", salary[3] );   // output results for range $500 - $599
               Console.WriteLine( "{0}{1,13}", "$600-$699", salary[4] );   // output results for range $600 - $699
               Console.WriteLine( "{0}{1,13}", "$700-$799", salary[5] );   // output results for range $700 - $799
               Console.WriteLine( "{0}{1,13}", "$800-$899", salary[6] );   // output results for range $800 - $899
               Console.WriteLine( "{0}{1,13}", "$900-$999", salary[7] );   // output results for range $900 - $999
               Console.WriteLine( "{0}{1,8}", "$1000 and over", salary[8] );    // output results for range over $1000
               Console.WriteLine();     // output blank line for spacing
          }  // end Main
     } // end class Salaries
} // end namespace Assignment_A4
