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

#include <iostream> // estava faltando essa biblioteca.
#include <stdlib.h>
#include <time.h>
using namespace std; // estava faltando o using namespace.

int vet[10]; // tinha um ponto e v�rgula dividindo a cria��o da vari�vel e do vetor; a vari�vel x n�o estava sendo utilizada.

main() // tinha um ponto e v�rgula desnecess�rio aqui.
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impress�o ficar mais agrad�vel visualmente.
	srand(time(NULL));
	for(int i=0; i<10; i++) { // tinha um ponto e v�rgula ap�s o FOR; faltava no FOR o int inicial; o sinal estava errado (era maior que, mas o correto, nesse caso, � menor que); o limite de repeti��o deve ser 10, e n�o A; o contador deve ser o i, n�o o A; faltava as chaves.
		vet[i] =(rand()%60)+1; 
		cout<<"\n"<<i+1<<"� N�mero aleat�rio: "<< vet[i]; // a seta do cout estava invertida; o nome do vetor estava escrito errado; estava tentando imprimir um valor da posi��o A da lista, sendo que deve imprimir um valor da posi��o i.
	}
}

 // faltou organiza��o e identa��o; deixei a impress�o mais agrad�vel visualmente.
