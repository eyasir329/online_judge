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
    int a,b,c,d; cin>>a>>b>>c>>d;
    std::vector<int> v ={1,2,3,4,5,6,7,8,9,10,11,12};

    std::vector<int> v1;
    v1.pb(0);
    if(b>a){
        for(int i=a;i<b-1;i++){
            v1.pb(v[i]);
        }
    }else{
        for(int i=a;i<sz(v);i++){
            v1.pb(v[i]);
        }
        for(int i=0;i<b-1;i++){
            v1.pb(v[i]);
        }
    }
    sort(all(v1));
    bool fl1 = true,fl2=true;
    for(int i=0;i<sz(v1);i++){
        if(v1[i]==c){
            fl1 = false;
        }
        if(v1[i]==d){
            fl2 = false;
        }
    }
    if((fl1 and !fl2) or (!fl1 and fl2)){
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