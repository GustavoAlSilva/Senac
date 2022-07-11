// Data: 06/08/2021

#include<iostream>
using namespace std;

int lado, cont=0, n=0;

main ()
{
	setlocale(LC_ALL, "Portuguese");
    cout <<"\n\tDigite o tamanho do lado do quadrado: ";
    cin >> lado;
    if (lado < 1)
    {
        cout <<"\n\tTamanho inválido.";
    }
    else { 
        while (cont < lado)
        {
            cout << "* ";
            cont = cont + 1;
        }
        cout << endl;
        cont = 0;
        while (cont < (lado - 2))
        {
            cout << "*";
            do {
                cout << " ";
                n = n + 1;
            } while ( n < ((2 * lado) - 3));
            n = 0;
            cout << "*" << endl;
            cont = cont + 1;
        }
        cont = 0;
        while (cont < lado && lado != 1)
        {
            cout << "* ";
            cont = cont + 1;
        }
    }
   
}
