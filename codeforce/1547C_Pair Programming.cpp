#include<bits/stdc++.h>
using namespace std;

void solve() {
    int k, n, m; cin >> k >> n >> m;
    std::vector<int> a(n);
    std::vector<int> b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    std::vector<int> v;
    int cnt = n + m, x = 0, y = 0;
    while (cnt--) {
        if (x < n and a[x] == 0) {
            v.push_back(a[x++]);
            k++;
        }
        else if (y < m and b[y] == 0) {
            v.push_back(b[y++]);
            k++;
        }
        else if (x < n and a[x] <= k) {
            v.push_back(a[x++]);
        }
        else if (y < m and b[y] <= k) {
            v.push_back(b[y++]);
        }
        else {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}