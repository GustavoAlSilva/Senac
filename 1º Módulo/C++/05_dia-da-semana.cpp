// Data: 02/08/2021

#include<iostream>
using namespace std;

int num;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\t1- Domingo\n\t2- Segunda-feira\n\t3- Ter�a-feira\n\t4- Quarta-feira\n\t5- Quinta-feira\n\t6- Sexta-feira\n\t7- S�bado";
	cout<<"\n\n\tDigite o n�mero correspondente ao dia da semana desejada: \n\n";
	cin>>num;
	if (num == 1)
		cout<<"\tDomingo, dia de ir � missa.\n\n";
	else if (num == 2)
		cout<<"\tSegunda-feira, dia de chorar.\n\n";
	else if (num == 3)
		cout<<"\tTer�a-feira, dia de ir ao mercado.\n\n";
	else if (num == 4)
		cout<<"\tQuarta-feira, dia de ir � farm�cia.\n\n";
	else if (num == 5)
		cout<<"\tQuinta-feira, dia de ir ao parque.\n\n";
	else if (num == 6)
		cout<<"\tSexta-feira, dia de ir � balada.\n\n";
	else
		cout<<"\tS�bado, dia de descansar.\n\n";
}
