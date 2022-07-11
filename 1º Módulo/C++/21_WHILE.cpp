// 	Data: 09/08/2021
	
#include <iostream>
#include <iomanip>
using namespace std;

int i, num;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tTabuada";
	cout<<"\n\n\n\tDigite o número a ser multiplicado: ";
	cin>>num;
	i=0;
	while (i<=10){
		cout<<"\n\t\t"<<num * i;
		i++;
	}
}
