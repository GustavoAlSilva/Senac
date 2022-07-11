// Data: 18/08/2021

#include<iostream>
using namespace std;

int const tam = 6;
int i, maior, menor;
float alturas[tam];

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tPrograma de maior e menor altura";
	for(i=0; i<tam; i++){
		cout<<"\n\n\n\tInforme a " <<i+1<<"ª altura: ";
		cin>>alturas[i];
		if (i==0){
			menor = alturas[i];
			maior = alturas[i];
		}
		if (alturas[i] < menor){
			menor = alturas[i];
		}
		if (alturas[i] > maior){
			maior = alturas[i];
		}
	}
	cout<<"\n\n\tA menor altura informada foi: "<<menor;
	cout<<"\n\n\tA maior altura informada foi: "<<maior;
	cout<<"\n\n\n";
}
