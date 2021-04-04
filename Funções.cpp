#include <iostream>

using namespace std;

//int t; variável global

#define pi 3.14;//definir onstante
#define curtir cout << "Curta esse video!\n";//definir tarefa

void inscrever (){//função sem saída, apenas imprime
    cout << "Se inscreva no Canal do\nProfessor Douglas Maioli!\n";
}

int somar(int &x, int &y){// se introduzir & x influencia o valor de a
    int t;//variável local
    t=1;

    int soma;//variável local
    soma = x+y;
    x=30;
    return soma;
}

    int main(){

        int t;//variável local
        t=0

        ;inscrever();

        int a=5, b=4;
        int s;
        s = somar (a,b);
        cout << "Valor de a: " << a << endl;
        cout << "Soma: " << s << endl;

        cout << "Valor de t: " << t << endl;6

        //cout << pi;
        ;curtir;

       return 0;
}
