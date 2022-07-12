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

#include <iostream> // estava faltando essa biblioteca.
#include <stdlib.h>
#include <time.h>
using namespace std; // estava faltando o using namespace.

int vet[10]; // tinha um ponto e vírgula dividindo a criação da variável e do vetor; a variável x não estava sendo utilizada.

main() // tinha um ponto e vírgula desnecessário aqui.
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impressão ficar mais agradável visualmente.
	srand(time(NULL));
	for(int i=0; i<10; i++) { // tinha um ponto e vírgula após o FOR; faltava no FOR o int inicial; o sinal estava errado (era maior que, mas o correto, nesse caso, é menor que); o limite de repetição deve ser 10, e não A; o contador deve ser o i, não o A; faltava as chaves.
		vet[i] =(rand()%60)+1; 
		cout<<"\n"<<i+1<<"° Número aleatório: "<< vet[i]; // a seta do cout estava invertida; o nome do vetor estava escrito errado; estava tentando imprimir um valor da posição A da lista, sendo que deve imprimir um valor da posição i.
	}
}

 // faltou organização e identação; deixei a impressão mais agradável visualmente.
