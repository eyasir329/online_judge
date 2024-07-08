#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, p; 
    cin >> n >> p;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({a[i], min(b[i], p)});
    }

    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y) {
        return x.second < y.second;
    });
    
    int ans = p;
    int idx = n;
    for(int i=0;i<n;i++){
        if(v[i].second>=p and i==0){
            ans+=p*(n-1);
            break;
        }else{
            int a = v[i].first;
            int b= v[i].second;
            int res = idx-i-1;
            if(a>=res){
                ans+=(res*b);
                break;
            }else{
                ans+=a*b;
                idx-=(a-1);
            }
        }
    }
    cout << ans << endl;
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