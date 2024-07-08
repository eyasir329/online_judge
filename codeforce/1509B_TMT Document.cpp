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
    string s; cin >> s;
    map<char, int>mp;
    map<char, vector<int>>mp2;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
        mp2[s[i]].push_back(i);
    }
    int t = 0, m = 0;
    for (auto x : mp) {
        if (x.first == 'T') {
            t += x.second;
        } else {
            m += x.second;
        }
    }
    if (2 * m == t) {
        int tc = t / 2;
        std::deque<int> t, m, t1, t2;
        for (int i = 0; i < sz(mp2['T']); i++) {
            t.push_back(mp2['T'][i]);
        }
        for (int i = 0; i < sz(mp2['M']); i++) {
            m.push_back(mp2['M'][i]);
        }
        for (int i = 0; i < sz(t); i++) {
            if (i < sz(t) / 2) {
                t1.push_back(t[i]);
            } else {
                t2.push_back(t[i]);
            }
        }
        while (tc--) {
            if (sz(t1) >= 1 and sz(t2) >= 1 and sz(m) >= 1 and m[0] > t1[0] and m[0] < t2[0]) {
                t1.pop_front();
                t2.pop_front();
                m.pop_front();
            }else {
                no;
                return;
            }
        }
        yes;
    } else {
        no;
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