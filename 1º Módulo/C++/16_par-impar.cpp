// Data: 06/08/2021

#include<iostream>
#include<ctype.h>
using namespace std;

	int limite;
	char resposta;
	
main()
{	
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDigite um número limite: "; 
	cin>>limite;
	cout<<"\n\n\tVocê deseja receber os números pares ou ímpares? Digite a incial como resposta:";
	cin>>resposta;
	resposta = toupper(resposta);
	if (resposta == 'P'){
		for (int i=0; i<=limite; i++){
			if (i % 2 == 0){
				cout<<"\n\t"<<i;
			}	
		}
	}
	else if (resposta == 'I'){
		for (int i=0; i<=limite; i++){
			if (i % 2 == 1){
				cout<<"\n\t"<<i;
			}
		}
	}
	else{
		cout<<"\n\tCaractere inválido.";
	}
	cout<<"\n\n";
}
	
