#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve (vector<int>& A, int L, int R) {
    vector<int> B(R-L);

    for (int i = L; i < R; i++) {
        B[i-L] = A[i];
    }

    sort(B.begin(), B.end());

    int min_diff = abs(B[B.size() -1]);

    for (int i(1); i < B.size(); i++) {
        min_diff = min(min_diff, B[i] - B[i - 1]);
        
        if (min_diff == 0) break;
    }

    cout << min_diff << endl;
}

int main () {
    int N, Q, L, R, val;

    cin >> N;

    vector<int> A(N);

    for (int i(0); i < N; i++) {
        cin >> val;
        A[i] = val;
    }

    cin >> Q;

    for (int i(0); i < Q; i++) {
        cin >> L >> R;
        solve (A, L-1, R);
    }

    return 0;
}