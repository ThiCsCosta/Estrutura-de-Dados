typedef int TipoInt;
const int max_itens = 10;

class fila
{
    private:
        int primeiro, ultimo;
        TipoInt* estrutura;
    public:
        fila();
        ~fila();

        bool estaVazio(); // isEmpty
        bool estaCheio(); // isFull
        void inserir(TipoInt item); // push // enqueue 
        TipoInt remover(); // pop // dequeue
        void imprimir(); // print
};


