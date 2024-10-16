    #include <iostream>
    #include "pilha.h"

    using namespace std;

pilha::pilha() // Função construtora
{
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
}

pilha::~pilha() // Função destrutora
{
    delete [] estrutura;
}

bool pilha::stackFull() // Função para verificar se a pilha está cheia isFull
{
    return (tamanho == max_itens);
}

bool pilha::stackEmpty() // Função para verificar se a pilha está vazia isEmpty
{
    return (tamanho == 0);
}

void pilha::insert(TipoItem item) //Push função para inserir elementos
{
    if (stackFull()) 
    {
       cout << "A pilha está cheia!\n";
       cout << "Não foi possivel inserir mais elementos!\n";
    }else{
        estrutura[tamanho] = item;
        tamanho ++;
    }
    
}

TipoItem pilha::remove() //(pop) Função para remover elementos
{
    if (stackEmpty())
    {
        cout << "A pilha está vazia!\n";
        cout << "Não tem elementos para ser removido\n";
        return 0;
    }else{
        tamanho --;
        return estrutura[ tamanho];
    }
    
}

void pilha::print() //Imprimir
{
    cout << "Pilha: [";
    for (int i = 0; i < tamanho; i++)
    {
        cout << estrutura[i] << " ";
    }
    cout << "]\n";
    
}

int pilha::isLenght()  // Tamanho 
{
    return tamanho;
}
