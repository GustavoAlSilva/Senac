// Data: 02/08/2021

#include<iostream>
using namespace std;

char inicial;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tS- Solteiro\n\tC- Casado\n\tV- Vi�vo\n\tD- Divorciado";
	cout<<"\n\n\tDigite a letra correspondente ao estado civil desejado: ";
	cin>>inicial;
	if (inicial == 'S' || inicial == 's')
	cout<<"\n\n\tSolteiro: independente, sozinho.\n\n";
	else if (inicial == 'C' || inicial == 'c')
	cout<<"\n\n\tCasado: com companheiro, c�njuge.\n\n";
	else if (inicial == 'V' || inicial == 'v')
	cout<<"\n\n\tVi�vo: cujo companheiro, ex c�njuge, veio a falecer.\n\n";
	if (inicial == 'D' || inicial == 'd')
	cout<<"\n\n\tDivorciado: possuia companheiro, c�njuge, por�m optou por separar-se.\n\n";
}

// "e": &&
