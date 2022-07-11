 // Data: 01/08/2021

#include<iostream>
#include<iomanip>
using namespace std;

float preco_total, preco1, preco2, preco3, preco4, preco5;
int qtd;
int cod_produto;
int resposta1, resposta2;

main()
{
	preco1 = float(6.50);
	preco2 = float(4.50);
	preco3 = float(7.00);
	preco4 = float(4.25);
	preco5 = float(16.99);
	
	preco_total = 0;
	
	resposta2 = 1;
	
	setlocale(LC_ALL, "Portuguese");
	cout<<fixed<<setprecision(2);
	cout<<"\n\n\tBom dia, bem-vindo ao Mercado do Gustavo.\n\n\n\n\tProdutos:\n\n\t\t1- Coca-Cola 2 l, R$6,50;\n\t\t2- Macarrão 500 g, R$4,50;\n\t\t3- Arroz 1 kg, R$7,00;\n\t\t4- Dúzia de ovos, R$4,25;\n\t\t5- Batata palha 500 g, R$16,99;\n\n\n\n\tDeseja comprar algo? Digite 1, para sim, ou 2, para não: ";
	cin>>resposta1;
	
	while (resposta1 != 1 && resposta1 != 2) {
		cout<<"\n\n\tCódigo não identificado. Por favor, digite um número válido (1 ou 2).\n\tDeseja comprar algo? Digite 1, para sim, ou 2, para não: ";
		cin>>resposta1;
	}
	
	if (resposta1 == 2)
		cout<<"\n\n\tCaso mude de ideia, estaremos sempre à disposição.\n\n";
		
	else {
		while (resposta2 == 1) {
			cout<<"\n\n\tPor favor, informe o número correspondente ao produto desejado: ";
			cin>>cod_produto;
			while (cod_produto != 1 && cod_produto != 2 && cod_produto != 3 && cod_produto != 4 && cod_produto != 5) {
				cout<<"\n\n\tCódigo não identificado. Por favor, digite um número válido (1 ou 2).\n\tInforme o número correspondente ao produto desejado: ";
				cin>>cod_produto; }
			cout<<"\n\tPor favor, digite a quantidade desejada: ";
			cin>>qtd;
			if (cod_produto == 1)
				preco_total += (preco1 * qtd);
			else if (cod_produto == 2)
				preco_total += (preco2 * qtd);
			else if (cod_produto == 3)
				preco_total += (preco3 * qtd);
			else if (cod_produto == 4)
				preco_total += (preco4 * qtd);
			else 
				preco_total += (preco5 * qtd);
			cout<<"\n\n\tDeseja comprar outro produto? Digite 1, para sim, ou 2, para não: ";
			cin>>resposta2;
			while (resposta2 != 1 && resposta2 != 2) {
				cout<<"\n\n\tCódigo não identificado. Por favor, digite um número válido (1 ou 2).\n\tDeseja comprar algo? Digite 1, para sim, ou 2, para não: ";
				cin>>resposta2; } }
		cout<<"\n\n\tO valor total ficou em R$"<<preco_total<<".\n\tAgradecemos pela preferência. Volte sempre!\n\n";}
}
