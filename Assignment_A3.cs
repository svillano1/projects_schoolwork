// Author: Steven Villano  SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// States.cs
// Completed June 23, 2015

// Purpose: Write a program that displays the names of 15 states in a combobox first, and when the state is selected
// from the combobox, it is placed in the listbox, and removed from the combobox; once the combobox is empty,
// a message box informs the user that the combobox list is empty

using System;                                // using namespace System
using System.Collections.Generic;            // using namespace System.Collections.Generic
using System.Linq;                           // using namespace System.Linq
using System.Threading.Tasks;                // using namespace System.Threading
using System.Windows.Forms;                  // using namespace System.Windows.Forms

// begin namespace Assignment_A3
namespace Assignment_A3
{
     // begin Assignment_A3 class definition
     static class Assignment_A3
     {
          /// <summary>
          /// The main entry point for the application.
          /// </summary>
          [STAThread]
          static void Main()
          {
               Application.EnableVisualStyles();
               Application.SetCompatibleTextRenderingDefault( false );
               Application.Run( new States() );
          }
     }  // end Assignment_A3 class definition
}  // end namespace Assignment_A3
