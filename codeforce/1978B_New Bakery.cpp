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
    int n, a, b; cin >> n >> a >> b;
    int k = min(n, b);
    if (b < a) {
        cout << n*a * 1ll << endl;
    } else {
        int x = b - a;
        int ans2 = 0;
        if (k >= x) {
            // for (int i = 1; i <= x; i++) {
            //     ans2 += (b - i + 1);
            // }
            ans2+=(x*b-((x*(x+1))/2)+x);
            ans2+=(n-x)*a;
        } else {
            // for (int i = 1; i <= k; i++) {
            //     ans2 += (b - i + 1);
            // }
            ans2+=(k*b-((k*(k+1))/2)+k);
            ans2+=(n-k)*a;
        }
        cout<<ans2<<endl;
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