#include <iostream>

using namespace std;

//Vetores


int main(){
    // Alocação Estática
    //int vet[4];
    //vet[0]=5;
    //vet[1]=10;
    //int vet[4] = {5,10}; //vetor com 4 elementos e outra forma de declarar e imprimir quemnão existe como 0

    //cout << vet[1] << endl;


    //Imprimir vetor em ordem e chaves

    //cout << "[ ";
    //for (int i=0 ; i<4 ; i++){
        //cout << vet[i] << " ";
    //}
    //cout << " ]" << endl;

    //int x = sizeof(vet)/sizeof(int);//tamanho de bytes do vetor (cada elemento 4 bytes)
    //int y = sizeof(int); 
    //cout << "Tamanho de inteiro: " << y << endl;
    //cout << "Quantidade de elementos do vetor: " << x << endl;

     // Alocação Dinâmica
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];

    for (int i=0 ; i<tamanho ; i++){//usuário digita os elementos
        cout << "Digite o elemento " << i+1 << "do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor;


    return 0;
}