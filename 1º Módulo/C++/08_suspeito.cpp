// Data: 11/08/2021

#include <iostream> 
using namespace std;

char resp;
int contador;

main()
{
	setlocale(LC_ALL, "Portuguese");
	contador=0;
	cout<<"\n\n\tTelefonou para a vítima?\n\n\t[S] - Sim\n\t[N] - Não\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	if (resp == 'S'){
		contador += 1;
	}
	cout<<"\n\n\n\tEsteve no local do crime?\n\n\t[S] - Sim\n\t[N] - Não\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	if (resp == 'S'){
		contador += 1;
	}
	cout<<"\n\n\n\tMora perto da vítima?\n\n\t[S] - Sim\n\t[N] - Não\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	if (resp == 'S'){
		contador += 1;
	}
	cout<<"\n\n\n\tDevia para a vítima?\n\n\t[S] - Sim\n\t[N] - Não\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	if (resp == 'S'){
		contador += 1;
	}
	cout<<"\n\n\n\tJá trabalhou com a vítima?\n\n\t[S] - Sim\n\t[N] - Não\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	if (resp == 'S'){
		contador += 1;
	}
	if (contador < 2){
		cout<<"\n\n\tA pessoa é inocente.";
	}
	else if (contador == 2){
		cout<<"\n\n\tA pessoa é suspeita.";
	}
	else if (contador == 3 || contador == 4){
		cout<<"\n\n\tA pessoa é cúmplice.";
	}
	else{
		cout<<"\n\n\tA pessoa é a assassina.";
	}
}
	
	
	
