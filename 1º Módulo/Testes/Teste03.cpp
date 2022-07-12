//********************************
//**** Program by CLAWER  ****
// Tester Name: Gustavo Almeida da Silva
//********************************
/* 
Analise o programa e:
1. Faça as correções e documente as alterações com comentários
2. Sugira melhorias no programa
3. Contabilize as correções: 18
Total de erros encontrados: 18
Total de melhorias: 2
*/

#include <iomanip>
#include <iostream> // estava faltando essa biblioteca.
using namespace std; // estava faltando o using namespace. 

int const tam=3;
float vetor[tam], m, acumulador, maior=0, menor=1000; // redefini as vaiáveis, pois as mesmas estavam confusas e/ou erradas.

main() // retirei um ponto e vírgula mal colocado.
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impressão ficar mais agradável visualmente.
	for(int i=0; i<tam; i++) { // tinha um ponto e vírgula após o FOR; faltava no FOR o int inicial; tinha vírgula separando as informações do FOR, ao invés de ponto e vírgula; faltava as chaves.
		cout<<"Digite a "<<i+1<< "° altura: "; // faltava um cout pedindo as alturas.
		cin>>vetor[i]; // a seta do cin estava invertida.
		acumulador += vetor[i]; // faltava o ponto e vírgula; faltava o +=.
		if(vetor[i] > maior) { // faltava as chaves.
			maior = vetor[i];
		}
		if(vetor[i] < menor) { // o raciocínio lógico de ambos os IF estavam errados; tinha um ponto e vírgula nesse IF.
			menor = vetor[i];
		}
	}
	m = acumulador / tam; // o cálculo da média estava dentro do FOR.
	cout<<"\nMédia das alturas: "<<m<<"\nMaior altura: "<<maior<<"\nMenor altura: "<<menor; // O cout estava incompleto.
}
 // faltou organização e identação; deixei a impressão mais agradável visualmente.


