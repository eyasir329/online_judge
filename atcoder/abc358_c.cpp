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
    int n, m; cin >> n >> m;
    std::vector<string> vs;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        vs.pb(s);
    }
    map<int, vector<int>>mv, m1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vs[i][j] == 'o') {
                mv[i + 1].pb(j + 1);
            }
        }
    }

    for (auto x : mv) {
        print(x.ss);
        if (sz(x.ss) == 1) {
            m1[x.ff].pb(x.ss[0]);
        } else {
            for (int i = 1; i < sz(x.ss); i++) {
                if (x.ss[i] - x.ss[i - 1] == 1) {
                    m1[x.ff].pb(x.ss[i]);
                } 
            }
        }
    }
    for (auto x : m1) {
        for (int i = 0; i < sz(x.ss); i++) {
            cout << x.ss[i] << " ";
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
    // cin >> t;
    while (t--) solve();
    return 0;
}