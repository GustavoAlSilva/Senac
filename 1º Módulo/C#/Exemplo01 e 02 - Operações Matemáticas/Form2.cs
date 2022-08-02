using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace exemplo01
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            float dobro;
            dobro = float.Parse(txtNum.Text) * 2;
            txtDobro.Text = dobro.ToString();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtDobro.Text = "";
            txtNum.Text = "";
        }

        private void txtNum_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnDobro_Click(object sender, EventArgs e)
        {
            float dobro;
            dobro = float.Parse(txtNum.Text) * 2;
            txtDobro.Text = dobro.ToString();
        }
    }
}
