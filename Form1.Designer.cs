namespace Assignment_A1
{
     partial class Form1
     {
          /// <summary>
          /// Required designer variable.
          /// </summary>
          private System.ComponentModel.IContainer components = null;

          /// <summary>
          /// Clean up any resources being used.
          /// </summary>
          /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
          protected override void Dispose( bool disposing )
          {
               if( disposing && ( components != null ) )
               {
                    components.Dispose();
               }
               base.Dispose( disposing );
          }

          #region Windows Form Designer generated code

          /// <summary>
          /// Required method for Designer support - do not modify
          /// the contents of this method with the code editor.
          /// </summary>
          private void InitializeComponent()
          {
               this.label1 = new System.Windows.Forms.Label();
               this.label2 = new System.Windows.Forms.Label();
               this.monthCalendar1 = new System.Windows.Forms.MonthCalendar();
               this.richTextBox1 = new System.Windows.Forms.RichTextBox();
               this.textBox1 = new System.Windows.Forms.TextBox();
               this.SuspendLayout();
               // 
               // label1
               // 
               this.label1.BackColor = System.Drawing.Color.Yellow;
               this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
               this.label1.Location = new System.Drawing.Point(57, 23);
               this.label1.Name = "label1";
               this.label1.Size = new System.Drawing.Size(320, 30);
               this.label1.TabIndex = 0;
               this.label1.Text = "Calendar";
               // 
               // label2
               // 
               this.label2.BackColor = System.Drawing.Color.Yellow;
               this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
               this.label2.Location = new System.Drawing.Point(57, 350);
               this.label2.Name = "label2";
               this.label2.Size = new System.Drawing.Size(320, 30);
               this.label2.TabIndex = 1;
               this.label2.Text = "Appointments";
               this.label2.Click += new System.EventHandler(this.label2_Click);
               // 
               // monthCalendar1
               // 
               this.monthCalendar1.Location = new System.Drawing.Point(57, 73);
               this.monthCalendar1.Name = "monthCalendar1";
               this.monthCalendar1.TabIndex = 1;
               // 
               // richTextBox1
               // 
               this.richTextBox1.Location = new System.Drawing.Point(57, 400);
               this.richTextBox1.Name = "richTextBox1";
               this.richTextBox1.Size = new System.Drawing.Size(320, 252);
               this.richTextBox1.TabIndex = 3;
               this.richTextBox1.Text = "";
               this.richTextBox1.TextChanged += new System.EventHandler(this.richTextBox1_TextChanged);
               // 
               // textBox1
               // 
               this.textBox1.BackColor = System.Drawing.SystemColors.Menu;
               this.textBox1.BorderStyle = System.Windows.Forms.BorderStyle.None;
               this.textBox1.ForeColor = System.Drawing.Color.Blue;
               this.textBox1.Location = new System.Drawing.Point(253, 676);
               this.textBox1.Name = "textBox1";
               this.textBox1.Size = new System.Drawing.Size(115, 19);
               this.textBox1.TabIndex = 4;
               this.textBox1.Text = "Steven Villano";
               this.textBox1.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
               // 
               // Form1
               // 
               this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
               this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
               this.ClientSize = new System.Drawing.Size(430, 725);
               this.Controls.Add(this.textBox1);
               this.Controls.Add(this.richTextBox1);
               this.Controls.Add(this.monthCalendar1);
               this.Controls.Add(this.label2);
               this.Controls.Add(this.label1);
               this.Name = "Form1";
               this.Text = "My Scheduler";
               this.Load += new System.EventHandler(this.Form1_Load);
               this.ResumeLayout(false);
               this.PerformLayout();

          }

          #endregion

          private System.Windows.Forms.Label label1;
          private System.Windows.Forms.Label label2;
          private System.Windows.Forms.MonthCalendar monthCalendar1;
          private System.Windows.Forms.RichTextBox richTextBox1;
          private System.Windows.Forms.TextBox textBox1;
     }
}

