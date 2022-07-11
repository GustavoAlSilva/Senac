// Data: 04/08/2021

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tLista de números pares de 0 à 10:\n";
	for (int i=0; /*Define o índice como 0*/ i<10; /*condição*/ i++ /* i = i +1*/) {
		if (i % 2 == 0){
			cout<<"\n\t"<<i;
		}
	}
}
