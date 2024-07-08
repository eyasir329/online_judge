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
    std::vector<vector<int>> b1(n, vector<int> (m)), b2(n, vector<int> (m));
    vector<string>v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    } for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b1[i][j] = (v1[i][j]) - '0';
        }
    } for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b2[i][j] = (v2[i][j]) - '0';
        }
    }
    for (int i = 0; i < n; i++) {
        int s1 = 0, s2 = 0;
        for (int j = 0; j < m; j++) {
            s1 += b1[i][j];
            s2 += b2[i][j];
        }
        if (s1 % 3 != s2 % 3) {
            no;
            return;
        }
    } for (int i = 0; i < m; i++) {
        int s1 = 0, s2 = 0;
        for (int j = 0; j < n; j++) {
            s1 += b1[j][i];
            s2 += b2[j][i];
        }
        if (s1 % 3 != s2 % 3) {
            no;
            return;
        }
    }
    yes;
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