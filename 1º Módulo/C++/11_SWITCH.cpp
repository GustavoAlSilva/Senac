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
			cout<<"\n\n\t� uma vogal.";
			break;
		}
		case 'E':{
			cout<<"\n\n\t� uma vogal.";
			break;
		}
		case 'I':{
			cout<<"\n\n\t� uma vogal.";
			break;
		}
		case 'O':{
			cout<<"\n\n\t� uma vogal.";
			break;
		}
		case 'U':{
			cout<<"\n\n\t� uma vogal.";
			break;
		}
		default:{
			cout<<"\n\n\tN�o � uma vogal.";
			break;
		}
	}
	cout<<"\n\n";
}
