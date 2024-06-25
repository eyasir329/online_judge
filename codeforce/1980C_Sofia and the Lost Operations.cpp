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
    std::vector<int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int m; cin >> m;
    std::vector<int> d(m);
    for (auto &x : d) cin >> x;
    map<int, int>md, mb;
    for (int i = 0; i < n; i++) {
        if(a[i]!=b[i]){
            mb[b[i]]++;
        }
    }
    for (int i = 0; i < m; i++) {
        md[d[i]]++;
    }
    bool fl = true;
    for(auto [x,y]:mb){
        if(md[x]<y){
            fl = false;
        }
    }
    if(count(all(b),d[m-1])==0){
        fl = false;
    }
    if(fl){
        yes;
    }else{
        no;
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