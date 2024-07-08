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
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    bool fl = false;
    if(x1<=x2 and ((y1>=x1 and y1<=x2) and (y2>=x1 and y2<=x2))){
        fl = true;
    }
    if(y1<=y2 and ((x2>=y1 and x2<=y2) and (x1>=y1 and x1<=y2))){
        fl = true;
    }
    if(fl){
        no;
    }else{
        yes;
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