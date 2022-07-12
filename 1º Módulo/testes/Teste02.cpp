//********************************
//**** Program by CLAWER  ****
// Tester Name: Gustavo Almeida da Silva 
//********************************
/* 
Analise o programa e:
1. Faça as correções e documente as alterações com comentários
2. Sugira melhorias no programa
3. Contabilize as correções: 14
Total de erros encontrados: 14
Total de melhorias: 2
*/

#include<iostream>
using namespace std; // estava faltando o using namespace. 

float media;
int vetor[5], contador=0, soma=0; // redefini as vaiáveis, pois as mesmas estavam confusas e/ou erradas.

main()
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impressão ficar mais agradável visualmente.
	for(int i=0; i<5; i++) { // tinha um ponto e vírgula após o FOR; tinha vírgula separando as informações do FOR, ao invés de ponto e vírgula; faltava no FOR o int inicial; o sinal estava errado (era maior que, mas o correto, nesse caso, é menor que); faltava as chaves.
		cout<<"Digite a "<<i+1<<" ° idade: "; // faltava um cout pedindo as idades.
		cin>>vetor[i]; // a seta do cin estava invertida.
		soma += vetor[i];
	}
	media = soma / 5;
	for (int i=0; i<5; i++) {
		if (vetor[i] > media) { // tinha um ponto e vírgula após o IF; tinha um IF desnecessário.
			contador += 1;
		}
	}
	cout<<"\nMédia das idades: "<<media; // a seta do cout estava invertida.
	cout<<"\nQuantidade de idades acima da média: "<<contador; // a seta do cout estava invertida.
} 
 // faltou organização e identação; deixei a impressão mais agradável visualmente.
