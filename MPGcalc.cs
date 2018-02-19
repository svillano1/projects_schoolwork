// Author: Steven Villano, SID # - W0570843
// CISP 405 Consumnes River College Summer 2015
// Filename: MPGcalc.cs
// Completed: July 19, 2015

// Purpose: Create an application that inputs miles driven and gallons used, and calculates miles per gallon.
// The example should use exception handling to process the FormatExceptions that occur when converting the input
// strings to doubles. If invalid data is entered, display a message informing the user.

using System;   // using namespace System

namespace Assignment_AD6   // using namespace Assignment_AD6
{
     class MPGcalc   // class MPGcalc definition
     {
          // Main is the entry point for the program
          static void Main( string[] args )
          {
               bool continueLoop = true;  // declaration and initialization of boolean variable continueLoop
               double miles = 0.0;      // declaration and initialization of double variable miles
               double gallons = 0.0;    // declaration and initialization of double variable gallons
               double mpg = 0.0;        // declaration and initialization of double variable mpg

               string loop;        // declaration of string variable loop

               do
               {
                    // retrieve user input and calculate MPG
                    try
                    {
                         // prompt user for input of miles
                         Console.Write( "\nEnter miles driven: " );

                         // read input and convert to type double
                         miles = Convert.ToDouble( Console.ReadLine() );

                         // prompt user for input of gallons
                         Console.Write( "Enter gallons used: " );

                         // read input and convert to type double
                         gallons = Convert.ToDouble( Console.ReadLine() );

                         // calculate mpg
                         mpg = miles / gallons;

                         // display resulting calculation
                         Console.WriteLine( "\n{0:F1} miles per gallon.", mpg );

                    }  // end try

                    // catch block to catch invalid input using FormatException
                    catch( FormatException )
                    {
                         // print error if invalid value entered by user
                         Console.WriteLine( "Please enter decimal numbers for the miles driven and gallons used." );
                    }  // end catch

                    // prompt user to continue or quit program
                    Console.Write( "\nQuit (yes/no)? " );

                    // read user input
                    loop = Console.ReadLine();

                    // if user input indicates to quit program, then discontinue loop
                    if( loop == "yes" )
                    {
                         // set variable continueLoop to false
                         continueLoop = false;
                    }

                    // otherwise continue do...while loop
                    else
                    {
                         // set variable continueLoop to true
                         continueLoop = true;
                    }
               }  // end do

               // while continueLoop is true, enter loop again
               while( continueLoop );

          } // end Main
     }  // end class MPGcalc
}  // end namespace Assignment_AD6
