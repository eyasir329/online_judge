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
    int n; cin >> n;
    std::vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    c = a;
    sort(all(c), greater());
    for (int i = 0; i < n; i++) {
        int mn = 0,k=0,m=0;
        for(int j=0;j<sz(c);j++){
            m=mn;
            mn = max(mn,abs(a[i]-c[j]));
            if(mn!=m){
                k=j;
            }
        }
        b[i]=c[k];
        c.erase(c.begin()+k);
    }
    print(a);
    print(b);
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