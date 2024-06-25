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
    vector<pair<string,int>> v;
    int mn = 0;
    for (int i = 0; i < n; i++) {
        string s,s2; cin >> s;
        s2 = s;
        int x = 0;
        size_t pos = s.find('#');
        while (pos != string::npos) {
            x++;
            pos = s.find('#', pos + 1);
        }
        v.pb({s2, x});
        mn = max(mn, x);
    }
    int i=1;
    for(auto x:v){
        string ss = x.ff;
        if(x.ss==mn){
            int md = mn/2;
            int pos = ss.find('#');
            cout<<i<<" "<<abs(pos+md+1)<<endl;
            return;
        }
        i++;
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