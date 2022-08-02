using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace exemplo_03
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            float media, nota1, nota2, nota3, nota4;
            nota1 = Convert.ToInt32(txtNota1.Text);
            nota2 = Convert.ToInt32(txtNota2.Text);
            nota3 = Convert.ToInt32(txtNota3.Text);
            nota4 = Convert.ToInt32(txtNota4.Text);
            media = (nota1 + nota2 + nota3 + nota4) / 4;
            txtMedia.Text = media.ToString();
        }
    }
}
