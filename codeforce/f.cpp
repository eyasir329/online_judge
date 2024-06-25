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
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    std::vector<int> v(n);
    for (auto &x : v) cin >> x;
    int ans = n;
    for (int i = 0; i < n-1; i++) {
        int sum = v[i];
        for(int j=i+1;j<n;j++){
            cout<<v[j]<<" ";
            sum+=v[j];
            if(sum%v[j]==0){
                ans++;
            }else{
                break;
            }
        }
    }
    cout << ans << endl;
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