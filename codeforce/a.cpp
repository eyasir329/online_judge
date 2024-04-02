#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define mPrint(m) for(auto itr=m.begin();itr!=m.end();itr++)cout<<itr->first<<" "<<itr->second<<endl
#define endl '\n'

void solve() {
    string s;
    vector<pair<int, int>>v;
    for (int i = 0; i < 21; i++) {
        cin >> s;
        int x = 0, y = 0;
        for (int i = 0; i < sz(s); i++) {
            if (s[i] == '1') {
                x++;
            } else {
                y++;
            }
        }
        v.pb({x, y});
        s = "";
    }
    vector<int>vv;
    for (auto x : v) {
        vv.pb(abs(x.ff - x.ss));
    }
    vv.pb(21);
    sort(all(vv));
    vv.erase(unique(all(vv)), vv.end());
    map<int,int>m1;
    for (int i = 0; i < sz(vv) - 1; i++) {
        int x = (abs(vv[i] - vv[i + 1]));
        m1[x]++;
    }
    int diff = 0;
    for (auto itr = m1.begin(); itr != m1.end(); itr++) {
        if (itr->second > 1) {
            diff += itr->second;
        } else {
            diff += itr->first;
        }
    }
    cout << diff << endl;

}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}