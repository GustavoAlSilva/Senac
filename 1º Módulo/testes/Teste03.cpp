//********************************
//**** Program by CLAWER  ****
// Tester Name: Gustavo Almeida da Silva
//********************************
/* 
Analise o programa e:
1. Fa�a as corre��es e documente as altera��es com coment�rios
2. Sugira melhorias no programa
3. Contabilize as corre��es: 18
Total de erros encontrados: 18
Total de melhorias: 2
*/

#include <iomanip>
#include <iostream> // estava faltando essa biblioteca.
using namespace std; // estava faltando o using namespace. 

int const tam=3;
float vetor[tam], m, acumulador, maior=0, menor=1000; // redefini as vai�veis, pois as mesmas estavam confusas e/ou erradas.

main() // retirei um ponto e v�rgula mal colocado.
{
	setlocale(LC_ALL, "Portuguese"); // adicionei para a impress�o ficar mais agrad�vel visualmente.
	for(int i=0; i<tam; i++) { // tinha um ponto e v�rgula ap�s o FOR; faltava no FOR o int inicial; tinha v�rgula separando as informa��es do FOR, ao inv�s de ponto e v�rgula; faltava as chaves.
		cout<<"Digite a "<<i+1<< "� altura: "; // faltava um cout pedindo as alturas.
		cin>>vetor[i]; // a seta do cin estava invertida.
		acumulador += vetor[i]; // faltava o ponto e v�rgula; faltava o +=.
		if(vetor[i] > maior) { // faltava as chaves.
			maior = vetor[i];
		}
		if(vetor[i] < menor) { // o racioc�nio l�gico de ambos os IF estavam errados; tinha um ponto e v�rgula nesse IF.
			menor = vetor[i];
		}
	}
	m = acumulador / tam; // o c�lculo da m�dia estava dentro do FOR.
	cout<<"\nM�dia das alturas: "<<m<<"\nMaior altura: "<<maior<<"\nMenor altura: "<<menor; // O cout estava incompleto.
}
 // faltou organiza��o e identa��o; deixei a impress�o mais agrad�vel visualmente.


