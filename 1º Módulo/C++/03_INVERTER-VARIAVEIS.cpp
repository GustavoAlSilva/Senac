// Data: 11/08/2021

#include <iostream> 
using namespace std;

int num1, num2, num3;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDigite o primeiro número: ";
	cin>>num1;
	cout<<"\n\n\tDigite o segundo número: ";
	cin>>num2;
	num3=num1;
	num1=num2;
	num2=num3;
	cout<<"\n\n\tO primeiro número é:" <<num1<<"\n\tO segundo número é: " <<num2;
}
	
	
	
