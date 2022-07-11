// Data: 11/08/2021

#include <iostream> 
using namespace std;
 
int i, num; 

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	cout<<"\n\n\t\tTabuada com Do e While";
	cout<<"\n\n\n\tDigite um número para a Tabuada: \n";
	cin>>num;
	i=0;
	do {
		cout<<"\n"<<num<<"x"<<i<<" = "<<num*i;
		i++;
		} while (i<=10);
	cout<<"\n\n\n";
}
