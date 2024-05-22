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
    std::vector<int> a(n);
    for(auto &i:a) cin>>i;
    int sum = 0;
    for(int i=0;i<n;){
        int cnt = -2e18;
        int j = i;
        while(j<n and ((a[i]>0 and a[j]>0) or (a[i]<0 and a[j]<0))){
            cnt = max(cnt,a[j]);
            j++;
        }
        sum+=cnt;
        i = j;
    }
    cout<<sum<<endl;
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