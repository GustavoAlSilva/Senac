using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;     //include, no C++

namespace exemplo01
{
    public partial class btn2 : Form
    {
        public btn2()
        {
            InitializeComponent();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
            //Close();
            //this.Close();     para este caso, também servem
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void btn2_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            // Para mostrar uma nova janela
            Form2 dois = new Form2();
            dois.Show();
        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void janelaDoisToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Soma soma = new Soma();
            soma.Show();
        }

        private void btnSoma_Click(object sender, EventArgs e)
        {
            Soma soma = new Soma();
            soma.Show();
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Tabuada tabuada = new Tabuada();
            tabuada.Show();
        }

        private void somaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 dobro = new Form2();
            dobro.Show();
        }

        private void janelaDoisToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            Tabuada tabuada = new Tabuada();
            tabuada.Show();
        }

        private void sairToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            ComboBox combo_box = new ComboBox();
            combo_box.Show();
        }

        private void btnComboBox_Click(object sender, EventArgs e)
        {
            ComboBox combo_box = new ComboBox();
            combo_box.Show();
        }

        private void comboBoxToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
