// Author: Steven Villano SID# - W0570843
// Date: June 12, 2015
// Filename: Assignment_AD1_Test.cs

// Purpose: To create a GUI for a radio

using System;                           // using namespace System
using System.Collections.Generic;       // using namespace System.Collections.Generic
using System.Linq;                      // using namespace System.Linq
using System.Threading.Tasks;           // using namespace System.Threading.Tasks
using System.Windows.Forms;             // using namespace System.Windows.Forms

// namespace Assignment_AD1 definition
namespace Assignment_AD1
{
     // class Assignment_AD1_Test definition
     static class Assignment_AD1_Test
     {
          /// <summary>
          /// The main entry point for the application.
          /// </summary>
          [STAThread]
          // main function begin
          static void Main()
          {
               Application.EnableVisualStyles();
               Application.SetCompatibleTextRenderingDefault( false );
               Application.Run( new Assignment_AD1() );
          } // end Main
     } // end class Assignment_AD1_Test
} // end namespace Assignment_AD1
