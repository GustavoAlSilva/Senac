// Data: 04/08/2021

#include<iostream>
#include<ctype.h> // Letra mai�scula
using namespace std;

char sexo;

main ()
{ 
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tPrograma para testar a letra " ;
	cout<<"\n\n\n\tDigite uma letra para determinar o g�nero; ";
	cout<<"\n\n\t[M] - Masculino ou [F] - Feminino ";
	cin>> sexo;
	sexo = toupper(sexo); // Converte caractere para mai�sculo (tolower para converter para min�sculo)
	if (sexo=='F'){
		cout<<"\n\n\tFeminino.";
}
	else
		if (sexo=='M'){
		cout<<"\n\n\tMasculino."; }
		else{
		cout<<"\n\n\tEntrada inv�lida.";}
	cout<<"\n\n\n";
}
