// Author: Steven Villano - SID # - W0570843
// Filename: AccountHierarchyTest.cs
// Date completed: July 17, 2015
// CISP 405 - Consumnes River College, Summer 2015

// Purpose: Create an inheritance hierarchy that a bank might use to represent customers' bank accounts.
// All customers can deposit (i.e., Credit) money into their accounts and withdraw (i.e., Debit) money from their accounts.
// More specific types of accounts also exist. Savings accounts, for instance, earn interest on the money they hold.
// Checking accounts, on the other hand, charge a fee per transaction.
// Create base class Account and derived classes SavingsAccount and Checking Account that inherit from class Account


using System;       // using namespace System

namespace Assignment_AD5      // definition of namespace Assignment_AD5
{
     class AccountHierarchyTest  // definition of class AccountHierarchyTest
     {
          // Main is the entry point for the program
          static void Main( string[] args )
          {
               // instantiate classes for each type of account
               Account account1 = new Account( 50.0M );
               SavingsAccount account2 = new SavingsAccount( 25.0M, .03M );
               CheckingAccount account3 = new CheckingAccount( 80.0M, 1.0M );

               // insert a blank line
               Console.WriteLine();

               // display initial balance of each object
               Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );
               Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );
               Console.WriteLine( "Account3 balance: {0:C}", account3.Balance );

               // debit each account and show new balance
               Console.WriteLine( "\nAttempting to debit Account1 by {0:C}.", 25 );
               account1.Debit( 25.0M );
               Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );
               Console.WriteLine( "\nAttempting to debit Account2 by {0:C}.", 30 );
               account2.Debit( 30.0M );
               Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );
               Console.WriteLine( "\nAttempting to debit Account3 by {0:C}.", 40 );
               account3.Debit( 40.0M );
               Console.WriteLine( "Account3 balance: {0:C}", account3.Balance );

               // credit each account and show new balance
               Console.WriteLine( "\nCrediting {0:C} to Account1.", 40 );
               account1.Credit( 40.0M );
               Console.WriteLine( "Account1 balance: {0:C}", account1.Balance );
               Console.WriteLine( "\nCrediting {0:C} to Account2.", 65 );
               account2.Credit( 65.0M );
               Console.WriteLine( "Account2 balance: {0:C}", account2.Balance );
               Console.WriteLine( "\nCrediting {0:C} to Account3", 20 );
               account3.Credit( 20.0M );
               Console.WriteLine( "Account3 balance: {0:C}", account3.Balance );

               // add interest to SavingsAccount object account2
               decimal interestEarned = account2.CalculateInterest();
               Console.WriteLine( "\nAdding {0:C} interest to Account2.", interestEarned );
               account2.Credit( interestEarned );
               Console.WriteLine( "New Account2 balance: {0:C}", account2.Balance );

               Console.WriteLine( "\n\nPress any key to continue..." );
               Console.ReadKey();


          } // end Main
     }  // end class AccountHierarchyTest
}  // end namespace Assignment_AD5
