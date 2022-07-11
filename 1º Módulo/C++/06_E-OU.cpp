// Data: 02/08/2021

#include<iostream>
using namespace std;

char inicial;

main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tS- Solteiro\n\tC- Casado\n\tV- Viúvo\n\tD- Divorciado";
	cout<<"\n\n\tDigite a letra correspondente ao estado civil desejado: ";
	cin>>inicial;
	if (inicial == 'S' || inicial == 's')
	cout<<"\n\n\tSolteiro: independente, sozinho.\n\n";
	else if (inicial == 'C' || inicial == 'c')
	cout<<"\n\n\tCasado: com companheiro, cônjuge.\n\n";
	else if (inicial == 'V' || inicial == 'v')
	cout<<"\n\n\tViúvo: cujo companheiro, ex cônjuge, veio a falecer.\n\n";
	if (inicial == 'D' || inicial == 'd')
	cout<<"\n\n\tDivorciado: possuia companheiro, cônjuge, porém optou por separar-se.\n\n";
}

// "e": &&
