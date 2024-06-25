#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    int w, h; cin >> w >> h;
    std::vector<int> a, b, c, d;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        b.push_back(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        c.push_back(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        d.push_back(x);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());

    int ans = 0;
    ans = (a.back()-a[0])*h;
    ans = max(ans,(b.back()-b[0])*h);
    ans = max(ans,(c.back()-c[0])*w);
    ans = max(ans,(d.back()-d[0])*w);
    cout<<ans<<endl;
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