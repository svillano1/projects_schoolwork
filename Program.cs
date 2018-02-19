// Form1.cs and design
// Author: Steven Villano - SID #W0570843
// CISP 405 - Objected Oriented Programming Using C# on .NET
// June 9, 2015

// Purpose is to create the GUI for the calendar and appointments

using System;                           // using namespace System
using System.Collections.Generic;       // using namespace System.Collections.Generic
using System.Linq;                      // using namespace System.Linq
using System.Threading.Tasks;           // using namespace System.Threading.Tasks
using System.Windows.Forms;             // using namespace System.Windows.Forms;

namespace Assignment_A1                 // using namespace Assignment_A1
{
     // definition class Program
     static class Program
     {
          /// The main entry point for the application.
          [STAThread]
          static void Main()
          {
               Application.EnableVisualStyles();
               Application.SetCompatibleTextRenderingDefault( false );
               Application.Run( new Form1() );
          }  // end main
     }  // end class Program
}  // end namespace Assignment_A1
