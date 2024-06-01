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

vector<int> generateSequence(int n) {
    vector<int> dp(n);
    if (n > 0) dp[0] = 0;
    if (n > 1) dp[1] = 1;

    for (int i = 2; i < n; ++i) {
        if (i % 2 == 0) {
            dp[i] = dp[i - 1] ^ dp[i / 2];
        } else {
            dp[i] = dp[i - 1] + dp[(i - 1) / 2];
        }
    }
    return dp;
}

void solve() {
    // int n,m; cin>>n>>m;
    vector<int> sequence = generateSequence(100);
    print(sequence);
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