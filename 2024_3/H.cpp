#include <bits/stdc++.h>
using namespace std;

void obtenerRango(string Cantidad, int Arreglo[]){

    // Rango de valores del numerador y denominador

    for(int i = Cantidad.length() - 1; i >= 0; i--){

        int Value = 0;
        Value = pow(2, i);

        if(Cantidad[Cantidad.length() - 1 - i] != '*')
            Arreglo[0] += Value;
        else
            Arreglo[1] += Value;
    }
}

void solve(int Value){

    int Contador = 0;
    int N = 1;

    while(N <= Value){

        N *= 2;
        Contador++;
    }

    char Resultado[Contador  + 1];
    Resultado[Contador] = '\0';

    for(int i = Contador - 1; i >= 0; i--){

        if(Value % 2 == 0)
            Resultado[i] = '0';
        else
            Resultado[i] = '1';

        Value /= 2;
    }

    cout << Resultado << endl;
}

int main (){

    int A[2] = {0, 0};
    int B[2] = {0, 0};

    string Numerador;
    string Denominador;

    cin >> Numerador;
    cin >> Denominador;

    obtenerRango(Numerador, A);
    obtenerRango(Denominador, B);

    int Amin = A[0];
    int Amax = A[0] + A[1];

    int Bmin = B[0];
    int Bmax = B[0] + B[1];

    for (int i = Bmin; i <= Bmax; i++){

        int Value = Amax / i;

        if ((Value * i) > Amin){

            solve(Value * i);
            return 0;

        }
    }

    return 0;
}