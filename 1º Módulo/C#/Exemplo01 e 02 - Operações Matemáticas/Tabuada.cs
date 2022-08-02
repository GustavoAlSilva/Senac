using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace exemplo01
{
    public partial class Tabuada : Form
    {
        public Tabuada()
        {
            InitializeComponent();
        }

        private void txtNum_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            int num, cont, tab;
            num = Convert.ToInt16(txtNum.Text);
            for (cont = 0; cont <= 10; cont++) {
                tab = num * cont;
                ltbTabuada.Items.Add(num.ToString() + " * " + cont.ToString() + " =" + tab.ToString()); 
            }
        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtNum.Text = "";
            ltbTabuada.Items.Clear();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
