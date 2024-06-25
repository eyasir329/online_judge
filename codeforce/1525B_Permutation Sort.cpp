#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ma =  (int) * max_element(v.begin(), v.end());
    int mn = (int) * min_element(v.begin(), v.end());
    if (is_sorted(v.begin(), v.end())) {
        cout << 0 << endl;
    } else if (v[0] == mn and !(is_sorted(v.begin() + 1, v.end()))) {
        cout << 1 << endl;
    } else if (v[n - 1] == ma and !(is_sorted(v.begin(), v.end() - 1))) {
        cout << 1 << endl;
    } else if ((v[n - 1] == mn and v[0] == ma) or (v[0] == ma and v[n - 1] == mn)) {
        cout << 3 << endl;
    } else {
        cout << 2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}