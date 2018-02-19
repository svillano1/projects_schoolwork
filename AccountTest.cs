// Author: Steven Villano  SID# - W0570843
// AccountTest.cs
// Date: June 20, 2015

// Create and manipulate Account objects.

using System;

public class AccountTest
{
     // Main method begins execution of C# application
     public static void Main(string[] args)
     {
          Account account1 = new Account( 50.00M );    // create Account object
          Account account2 = new Account( -7.53M );    // create Account object

          // display initial balance of each object using a property
          Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );  // display Balance property
          Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );  // display Balance property

          decimal debitAmount;     // withdrawal amount read from user

          // prompt and obtain user input
          Console.Write( "\nEnter withdrawal amount for Account1: " );     // prompt for input
          debitAmount = Convert.ToDecimal( Console.ReadLine() );           // read input
          Console.WriteLine( "\nSubtracting {0:C} from Account1 balance", debitAmount );
          account1.Debit( debitAmount );          // subtract from account1 balance

          // display balances
          Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );
          Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );

          // prompt and obtain user input
          Console.Write( "\nEnter withdrawal amount for Account2: " );     // prompt for input
          debitAmount = Convert.ToDecimal( Console.ReadLine() );           // read input
          Console.WriteLine( "\nSubtracting {0:C} from Account2 balance", debitAmount );
          account2.Debit( debitAmount );          // subtract from account2 balance

          // display balances
          Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );
          Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );

          // pause to keep command line window open
          Console.WriteLine( "Press any key to continue . . ." );
          Console.ReadKey( true );
          } // end main
} // end class AccountTest
