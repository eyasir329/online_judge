#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    if (n>k) {
        if(n%k==0) cout<<1<<endl;
        else{
            cout<<2<<endl;
        }
    }else{
        cout<<(n+k-1)/n<<endl;
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