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
    string num, alpha;
    int nu = 0, c = 0;
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (flag) {
            if (s[i] >= '0' and s[i] <= '9') {
                num += s[i];
                nu++;
            } else {
                flag = false;
                if (s[i] >= 'a' and s[i] <= 'z') {
                    alpha += s[i];
                    c++;
                }
            }
        } else {
            if (s[i] >= 'a' and s[i] <= 'z') {
                alpha += s[i];
                c++;
            }
        }
    }
    if (nu + c == n) {
        string a, b;
        a += num;
        sort(all(a));
        b += alpha;
        sort(all(b));
        if (num == a and alpha == b) {
            yes;
        } else {
            no;
        }
    } else {
        no;
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