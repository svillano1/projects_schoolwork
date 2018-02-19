// Author: Steven Villano
// Date completed: July 16, 2015
// Filename: Time1.cs

// Purpose: Use extension methods to extend class Time of Fig. 10.1 to provide the Tick method
// that increments the time stored in a Time object by one second. Also provide method IncrementMinute
// to increment the minute and method IncrementHour to increment the hour. The Time object should always
// remain in a consistent state. The Tick method, the IncrementMinute method and the IncrementHour method 
// should be called when you click the Add 1 to second button, the Add 1 to minute button, and the Add 1 to hour
// button, respectively.


using System;  // using namespace System


namespace Assignment_A5  // namespace definition of Assignment_A5
{
     class timeTest  // timeTest class definition
     {
          static void Main( string[] args )  // main is the entry point of the program
          {
               int hours = 0;      // declaration and initialization of variable hours
               int minutes = 0;    // declaration and initialization of variable minutes
               int seconds = 0;    // declaration and initialization of variable seconds
               int choice = 0;     // declaration and initialization of variable choice
               int ticks = 0;      // declaration and initialization of variable ticks

               // prompt user for input
               Console.WriteLine( "Enter the time" );
               Console.Write( "Hours: " );

               // read input and assign input to variable hours
               hours = Convert.ToInt32( Console.ReadLine() );

               // prompt user for input
               Console.Write( "Minutes: " );

               // read input and assign input to variable minutes
               minutes = Convert.ToInt32( Console.ReadLine() );

               // prompt user for input
               Console.Write( "Seconds: " );

               // read input and assign input to variable seconds
               seconds = Convert.ToInt32( Console.ReadLine() );

               // create instance of class Time1
               Time1 time = new Time1();

               // call class method SetTime to set the time based on user input
               time.SetTime( hours, minutes, seconds );

               // menu for user
               Console.WriteLine( "1. Add 1 Second" );  // add 1 second
               Console.WriteLine( "2. Add 1 Minute" );  // add 1 minute
               Console.WriteLine( "3. Add 1 Hour" );    // add 1 hour
               Console.WriteLine( "4. Add Seconds" );   // add inputted number of seconds
               Console.WriteLine( "5. Exit" );          // exit menu and program
               Console.WriteLine();                     // insert a blank line

               // prompt user for input
               Console.Write( "Choice: " );

               // read and assign input to variable choice
               choice = Convert.ToInt32( Console.ReadLine() );

               // while user input does not exit program
               while( choice != 5 )
               {
                    // switch based on user input
                    switch( choice )
                    {
                         // when user selects 1 from menu
                         case 1:
                              time.Tick();   // increment seconds by 1
                              break;    // break

                         // when user selects 2 from menu
                         case 2:
                              time.IncrementMinute();  // increment minutes by 1
                              break;    // break

                         // when user selects 3 from menu
                         case 3:
                              time.IncrementHour();    // increment hour by 1
                              break;    // break

                         // when user selects 4 from menu
                         case 4:

                              // prompt user for input
                              Console.Write( "Enter seconds to tick: " );

                              // read and assign input to variable ticks
                              ticks = Convert.ToInt32( Console.ReadLine() );

                              // increment seconds using Tick() method for each second inputted by user
                              for( int i = 0; i < ticks; i++ )
                              {
                                   time.Tick();  // increment seconds by 1
                              }  // end for

                                   break;    // break
                    }  // end switch

                    // output hours, minutes, seconds individually
                    Console.WriteLine( "Hour: {0}   Minute: {1}   Second: {2}", time.getHour(), time.getMinute(), time.getSecond() );

                    // output universal (24-hr) time, and standard (12-hr) time
                    Console.WriteLine( "Universal time: {0}\tStandard time: {1}", time.ToUniversalString(), time.ToString() );

                    // rewrite menu and prompt user for input
                    Console.WriteLine( "1. Add 1 Second" );      // add 1 second
                    Console.WriteLine( "2. Add 1 Minute" );      // add 1 minute
                    Console.WriteLine( "3. Add 1 Hour" );        // add 1 hour
                    Console.WriteLine( "4. Add Seconds" );       // add inputted number of seconds
                    Console.WriteLine( "5. Exit" );              // exit menu and program
                    Console.WriteLine();                         // output a blank line

                    // prompt user for input
                    Console.Write( "Choice: " );

                    // read and assign user input to variable choice
                    choice = Convert.ToInt32( Console.ReadLine() );
               }  // end while
          }  // end Main
     }  // end class definition timeTest
}  // end namespace Assignment_A5
