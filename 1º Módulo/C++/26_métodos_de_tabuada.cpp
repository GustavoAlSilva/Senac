// Data: 11/08/2021

#include <iostream> 
using namespace std;
 
int num, i;
char opcao, resposta; 

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	cout<<"\n\n\t\tTabuada";
	cout<<"\n\n\n\tDigite um n�mero para a Tabuada: ";
	cin>>num;
	while (num < 0){
		cout<<"\n\n\tN�mero inv�lido.\n\tN�o s�o aceitos n�meros negativos.";
		cout<<"\n\n\tPor favor, digite novamente um n�mero para a Tabuada: ";	
		cin>>num;
	}
	do{
		system ("cls"); // para limpar a tela antes do menu
		cout<<"\n\n\n\t\t[F] - Tabuada usando for;";
		cout<<"\n\t\t[W] - Tabuada usando while;";
		cout<<"\n\t\t[D] - Tabuada usando do...while;";
		cout<<"\n\t\t[S] - Sair;";
		cout<<"\n\n\n\tEscolha um dos m�todos acima: ";
		cin>>opcao;
		opcao=toupper(opcao);
		switch (opcao){
	
			case 'F':{
				cout<<"\n\n\n\t\tTabuada usando o for\n";
				for (int i=0; i<=10; i++){
					cout<<"\n\t"<<num<<"x"<<i<<" = "<<num * i;
				}
				cout<<"\n\n";
				system("pause");
				break;
			}
			case 'W':{
				cout<<"\n\n\n\t\tTabuada usando o while\n";
				i=0;
				while (i<=10){
					cout<<"\n\t"<<num<<"x"<<i<<" = "<<num * i;
					i++;
				}
				cout<<"\n\n";
				system("pause");
				break;
			}
			case 'D':{
				cout<<"\n\n\n\t\tTabuada usando o do...while\n";
				i=0;
				do {
					cout<<"\n\t"<<num<<"x"<<i<<" = "<<num*i;
					i++;
				} while (i<=10);
				cout<<"\n\n";
				system("pause");
				break;
			}
			case 'S':{
				cout<<"\n\n\t\tEstaremos sempre � disposi��o!";
				break;
			}
			default:{
				cout<<"\n\n\tPor favor, escolha uma op��o v�lida.";
				break;
			}
		}
	} while (opcao != 'S');
	cout<<"\n\n\n";
}
