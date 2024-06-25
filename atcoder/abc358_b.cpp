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
    int n,a; cin>>n>>a;
    std::vector<int> v(n);
    for(auto &x:v) cin>>x;
    int x=0;
    for(int i=0;i<n;i++){
        int aa = v[i]+a;
        int bb = x+a;
        if(bb>aa){
            cout<<bb<<endl;
            x+=a;
        }else{
            cout<<aa<<endl;
            x = aa;
        }
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