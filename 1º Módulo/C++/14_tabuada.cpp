// Data: 04/08/2021

#include<iostream>
using namespace std;

main()
{
	int num, qtd;
	
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\n\tTabuada";
	cout<<"\n\n\n\n\tDigite o número que deseja: ";
	cin>>num;
	cout<<"\n\n\tDigite a quantidade de vezes que deseja multiplicá-lo: ";
	cin>>qtd;
	for (int i=0; i<qtd; i++) {
		cout<<"\n\t"<<i*num;
	}
	cout<<"\n\n\n";
}
