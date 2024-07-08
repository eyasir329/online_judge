#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (v[i] > i + 1) {
            int a = v[i];
            while (a > n) {
                a /= 2;
            }
            v[i] = a;
        }
    }
    sort(v.begin(), v.end());
    map<int, int>m;
    for (int i = 0; i < n; i++) {
        m[v[i]]++;
    }
    for (auto x : m) {
        int p = x.second, num = x.first;
        while (p > 1 and num>1) {
            num /= 2;
            if (m[num] == 0) {
                m[num]++;
                p--;
            }
        }
        m[x.first]=p;
    }
    // for (auto x : m) {
    //     int p = x.second, num = x.first;
    //     cout << num << " " << p << endl;
    // }
    bool fl = false;
    for (int i = 0; i < n; i++) {
        if(m[i+1]==0){
            fl = true;
            break;
        }
    }
    if (fl) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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