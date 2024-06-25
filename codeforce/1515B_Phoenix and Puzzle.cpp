#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    bool ok = false;
    if (n % 2 == 0) {
        int x = sqrt(n / 2);
        if (x * x == n / 2) {
            ok = true;
        }
    }
    if (n % 4 == 0) {
        int x = sqrt(n / 4);
        if (x * x == n / 4) {
            ok = true;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
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