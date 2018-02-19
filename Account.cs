// Author: Steven Villano - SID # - W0570843
// Filename: Account.cs
// Date completed: July 17, 2015
// CISP 405 - Consumnes River College, Summer 2015

// Purpose: Create an inheritance hierarchy that a bank might use to represent customers' bank accounts.
// All customers can deposit (i.e., Credit) money into their accounts and withdraw (i.e., Debit) money from their accounts.
// More specific types of accounts also exist. Savings accounts, for instance, earn interest on the money they hold.
// Checking accounts, on the other hand, charge a fee per transaction.
// Create base class Account and derived classes SavingsAccount and Checking Account that inherit from class Account


using System;  // using namespace System

namespace Assignment_AD5  // using namespace Assignment_AD5
{
     // begin base class Account definition
     class Account
     {
          // declaration of private instance variable accountBalance
          private decimal accountBalance;

          // constructor for class account
          public Account( decimal bal )
          {
               Balance = bal; 
          }  // end constructor

          // public property Balance with set and get methods with validation
          public decimal Balance
          {
               get
               {
                    return accountBalance;
               } // end get
               set
               {
                    // validate account balance >= $0.00
                    if( value >= 0.0M )
                    {
                         accountBalance = value;
                    }  // end if

                    // if invalid amount entered, set account balance to $0.00, and display error message
                    else
                    {
                         accountBalance = 0.0M;
                         throw new ArgumentOutOfRangeException( "AccountBalance", value, "AccountBalance must be >= 0, AccountBalance set to $0.00" );
                    }  // end else
               }  // end set
          }  // end property Account Balance

          // public virtual method to add to account
          public virtual void Credit( decimal amount )
          {
               Balance += amount;
          }  // end method Credit

          // public virtual method to deduct from account, and validation of requested funds
          public virtual bool Debit( decimal amount )
          {
               // if amount requested is greater than account balance, then do not adjust balance and print error
               if( amount > Balance )
               {
                    // output error, and return that debit was unsuccessful
                    Console.WriteLine( "Debit amount exceeded account balance." );
                    return false;
               }  // end if

               // otherwise, deduct amount from balance
               else
               {
                    Balance -= amount;  // withdraw amount requested
                    return true;
               }  // end else
          }  // end method Debit
     }  // end class Account
}  // end namespace Assignment_AD5
