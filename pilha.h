//O arquivo pilha.h descreve as funções

// pilha = stack
typedef int TipoItem; //função onde vc pode mudar o int por float uma única vez
const int max_itens = 100; //numeoro máximo de elementos da pilha

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora //stack
    ~pilha(); //destrutora //~stack
    bool estacheia(); //verifica se a pilha esta cheia //isfull
    bool estavazia(); //verifica se a pilha esta vazia //isempty
    void inserir(TipoItem item); //push
    TipoItem remover(); //pop
    void imprimir(); //print
    int qualtamanho(); //lenght

};