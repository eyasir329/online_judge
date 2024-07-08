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
    std::vector<int> v(n);
    for (auto &x : v) cin >> x;
    // print(v);
    if (is_sorted(all(v))) {
        cout << 0 << endl;
    } else {
        std::vector<int> vx,v2;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1]) {
                int x = abs(v[i] - v[i - 1]);
                v[i]+=x;
                vx.push_back(x);
            }
        }
        sort(all(vx));
        // print(vx);
        v2.push_back(vx[0]);
        int t = vx[0];
        for (int i=1;i<sz(vx);i++) {
            int x = abs(t-vx[i]);
            t+=x;
            v2.push_back(x);
        }
        // print(v2);

        int ans = 0,k=sz(v2);

        for (int i = 0; i < sz(v2); i++) {
            ans+= v2[i]*(k+1);
            k--;
        }
        cout << ans << endl;
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