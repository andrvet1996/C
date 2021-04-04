// Pilha Dinâmica = Dynamic Stack

typedef int TipoItem;

struct No //Node   parece classe com pequenas diferenças  
{
    TipoItem valor;
    No* proximo; 
};

class pilhadinamica{
    private:
    No* NoTopo;

    public:
    pilhadinamica(); //construtor //dynamic stack
    ~pilhadinamica(); //destrutor
    bool estavazio(); //isempty
    bool estacheio(); //tem memória //isfull
    void inserir(TipoItem item); //push
    TipoItem remover(); //pop
    void imprimir(); //print
};
// https://pt.stackoverflow.com/questions/16181/qual-a-diferen%C3%A7a-entre-struct-e-class