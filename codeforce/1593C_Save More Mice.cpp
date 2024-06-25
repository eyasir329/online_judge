#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x; cin >> n >> k;
    std::vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(),greater());
    int ans = 0;
    int xx = 0;
    for(int i=0;i<k;i++){
        int diff = n-v[i];
        if(v[i]>xx){
            ans++;
            xx+=diff;
        }
    }
    cout << ans << endl;
}

int main() {
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