#include <iostream>
#include "fila.h"

using namespace std;

//Construtor
fila::fila()
{
    primeiro = 0;
    ultimo = 0;
    estrutura = new TipoInt[max_itens];
}

//Destrutor
fila::~fila()
{
    delete [] estrutura;
}

bool fila::estaVazio()
{
    return (primeiro == ultimo);
}

bool fila::estaCheio()
{
    return (ultimo-primeiro == max_itens);
}

void fila::inserir(TipoInt item)
{
    if (estaCheio())
    {
        cout << "A fila esta cheia\n " << max_itens << endl;
    }else{
        estrutura[ultimo % max_itens] = item;
        ultimo++;
    }
    
}

TipoInt fila::remover()
{
    if (estaVazio())
    {
       cout << "A fila esta vazia!\n ";
       return 0;
    }else{
        primeiro ++;
        return estrutura[(primeiro - 1) % max_itens];
    }
    
}

void fila::imprimir()
{
    cout << "Fila: [";
    for (int i = primeiro; i < ultimo; i++)
    {
        cout << estrutura[i % max_itens] << " ";
    }
    cout << "]\n";
    
}
