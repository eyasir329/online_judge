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
    int x,y; cin>>x>>y;
    int yt = y;
    if(y&1) y++;
    int two = (y/2);
    int ceil = 15*two;
    ceil-=(yt*4+x);
    if(ceil>=0){
        cout<<two<<endl;
    }else{
        int need = abs(ceil);
        int m = (need%15==0)?0:1;
        int cnt = 0; 
        if(need<=15){
            cnt++;
        }else{
            cnt = (need/15);
            cnt+=m;
        }
        cout<<two+cnt<<endl;
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