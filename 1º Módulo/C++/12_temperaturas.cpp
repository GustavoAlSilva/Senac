// Data: 11/08/2021

#include <iostream> 
using namespace std;

char resp;
float c, f;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tVocê deseja:";
	cout<<"\n\n\t[F] - Converter para fahrenheit;\n\t[C] - Converter para celsius;\n\n\t";
	cin>>resp;
	resp=toupper(resp);
	switch(resp){
		case 'F':{
			cout<<"\n\n\tQuantos graus celsius? ";
			cin>>c;
			cout<<"\n\t"<<(c * 1.8) + 32;
			break;
		}
		case 'C':{
			cout<<"\n\n\tQuantos graus fahrenheit? ";
			cin>>f;
			cout<<"\n\t"<<(f - 32) / 1.8;
			break;
		}
	}
}
