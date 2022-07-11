// Data: 11/08/2021

#include <iostream>
#include <iomanip>
using namespace std;

int i, idade, acumula;
float media;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\t\tIdade de 3 pessoas";
	for (i=1; i<=3; i++){
    	do{
        	cout<<"\n\n\n\tDigite a idade da  "<<i<<"ª pessoa: ";
        	cin>> idade;
        	while ((idade<0)||(idade>145)){
			    cout<<"\n\n\tIdade inválida.";
                cout<<"\n\n\n\tPor favor, digite a idade da "<<i<<"ª pessoa novamente: ";
                cin>>idade;
            }
        } while ((idade<0) || (idade>145));
        acumula=acumula + idade;
    }
    media=acumula/i;
	cout<<"\n\n\n";
}
