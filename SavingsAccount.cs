// Author: Steven Villano - SID # - W0570843
// Filename: SavingsAccount.cs
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
     // begin class definition SavingsAccount which inherits from base class Account
     class SavingsAccount : Account
     {
          // declaration of private instance variable interestRate
          private decimal interestRate;

          // constructor for class SavingsAccount, passing balance to base constructor
          public SavingsAccount( decimal bal, decimal rate ) : base( bal )
          {
               interestRate = rate;     // assignment of private instance variable
          }  // end constructor

          // method to calculate interest on Savings Account
          public decimal CalculateInterest()
          {
               // calculate amount of earned interest by multiplying rate * Balance
               decimal earnedInterest = Balance * interestRate;

               // return calculated amt of earned interest
               return earnedInterest;               
          }  // end method CalculateInterest
     }  // end class SavingsAccount
}  // end namespace Assignment_AD5
