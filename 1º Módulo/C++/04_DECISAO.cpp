// Data: 30/07/2021

#include<iostream>
#include<iomanip> // Casas decimais
using namespace std; 

float nota1, nota2, nota3, nota4, media; 

main ()
{
	setlocale(LC_ALL, "Portuguese"); // Acentua��o
	cout<<fixed<<setprecision(1); // Casas decimais 
	cout<<" Programa de contas";
	cout<<"\n\n Digite a nota da avalia��o: ";
	cin>> nota1;
	cout<<"\n\n Digite a nota da atividade: ";
	cin>> nota2;
	cout<<"\n\n Digite a nota da reda��o: ";
	cin>> nota3;
	cout<<"\n\n Digite a nota de participa��o: ";
	cin>> nota4;
	media = ((nota1 * 5) + (nota2 * 2) + (nota3 * 2) + (nota4 * 1)) / (5 + 2 + 2 + 1);
	if (media >= 7) 
	cout<<"\n\n M�dia: "<<media<<"\n O aluno foi aprovado.";
	else
	cout<<"\n\n M�dia: "<<media<<"\n O aluno n�o foi aprovado.";
}
