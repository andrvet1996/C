#include <iostream>

using namespace std;

//Matrizes


int main(){
      int matriz[2][3];//2 linhas e 3 colunas

      matriz[0][0] = 11; //elemento da linha 1 (0 no c++) e coluna 1 
      matriz[0][1] = 12;
      matriz[0][2] = 13;

      matriz[1][0] = 21;
      matriz[1][1] = 22;
      matriz[1][2] = 23;

      for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<3 ; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}