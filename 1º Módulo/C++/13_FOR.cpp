// Data: 04/08/2021

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tLista de n�meros pares de 0 � 10:\n";
	for (int i=0; /*Define o �ndice como 0*/ i<10; /*condi��o*/ i++ /* i = i +1*/) {
		if (i % 2 == 0){
			cout<<"\n\t"<<i;
		}
	}
}
