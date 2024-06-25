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
    std::vector<int> v(n);
    for (auto &x : v) cin >> x;
    if (v[0] == v[n - 1]) {
        no;
    } else {
        yes;
        if (v[1] != v[n - 1]) {
            cout << 'B';
            for (int i = 1; i < n; i++) {
                cout << 'R';
            }
        } else {
            for (int i = 0; i < n - 1; i++) {
                cout << 'R';
            }
            cout << 'B';
        }
        cout << endl;
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