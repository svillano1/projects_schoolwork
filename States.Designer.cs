namespace Assignment_A3
{
     partial class States
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
               this.comboBox1 = new System.Windows.Forms.ComboBox();
               this.listBox1 = new System.Windows.Forms.ListBox();
               this.textBox1 = new System.Windows.Forms.TextBox();
               this.SuspendLayout();
               // 
               // comboBox1
               // 
               this.comboBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
               this.comboBox1.FormattingEnabled = true;
               this.comboBox1.Items.AddRange(new object[] {
            "California",
            "Hawaii",
            "Alaska",
            "Nevada",
            "Maine",
            "Vermont",
            "New Hampshire",
            "Mississippi",
            "Arizona",
            "Oregon",
            "Washington",
            "Minnesota",
            "Wisconsin",
            "Texas",
            "New Mexico"});
               this.comboBox1.Location = new System.Drawing.Point(16, 113);
               this.comboBox1.Name = "comboBox1";
               this.comboBox1.Size = new System.Drawing.Size(400, 40);
               this.comboBox1.TabIndex = 0;
               this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
               // 
               // listBox1
               // 
               this.listBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
               this.listBox1.FormattingEnabled = true;
               this.listBox1.ItemHeight = 29;
               this.listBox1.Location = new System.Drawing.Point(16, 179);
               this.listBox1.Name = "listBox1";
               this.listBox1.Size = new System.Drawing.Size(400, 352);
               this.listBox1.TabIndex = 1;
               this.listBox1.SelectedIndexChanged += new System.EventHandler(this.listBox1_SelectedIndexChanged);
               // 
               // textBox1
               // 
               this.textBox1.BackColor = System.Drawing.SystemColors.Menu;
               this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
               this.textBox1.Location = new System.Drawing.Point(16, 43);
               this.textBox1.Multiline = true;
               this.textBox1.Name = "textBox1";
               this.textBox1.Size = new System.Drawing.Size(400, 40);
               this.textBox1.TabIndex = 2;
               this.textBox1.Text = "Select a State";
               this.textBox1.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
               // 
               // Form1
               // 
               this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
               this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
               this.ClientSize = new System.Drawing.Size(428, 587);
               this.Controls.Add(this.textBox1);
               this.Controls.Add(this.listBox1);
               this.Controls.Add(this.comboBox1);
               this.Name = "Form1";
               this.Text = "States";
               this.ResumeLayout(false);
               this.PerformLayout();

          }

          #endregion

          private System.Windows.Forms.ComboBox comboBox1;
          private System.Windows.Forms.ListBox listBox1;
          private System.Windows.Forms.TextBox textBox1;
     }
}

