#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    std::vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    if (n == 1) {
        cout << v[0] << endl;
    } else {
        long long x = 0;
        long long mn = *min_element(v.begin(), v.end());
        long long mxn = mn;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            x+=mn;
            mn = v[i]-x;
            mxn = max(mxn,mn);             
        }
        cout << mxn << endl;
    }
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