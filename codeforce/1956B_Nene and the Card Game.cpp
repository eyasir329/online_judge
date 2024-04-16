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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    map<int, int>mp;
    set<int>s;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        s.insert(a[i]);
    }

    vector<int> b;
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->second == 1) {
            b.pb(itr->first);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (s.count(i) == 0) {
            b.pb(i);
            b.pb(i);
        }
    }
    sort(all(b));
    // reverse(all(b));
    // for (int i = 0; i < sz(a); i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < sz(b); i++) {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    set<int>table;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (table.count(a[i])!=0) {
            cnt++;
        }
        table.insert(a[i]);
        // bool flag = false;
        // for (int j = 0; j < sz(b); j++) {
        //     if (binary_search(all(a), b[i]) == 0) {
        //         table.insert(b[i]);
        //         b.erase(b.begin() + i);
        //         flag = true;
        //         break;
        //     }
        // }
        // if (!flag) {
        //     if (!b.empty()) {
        //         table.insert(b[0]);
        //         b.erase(b.begin() + 0);
        //     }
        // }
    }
    cout << cnt << endl;
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