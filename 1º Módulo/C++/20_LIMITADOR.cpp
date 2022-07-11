// Data: 11/08/2021

#include <iostream> 
using namespace std;

int lim;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDigite o número limite: ";
	cin>>lim;
	for (int i=0; i<=lim; i+=5){
		cout<<"\n\t"<<i;
	}
}
