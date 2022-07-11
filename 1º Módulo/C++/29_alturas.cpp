// Data: 13/08/2021

#include<iostream>
using namespace std;

int const tam=6;
float alturas[tam], acumulador1=0, media, acumulador2=0;

main()
{
	setlocale(LC_ALL, "Portuguese");
	for (int i=0; i<tam; i++){
		cout<<"\n\n\tDigite a "<<i+1<< "º altura: ";
		cin>>alturas[i];
		acumulador1 += alturas[i];
	}
	media = acumulador1 / tam;
	for (int i=0; i<tam; i++){
		if (alturas[i] > media){
			acumulador2 += 1;
		}
	}
	cout<<"\n\n\n\tMédia das alturas: "<<media<< "m;";
	cout<<"\n\tQuantidade de alturas acima da média: "<<acumulador2<< ".";
}
	
	
	
