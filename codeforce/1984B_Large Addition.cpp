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
    string s; cin >> s;
    std::vector<int> v;
    for (int i = sz(s) - 1; i >= 0; i--) {
        v.pb(s[i] - '0');
    }
    string x1, x2;
    for (int i = 0; i < sz(v) - 2; i++) {
        for (int j = 5; j <= 9; j++) {
            bool fl = false;
            for (int k = 5; k <= 9; k++) {
                int x = j + k;
                string x0 = to_string(x);
                if (x0[1] - '0' == v[i]) {
                    x1 += (to_string(j));
                    x2 += (to_string(k));
                    v[i + 1] -= 1;
                    fl = true;
                    break;
                }
            }
            if (fl) {
                break;
            }
        }
    }

    int xx = v[sz(v) - 1] * 10 + v[sz(v) - 2];

    for (int j = 5; j <= 9; j++) {
        bool fl = false;
        for (int k = 5; k <= 9; k++) {
            int x = j + k;
            string x0 = to_string(x);
            if (x == xx) {
                x1 += (to_string(j));
                x2 += (to_string(k));
                fl = true;
                break;
            }
        }
        if (fl) {
            break;
        }
    }
    // reverse(all(x1));
    // reverse(all(x2));

    if (sz(x1) > 0 and sz(x2) > 0) {
        int mxlen = sz(x1);
        int carry = 0;
        string result;
        for (int i = 0; i < mxlen; i++) {
            int num1 = (i < sz(x1)) ? x1[i] - '0' : 0;
            int num2 = (i < sz(x2)) ? x2[i] - '0' : 0;
            int tot = num1 + num2 + carry;
            result.pb((tot % 10) + '0');
            carry = tot / 10;
        }
        if (carry != 0) {
            result.pb((carry + '0'));
        }
        reverse(all(result));
        // cout << result << endl;
        if (s == result) {
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