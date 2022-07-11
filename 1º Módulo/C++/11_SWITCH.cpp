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
	switch(letra){
		
		case 'A':{
			cout<<"\n\n\tÉ uma vogal.";
			break;
		}
		case 'E':{
			cout<<"\n\n\tÉ uma vogal.";
			break;
		}
		case 'I':{
			cout<<"\n\n\tÉ uma vogal.";
			break;
		}
		case 'O':{
			cout<<"\n\n\tÉ uma vogal.";
			break;
		}
		case 'U':{
			cout<<"\n\n\tÉ uma vogal.";
			break;
		}
		default:{
			cout<<"\n\n\tNão é uma vogal.";
			break;
		}
	}
	cout<<"\n\n";
}
