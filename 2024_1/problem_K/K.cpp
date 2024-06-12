#include <bits/stdc++.h>
using namespace std;

struct Caballo{

    int X, Y;
    int Incidentes = 0;
    vector <int> Atacantes;

};

int main(){

    int N, M;

    cin >> N >> M;

    Caballo Piezas[M];

    for (int i = 0; i < M; i++){

        int x, y;

        cin >> x >> y;

        Piezas[i].X = x;
        Piezas[i].Y = y;

    }

    vector<vector<int>> MoveSet = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-1, -2}};

    for (int i = 0; i < M; i++){

        int x = Piezas[i].X;
        int y = Piezas[i].Y;

        for(int j = 0; j < MoveSet.size(); j++){

            int x2 = x;
            int y2 = y;

            x += MoveSet[j][0];
            y += MoveSet[j][1];

            for(int k = 0; k < M; k++){

                if(Piezas[k].X == x && Piezas[k].Y == y){

                    Piezas[k].Incidentes += 1;
                    Piezas[k].Atacantes.push_back(i);
                }
            }

            x = x2;
            y = y2;
        }
    }

    int Contador = 0;

    while(true){

        int Maximo = 0;
        int Posicion = 0;

        for (int i = 0; i < M; i++){

            if(Piezas[i].Incidentes > Maximo){

                Maximo = Piezas[i].Incidentes;
                Posicion = i;

            }
        }

        if(Maximo == 0){

            cout << Contador;
            return 0;
        }

        for (int i = 0; i < Piezas[i].Atacantes.size(); i++){
            
            Piezas[Piezas[Posicion].Atacantes[i]].Incidentes -= 1;
            
        }

    }

    return 0;
}
