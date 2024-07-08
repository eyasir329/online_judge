#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int n, x, t; cin >> n >> x >> t;
    int cnt = 0;
    int multi = t / x;
    int k = (n - multi);
    if (k >= 0) {
        cnt += k * (multi);
        int m = (n - k - 1);
        int s = (m * (m + 1)) / 2;
        cnt += s;
    }else{
        int m = (n - 1);
        int s = (m * (m + 1)) / 2;
        cnt+=s;
    }

    cout << cnt << endl;
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