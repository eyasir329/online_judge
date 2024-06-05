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
    int n, f, k; cin >> n >> f >> k;
    std::vector<int> v(n);
    for (auto &x : v) cin >> x;
    int x = 0;
    for (int i = 0; i < n; i++) {
        if (i + 1 == f) {
            x = v[i];
            break;
        }
    }
    sort(all(v));
    reverse(all(v));
    bool f1 = false,f2 = false;
    for(int i=0;i<k;i++){
        if(v[i]==x){
            f1 = true;
            break;
        }
    }
    for(int i=k;i<n;i++){
        if(v[i]==x){
            f2 = true;
        }
    }

    if(f2){
        if(f1 and f2){
            cout<<"MAYBE"<<endl;
        }else{
            no;
        }
    }else{
        yes;
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