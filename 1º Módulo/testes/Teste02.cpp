//********************************
//**** Program by CLAWER  ****
// Tester Name: Gustavo Almeida da Silva 
//********************************
/* 
Analise o programa e:
1. Fa�a as corre��es e documente as altera��es com coment�rios
2. Sugira melhorias no programa
3. Contabilize as corre��es: 14
Total de erros encontrados: 14
Total de melhorias: 2
*/

#include<iostream>
using namespace std; // estava faltando o using namespace. 

float media;
int vetor[5], contador=0, soma=0; // redefini as vai�veis, pois as mesmas estavam confusas e/ou erradas.

main()
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impress�o ficar mais agrad�vel visualmente.
	for(int i=0; i<5; i++) { // tinha um ponto e v�rgula ap�s o FOR; tinha v�rgula separando as informa��es do FOR, ao inv�s de ponto e v�rgula; faltava no FOR o int inicial; o sinal estava errado (era maior que, mas o correto, nesse caso, � menor que); faltava as chaves.
		cout<<"Digite a "<<i+1<<" � idade: "; // faltava um cout pedindo as idades.
		cin>>vetor[i]; // a seta do cin estava invertida.
		soma += vetor[i];
	}
	media = soma / 5;
	for (int i=0; i<5; i++) {
		if (vetor[i] > media) { // tinha um ponto e v�rgula ap�s o IF; tinha um IF desnecess�rio.
			contador += 1;
		}
	}
	cout<<"\nM�dia das idades: "<<media; // a seta do cout estava invertida.
	cout<<"\nQuantidade de idades acima da m�dia: "<<contador; // a seta do cout estava invertida.
} 
 // faltou organiza��o e identa��o; deixei a impress�o mais agrad�vel visualmente.
