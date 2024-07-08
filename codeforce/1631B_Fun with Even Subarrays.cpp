#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (is_sorted(v.begin(), v.end()) and v[0]==v[n-1]) {
        cout << 0 << endl;
        return;
    }
    int cnt = 0, idx = 1;
    for (int i = n - 2; i >= 0;) {
        if (v[i] != v[n - 1]) {
            cnt++;
            i -= idx;
            idx *= 2;
        } else {
            idx++;
            i--;
        }
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