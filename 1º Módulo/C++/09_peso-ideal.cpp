// Data: 13/08/2021

#include<iostream>
using namespace std;

float altura, peso, peso_ideal;
char sexo;

main ()
{ 
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n\n\tDigite a altura: ";
	cin>>altura;
	cout<<"\n\n\tDigite o peso: ";
	cin>>peso;
	cout<<"\n\n\tDigite o sexo:\n\n\t\t[M] - Masculino;\n\t\t[F] - Feminino;\n\n\t";
	cin>>sexo;
	sexo=toupper(sexo);
	if (sexo == 'M'){
		peso_ideal=(72.7 * altura) - 58;
		cout<<"\n\n\n\tPeso ideal: "<<peso_ideal<<"KG;";
		if (peso < peso_ideal){
			cout<<"\n\tVoc� est� abaixo do peso ideal.";
		}
		else if(peso > peso_ideal){
			cout<<"\n\tVoc� est� acima do peso ideal.";
		}
		else{
			cout<<"\n\tVoc� est� no peso ideal.";
		}
	}
	else{
		peso_ideal=(62.1 * altura) - 44.7;
		cout<<"\n\n\n\tPeso ideal: "<<peso_ideal<<"KG;";
		if (peso < peso_ideal){
			cout<<"\n\tVoc� est� abaixo do peso ideal.";
		}
		else if (peso > peso_ideal){
			cout<<"\n\tVoc� est� acima do peso ideal.";
		}
		else{
			cout<<"\n\tVoc� est� no peso ideal.";
		}
	}
	cout<<"\n\n\n";
}
	
