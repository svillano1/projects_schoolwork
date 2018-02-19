// Author: Steven Villano  SID # - W0570843
// CISP 405 Consumnes River College - Summer 2015
// States.cs
// Completed June 23, 2015

// Purpose: Write a program that displays the names of 15 states in a combobox first, and when the state is selected
// from the combobox, it is placed in the listbox, and removed from the combobox; once the combobox is empty,
// a message box informs the user that the combobox list is empty


using System;                                // using namespace System
using System.Collections.Generic;            // using namespace System.Collections.Generic
using System.ComponentModel;                 // using namespace System.Componentmodel
using System.Data;                           // using namespace System.Data
using System.Drawing;                        // using namespace System.Drawing
using System.Linq;                           // using namespace System.Linq
using System.Text;                           // using namespace System.Text
using System.Threading.Tasks;                // using namespace System.Threading.Tasks
using System.Windows.Forms;                  // using namespace System.Windows.Forms

// begin namespace Assignment_A3
namespace Assignment_A3
{
     // begin States class definition
     public partial class States : Form
     {
          // constructor
          public States()
          {
               InitializeComponent();
          }

          // method for comboBox1
          private void comboBox1_SelectedIndexChanged( object sender, EventArgs e )
          {
               // add selected item to the listBox
               listBox1.Items.Add( comboBox1.SelectedItem );

               // remove selected item from the comboBox
               comboBox1.Items.Remove( comboBox1.SelectedItem );

               // if the comboBox is empty, display message to user
               if( comboBox1.Items.Count == 0 )
               {
                    // display MessageBox with statement, title, OK button, and information icon
                    MessageBox.Show( "There are no more states in the ComboBox.", "Empty", MessageBoxButtons.OK, MessageBoxIcon.Information );
               }  // end if
          }  // end comboBox1 method

          // method for listBox1
          private void listBox1_SelectedIndexChanged( object sender, EventArgs e )
          {

          }  // end listBox1 method
     }  // end States class definition
}  // end namespace Assignment_A3