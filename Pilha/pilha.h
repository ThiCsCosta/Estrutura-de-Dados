typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
        int tamanho;
        TipoItem* estrutura;
    public:

        pilha(); // Função construtora
        ~pilha(); // Função destrutora
        bool stackFull(); // Função para verificar se a pilha está cheia isFull
        bool stackEmpty(); // Função para verificar se a pilha está vazia isEmpty
        void insert(TipoItem item); //Push função para inserir elementos
        TipoItem remove(); //pop Função para remover elementos
        void print(); //Imprimir
        int isLenght(); // Tamanho 
};


