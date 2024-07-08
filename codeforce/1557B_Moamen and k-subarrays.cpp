#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    std::vector<int> v(n);
    vector<pair<int, int>>a;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        a.push_back({v[i], i});
    }
    int cnt  = 0 ;

    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++) {
        if ((a[i + 1].second - a[i].second) != 1) {
            cnt++;
        }
    }
    if(cnt)cnt++;
    if (cnt <= k) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
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