// Data: 09/08/2021

#include <iostream> 
#include <iomanip> 
using namespace std; 

int i;
float idade, acumula=0, media=0;
int qtde_partic, menor, maior_65;

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	cout <<setprecision(2);
	cout<<"\n\n\tMédia das idades.";
	cout<<"\n\n\n\tQuantas pessoas participarão da pesquisa?  "; 
	cin>>qtde_partic;
	for(i=1;i<=qtde_partic;i++){
		cout<<"\n\n\t\tInforme a Idade da " <<i<<"a  Pessoa: ";
		cin>>idade;
		acumula += idade; // acumula as idades informadas (CONTADOR)
		if (idade<18){
			menor++; // conta a quantidade de pessoas menores de 18 anos
		}
		else if (idade>65){
			maior_65 = maior_65 + 1; // conta a quantidade de pessoas menores de 65 anos
		}
	}
	media= acumula/qtde_partic; // calcula a média 
	cout<< "\n\n\n\tA média das idades é "<<media<<".";
	cout<< "\n\n\n\tNa pesquisa, "<<menor<< " são menores de idade.";
	cout<< "\n\n\n\tNa pesquisa, "<<maior_65<< " são maiores de 65 anos.";
	cout<<"\n\n\n";
}
