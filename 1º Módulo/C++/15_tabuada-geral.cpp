// Data: 06/08/2021

#include<iostream>
using namespace std;

int num, qtd;
	
main()
{	
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\n\tTabuada";
	cout<<"\n\n\n\tDigite a quantidade de vezes que deseja multiplicá-los: ";
	cin>>qtd;
	for (int q=0; q<=10; q++) {
		for (int i=0; i<=qtd; i++) {
			cout<<"\n\t"<<i*q;
		}
		cout<<"\n";
	}
	cout<<"\n\n\n";
}
