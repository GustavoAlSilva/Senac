using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace exemplo01
{
    public partial class ComboBox : Form
    {
        public ComboBox()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void btnVerificar_Click(object sender, EventArgs e)
        {
            if (cmbEscolha.Text == "Pizza de calabresa") {
                MessageBox.Show("Molho de tomate, mussarela e calabresa.", "Recheio:");
            }
            if (cmbEscolha.Text == "Pizza quatro queijos") {
                MessageBox.Show("Molho de tomate, mussarela, gorgonzola, parmesão e provolone.", "Recheio:");
            }
            if (cmbEscolha.Text == "Pizza de pepperoni") {
                MessageBox.Show("Molho de tomate, mussarela e pepperoni.", "Recheio:");
            }
            if (cmbEscolha.Text == "Pizza portuguesa") {
                MessageBox.Show("Molho de tomate, mussarela, presunto, tomate, ovo cozido, cebola e azeitona.", "Recheio:");
            }
            if (cmbEscolha.Text == "Sair") {
                MessageBox.Show("Caso mude de ideia, estaremos sempre à disposição!", "Despedida");
                this.Close();
            }
        }

        private void btnFechar_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
