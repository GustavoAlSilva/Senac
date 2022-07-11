// Data: 11/08/2021

#include <iostream> 
using namespace std;

int qtd, soma, num, par, negativo;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDeseja digitar quantos números? ";
	cin>>qtd;
	soma=0;
	par=0;
	negativo=0;
	for (int i=1; i<=qtd; i++){
		cout<<"\n\n\n\tDigite um número: ";
		cin>>num;
		soma += num;
		if (num % 2 == 0){
			par += 1;
		}
		if (num < 0){
			negativo += 1;
		}
	}
	cout<<"\n\n\n\tSoma dos números: "<<soma<<"\n\tQuantidade de pares: "<<par<<"\n\tQuantidade de negativos: "<<negativo;
}
