#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int>v(n),v1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    v1 = v;
    // print(v);
    int big = 0, cnt = 0;
    if (k != 1) {
        for (int i = 0; i < k - 1; i++) {
            if (v[i] > v[k - 1]) {
                big = i;
                break;
            }
        }
        swap(v[big], v[k - 1]);
        if (big != 0 && v[big] > v[big - 1]) {
            cnt++;
        }
    }

    for (int i = big + 1; i < n; i++) {
        if (v[i] > v[big]) {
            break;
        } else {
            cnt++;
        }
    }
    int cnt1 = 0;
    swap(v1[0],v1[k-1]);
    for (int i = 1; i < n; i++) {
        if (v1[i] > v1[0]) {
            break;
        } else {
            cnt1++;
        }
    }
    // print(v);
    cout << max(cnt,cnt1) << endl;
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