#include <iostream>
#include "fila.h"
using namespace std;

int main(){
    fila fila1;
    int opcao;
    TipoInt item;

    cout << "Programa gerador de filas:\n";
    do
    {

         cout << "Digite 0 para parar o programa: \n";
         cout << "Digite 1 para inserir um elemento: \n";
         cout << "Digite 2 para remover um elemento: \n";
         cout << "Digite 3 para imprimir todos os elementos na fila: \n";
         cin >> opcao;

        if (opcao == 1)
        {
            cout << "Digite um número para  ser inserido na fila: \n";
            cin >> item;
            fila1.inserir(item);
        }else if (opcao == 2)
        {
           item = fila1.remover();
           cout << "Elemento removido da fila: " << item << endl;
        }else if (opcao == 3)
        {
           fila1.imprimir();
        }
        
        
        
    } while (opcao != 0);
    

    return 0;

}