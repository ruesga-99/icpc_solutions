#include <iostream>

using namespace std;

int main () {
    int L, W, H, l, w, h, ans(0);

    cin >> L >> W >> H;
    cin >> l >> w >> h;

    ans = max(ans, (L/l) * (W/w) * (H/h));
    ans = max(ans, (L/l) * (W/h) * (H/w));
    ans = max(ans, (L/w) * (W/l) * (H/h));
    ans = max(ans, (L/w) * (W/h) * (H/l));
    ans = max(ans, (L/h) * (W/l) * (H/w));
    ans = max(ans, (L/h) * (W/w) * (H/l));

    cout << ans << endl;

    return 0;
}