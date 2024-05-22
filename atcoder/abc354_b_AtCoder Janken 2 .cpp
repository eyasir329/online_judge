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
    int n; cin>>n;
    std::vector<string> v(n);
    int cnt = 0;
    for(int i=0;i<n;i++){
        int x;
        cin>>v[i];
        cin>>x;
        cnt+=x;
    }
    sort(all(v));
    int t1 = cnt % n;
    for(int i=0;i<n;i++){
        if(i==t1){
            cout<<v[i]<<endl;
            break;
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
    // cin >> t;
    while (t--) solve();
    return 0;
}