using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace exemplo01
{
    public partial class Soma : Form
    {
        public Soma()
        {
            InitializeComponent();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtNum1.Text = "";
            txtNum2.Text = "";
            txtSoma.Text = "";
        }

        private void btnSoma_Click(object sender, EventArgs e)
        {
            float soma;
            soma = float.Parse(txtNum1.Text) + float.Parse(txtNum2.Text);
            txtSoma.Text = soma.ToString();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
