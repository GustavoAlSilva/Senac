using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace exemplo_03
{
    public partial class Form1 : Form
    {
        public Form1() {
            InitializeComponent();
        }
        int[] vetor = new int[10];
        int i=0; // inicializa o i para usar no vetor

        private void btnSair_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnInserir_Click(object sender, EventArgs e)
        {
            int num;
            num = Convert.ToInt32(txtValor.Text); // variável recebe o valor inserido na caixa de texto
            vetor[i]= num; // o valor de num irá para o vetor
            ltbVetor.Items.Add("Elem["+ i +"]="+ num.ToString()); // inserindo o valor digitado para o listbox
            i++; // depois de inserir no listBox, devemos incrementar o valor do i, para ir para o próximo elemento do vetor
            txtValor.Text = ""; // apagamos o valor digitado
            txtValor.Focus(); // textBox recebe o focus (o cursor) para poder digitar novamente
            if(i == 9)
                MessageBox.Show("Atenção: último número disponível", " AVISO");
            if (i == 10) // se atingiu o limite do vetor
            {
                MessageBox.Show("Limite do vetor esgotado", " Aviso");
                txtValor.ReadOnly = true; // bloqueando novas digitações
                btnInserir.Enabled = false; // bloqueando o botão
                btnOrdenar.Focus(); // focus para o botão ordenar.
            }
        }

        private void btnOrdenar_Click(object sender, EventArgs e)
        {
            int aux = 0; // variável usada para guardar temporariamente o valor do vetor em cada comparação
            // Este for servirá para percorrer o vetor a ser ordenado
            // vetor.Length para termos o tamanho do vetor
            for (int i = 0; i < vetor.Length; i++)
            {
                for (int j = 0; j < vetor.Length; j++)
                {
                    if (vetor[i] < vetor[j]) // se verdade será feita a troca de valores
                    {
                        aux = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = aux;
                    }
                }
            }
            // Imprimindo no listBox o vetor ordenado
            for (int i = 0; i < vetor.Length; i++)
                ltbVetorOrdenado.Items.Add("Elem[" + i + "]=" + vetor[i].ToString());
        }

        private void txtValor_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
