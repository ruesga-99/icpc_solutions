#include <iostream>

using namespace std;

void solve (int n, int p) {
    int  temp, max(0);

    for (int i(0); i < n; i++) {
        cin >> temp;

        if (temp > max && temp <= p) {
            max = temp;
            if (max == p) {
                break;
            }
        }
    }

    cout << max;
}

int main () {
    int n, p;

    cin >> n >> p;

    solve (n, p);
    
    return 0;
}