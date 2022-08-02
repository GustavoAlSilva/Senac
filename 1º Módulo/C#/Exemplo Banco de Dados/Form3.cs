using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exemplo_bd
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
        }

        private void sairToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnAlunos_Click(object sender, EventArgs e)
        {
            Form1 alunos = new Form1();
            alunos.Show();
        }

        private void professoresToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 profes = new Form2();
            profes.Show();
        }

        private void alunosToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form1 alunos = new Form1();
            alunos.Show();
        }

        private void btnProfessores_Click(object sender, EventArgs e)
        {
            Form2 profes = new Form2();
            profes.Show();
        }
    }
}
