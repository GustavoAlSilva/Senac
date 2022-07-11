// Data: 16/08/2021

#include <iostream>
#include <stdlib.h> // para utilizar o system
#include <iomanip>
#include <conio.h> // para usar o getch()
using namespace std;

int op;
char letra;

main ()
{
	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2); // deixar o float com 2 casas decimais
	do{
		system ("cls"); // limpar a tela
		system ("color 2"); // usar a cor verde
		cout<<"\n\n\n\t\tMenu interativo\n";
		cout<<"\n\n\t[1] - Ao quadrado;";
		cout<<"\n\t[2] - Desenho;";
		cout<<"\n\t[3] - Ano bissexto;";
		cout<<"\n\t[4] - Torre de caracteres usando do...while;";
		cout<<"\n\t[5] - Torre de caracteres usando do;";
		cout<<"\n\t[6] - Tabuada;";
		cout<<"\n\t[7] - Pesos;";
		cout<<"\n\t[8] - Temperaturas;";
		cout<<"\n\t[9] - Fim.";
		cout<<"\n\n\tEscolha uma opção --> ";
		cin>>op;
  		switch (op){
  			
			case 1:{
            	int num;
            	system ("color 2");
            	cout<<"\n\n\t[1] - Ao quadrado";
            	cout<<"\n\n\tDigite um número: ";
            	cin>>num;
            	cout<<"\n\n\tNúmero ao quadrado: "<<num * num<<" .";
            	getch(); // espera digitar algo
            	break;
			}
			case 2:{
            	system ("color 3");
            	cout<<"\n\n\t[2] - Desenho";
            	for (int i=0; i<10; i++){
            		cout<<"\n\t\t";
            		for (int j=0; j<i; j++){
            			cout<<"g";
					}
				}
            	getch();
            	break;
			}
			case 3:{
				int ano;
				system ("color 8");
				cout<<"\n\n\t[3] - Ano bissexto";
				cout<<"\n\n\tDigite um ano: ";
				cin>>ano;
				if (ano % 4 == 0){
					cout<<"\n\t"<<ano<<" é um ano bissexto.";
				}
				else{
					cout<<"\n\t"<<ano<<" não é um ano bissexto.";
				}
				getch();
				break;
            }
            case 4:{
            	system ("color 3");
            	cout<<"\n\n\t[4] - Torre de caracteres usando do...while\n\n";
            	int i=0;
            	do{
            		cout<<"\n\tggggg";  
            		i++;
				} while  (i<10);
				getch();
            	break;
			}
			case 5:{
            	system ("color 3");
            	cout<<"\n\n\t[5] - Torre de caracteres usando while\n\n";
            	int i=0;
            	while (i<10){
            		cout<<"\n\tggggg";
            		i++;
				}
            	getch();
            	break;
			}
			case 6:{
            	system ("color 3");
            	int max, min;
            	cout<<"\n\n\t[6] - Tabuada";
            	cout<<" \n\n\tDigite o número mínimo: ";
            	cin>>min;
            	cout<<" \n\n\tDigite o número máximo: ";
            	cin>>max;
            	for (int i=min; i<=max; i++){
            		cout<<"\n";
            		for (int j=0; j<11; j++) {
            			cout<<"\n\t"<<i<<"x"<<j<<" = "<<j*i;
					}
				}
            	getch();
            	break;
			}
			case 7:{
            	system ("color 3");
            	cout<<"\n\n\tPesos";
				int const tam = 4;
				float pesos[tam];
				int opcao, contador=0, acum_pesos=0, media, acima, abaixo, menor, maior;
				cout<<"\n\n\n\t\tCálculos com pesos\n\n";
				for (int i=0; i<tam; i++){
					cout<<"\n\n\tDigite o "<<i+1<<"° peso: ";
					cin>>pesos[i];
					contador++;
					acum_pesos += pesos[i];
				}
				media = acum_pesos / contador;
				do {
					system("cls");
					cout<<"\n\n\n\t\tO que deseja fazer?\n";
					cout<<"\n\n\t[1] - Ver a média dos pesos;";
					cout<<"\n\n\t[2] - Ver quantos pesos estão acima e abaixo dessa média;";
					cout<<"\n\n\t[3] - Ver o menor e o maior peso;";
					cout<<"\n\n\t[4] - Fim;\n\n\t";
					cin>>opcao;
					switch (opcao){
		
						case 1: {
							cout<<"\n\n\t[1] - Ver a média dos pesos";
							cout<<"\n\n\tMédia dos pesos: "<<media<<" kg.\n\n";
							system("pause");
							break;
						}
						case 2: {
							cout<<"\n\n\t[2] - Ver quantos pesos estão acima e abaixo dessa média";
							for (int i=0; i<contador; i++){
								if (pesos[i] < media){
									abaixo++;
								}
								else if (pesos[i] > media){
									acima++;
								}
							}
							cout<<"\n\n\tQuantidade de pesos abaixo da média: "<<abaixo;
							cout<<"\n\tQuantidade de pesos acima da média: "<<acima<<"\n\n";
							system("pause");
							break;
						}
						case 3: {
							cout<<"\n\n\t[3] - Ver o menor e o maior peso";
							for(int i=0; i<tam; i++){
								if (i==0){
									menor = pesos[i];
									maior = pesos[i];
								}
								if (pesos[i] < menor){
									menor = pesos[i];
								}
								if (pesos[i] > maior){
									maior = pesos[i];
								}
							}
							cout<<"\n\n\tMenor peso: "<<menor<<" kg";
							cout<<"\n\tMaior peso: "<<maior<<" kg\n\n";
							system("pause");
							break;
						}
						case 4: {
							cout<<"\n\tCaso mude de ideia, estaremos sempre à vossa disposição!\n\n\t";
							system("pause");
							break;
						}
						default: {
							cout<<"\n\n\n\tNúmero inválido.\n\n";
							system("pause");
							break;
						}
					}
				} while (opcao != 4);
				cout<<"\n\n\n";
				getch();
				break;
			}
			case 8:{
            	system ("color 3");
				int const tam = 6;
				int i, maior, menor;
				float temperaturas[tam], media=0, acum_temperaturas=0, contador=0;
				cout<<"\n\n\tPrograma de temperaturas";
				for(i=0; i<tam; i++){
					cout<<"\n\n\n\tInforme a " <<i+1<<"ª temperatura: ";
					cin>>temperaturas[i];
					acum_temperaturas += temperaturas[i];
					contador++;
					if (i==0){ 
						menor = temperaturas[i];
						maior = temperaturas[i];
					}
					if (temperaturas[i] < menor){
						menor = temperaturas[i];
					}
					if (temperaturas[i] > maior){ 
						maior = temperaturas[i];
					}
				}
				media = acum_temperaturas / contador;
				cout<<"\n\n\tA média das temperaturas informadas foi: "<<media; 
				cout<<"\n\n\tA menor temperatura informada foi: "<<menor;
				cout<<"\n\n\tA maior temperatura informada foi: "<<maior;
				cout<<"\n\n\n";
            	getch();
            	break;
            }
			case 9:{
            	system ("color 3");
            	cout<<"\n\n\tOpção 02";
            	cout<<" \n\n\tCaso mude de ideia, estaremos sempre disponíveis!\n\tAté mais!";
            	getch();
            	break;
			}
			default: {
				cout<<"\n\n\tInformou uma caractere inválida.";
				getch();
				break;
            }
 		}// fecha o switch
	} while(op!=9);
	cout<<"\n\n\n ";
}
