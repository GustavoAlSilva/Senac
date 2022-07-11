// Data: 13/08/2021

#include<iostream>
using namespace std;

int const tam=6;
float notas[tam];
float acumulador=0, media;
int i;

main()
{
    setlocale(LC_ALL, "Portuguese"); 
    cout<<"\n\n\t\tMédia da turma";
    cout<<"\n\n\n\tInforme "<<tam<<" notas:\n";
    for(i=0;i<tam;i++){
    	do{
        	cout<<"\n\tInforme a "<<i+1<<" ª nota: ";
        	cin>>notas[i];
        	if ((notas[i] < 0) || (notas[i] > 10)){
        		cout<<"\n\n\tNota inválida.";
			}
		} while ((notas[i] < 0) || (notas[i] > 10));
        acumulador = acumulador + notas[i];
    }
    media = acumulador / tam;
    cout<<"\n\n\n\tA média das notas é:  "<<media;    
    cout<<"\n\n\n";  
}
