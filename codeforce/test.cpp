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
    std::vector<int> a(n-1);
    std::vector<int> vv(n);
    for(auto &x:a) cin>>x;
    vv[n-1] = 1e6;
    for(int i=0;i<n-1;i++){
        vv[i]=vv[n-i]/a[i];
    }
    print(vv);
    for(int i=1;i<n;i++){
        cout<<a[i]%a[i-1]<<" ";
    }
    cout<<endl;
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