#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha_1;
    TipoItem item; // variavel responsavel em inserir e remover o item
    int option;
    cout << "Gerador de pilhas:\n";
    do
    {
        cout << "\nDigite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir um elemento!\n";
        cout << "Digite 4 para verificar o tamanho da pilha!\n";
        cout << "Digite 5 para verificar se a pilha esta cheia\n";
        cin >> option;

        if (option == 1)
        {
            cout << "Digite o elemento a ser inserido na pilha:\n";
            cin >> item;
            pilha_1.insert(item);
        }
        else if (option == 2)
        {
            item = pilha_1.remove();
            cout << "Elemento removido:" << item << endl;
        }
        else if (option == 3)
        {
            pilha_1.print();
        }
        else if (option == 4)
        {
            cout << "Tamanho da pilha: " << pilha_1.isLenght();
        }
        else if (option == 5)
        {
            item = pilha_1.stackFull();
            cout << "Elementos da pilha " << item << endl;
        }
        
        
        
        
    } while (option != 0);
    

    return 0;
}