#include <iostream>

using namespace std;

int countDivisors (int N, int T) {
    int count(0);

    // Algoritmo basado en la premisa de los divisores en pares
    for (int i(1); i * i <= T; i++) {
        if (T % i == 0) {
            // Verificación del divisor chico
            if (i <= N) {
                count++;
            }
            // Verificación del divisor grande
            if (T / i <= N && i != T / i) {
                count++;
            }
        }
    }
    return count;
}

void solve (int N, int T) {
    if (T == 1) {
        // Si el tiempo es 1 todos los relojes están sincronizados
        cout << N << endl;
    } else {
        cout << countDivisors (N, T-1);
    }
}

int main () {
    int N, T, Q;

    cin >> Q;

    for (int i(0); i < Q; i++) {
        cin >> N >> T;
        solve(N, T);
    }

    return 0;
}