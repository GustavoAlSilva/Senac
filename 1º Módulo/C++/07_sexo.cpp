// Data: 04/08/2021

#include<iostream>
#include<ctype.h> // Letra maiúscula
using namespace std;

char sexo;

main ()
{ 
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tPrograma para testar a letra " ;
	cout<<"\n\n\n\tDigite uma letra para determinar o gênero; ";
	cout<<"\n\n\t[M] - Masculino ou [F] - Feminino ";
	cin>> sexo;
	sexo = toupper(sexo); // Converte caractere para maiúsculo (tolower para converter para minúsculo)
	if (sexo=='F'){
		cout<<"\n\n\tFeminino.";
}
	else
		if (sexo=='M'){
		cout<<"\n\n\tMasculino."; }
		else{
		cout<<"\n\n\tEntrada inválida.";}
	cout<<"\n\n\n";
}
