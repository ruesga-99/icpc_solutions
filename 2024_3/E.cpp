#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    int Garbage;
    cin >> N;

    int Matrix[N][N];

    for(int i = 0; i < N; i++){

        for(int j = 0; j < N; j++){

            cin >> Garbage;

            Matrix[i][j] = Garbage;

        }
    }

    int Maximo = 0;
    int Temporal = 0;
    int Indice = 0;

    // Checar extremos, obtener esquina con mayor valor.

    for(int i = 0; i < 4; i++){

        if(i == 0)
            Temporal = Matrix[0][N - 1];
        else if(i == 1)
            Temporal = Matrix[0][0];
        else if(i == 2)
            Temporal = Matrix[N - 1][0];
        else if(i == 3)
            Temporal = Matrix[N - 1][N - 1];

        if(Temporal > Maximo){

            Maximo = Temporal;
            Indice = i;
        }
    }

    cout << 3 - Indice;

    return 0;
}