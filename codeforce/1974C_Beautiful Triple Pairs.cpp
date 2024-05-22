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
    for (auto &i : v) cin >> i;

    vector<map<pair<int,int>,vector<int>>>m(3);
    for(int i=0;i<n-2;i++){
        m[0][{v[i],v[i+1]}].pb(v[i+2]);
        m[1][{v[i],v[i+2]}].pb(v[i+1]);
        m[2][{v[i+1],v[i+2]}].pb(v[i]);
    }
    int ans = 0;
    for(int i=0;i<3;i++){
        for( auto &[key,a]:m[i]){
            map<int,int>mt;
            for(auto x:a){
                mt[x]++;
            }
            int ma = a.size();
            int ct = 0;

            for(auto y:a){
                ct+=(ma - mt[y]);
            }
            ans+=ct/2;
        }
    }
    cout<<ans<<endl;
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