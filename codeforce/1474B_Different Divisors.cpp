#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int d; cin >> d;
    int a = d, b = 0;
    for (int i = a + 1;; i++) {
        int cnt = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 0) {
            a = i;
            break;
        }
    }
    for (int i = a + d;; i++) {
        int cnt = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 0) {
            b = i;
            break;
        }
    }
    cout << min(a * b, a * a * b) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}