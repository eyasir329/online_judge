#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    int x = 6, y = 8, z = 10;
    int a = 15, b = 20, c = 25;
    if (n <= x) {
        cout << a << endl;
    } else if (n <= y) {
        cout << b << endl;
    } else if (n <= z) {
        cout << c << endl;
    } else {
        int ct = n % 10;
        int ans = (n / 10) * 25;
        if (ct > 0) {
            if (ct >= 1 and ct <= 2) {
                ans += 5;
            } else if (ct <= 4) {
                ans += 10;
            } else if (ct <= 6) {
                ans += 15;
            } else if (ct <= 8) {
                ans += 20;
            } else {
                ans += 25;
            }
        }
        cout << ans << endl;
    }
}

int32_t main() {
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