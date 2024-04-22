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
    int n,k; cin>>n>>k;
    int kk = k;
    vector<int> v;
    for(int i=32;i>0;i--){
        int x = pow(2,i);
        x-=1;
        int y = k-(n-1);
        if(y>x){
            v.push_back(x);
            k-=x;
        }
    }
    k=kk;
    // print(v);
    if(n==1){
        cout<<k<<endl;
    }else{
        if(n>sz(v)){
            int s=k;
            for(int i=0;i<sz(v);i++){
                cout<<v[i]<<" ";
                n--;
                s-=v[i];
            }
            while(n--){
                cout<<s<<" ";
            }
            cout<<endl;
        }else{
            print(v);
        }
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