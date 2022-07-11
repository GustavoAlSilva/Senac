// Data: 04/08/2021

#include<iostream>
#include<iomanip>
#include<ctype.h>
using namespace std;

char letra;

main ()
{ 
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDigite uma letra: ";
	cin>>letra;
	letra = toupper(letra);
	if ((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')){
		cout<<"\n\n\tA letra digitada é uma vogal.";
	}
	else{
		cout<<"\n\n\tA letra digitada não é uma vogal.";
	}
	cout<<"\n\n";
}
