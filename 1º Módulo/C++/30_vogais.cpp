// Data: 13/08/2021

#include<iostream>
using namespace std;

int const tam=6;
char caracteres[tam];
int contador;

main()
{
	setlocale(LC_ALL, "Portuguese");
	for (int i=0; i<tam; i++){
		cout<<"\n\n\tDigite a "<<i+1<< "º caractere: ";
		cin>>caracteres[i];
		caracteres[i]=toupper(caracteres[i]);
		if ((caracteres[i] == 'A') || (caracteres[i] == 'E') || (caracteres[i] == 'I') || (caracteres[i] == 'O') || (caracteres[i] == 'U')){
		contador += 1;
		}
	}
	cout<<"\n\n\n\tQuantidade de vogais: "<<contador<< ".";
	cout<<"\n\n\n";
}
