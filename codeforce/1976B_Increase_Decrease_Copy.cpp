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
    std::vector<int> a(n);
    std::vector<int> b(n + 1);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int cnt = 0,xx=LLONG_MAX;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cnt += (abs(a[i] - b[i]));
        if(a[i]>=b[i] and (b.back()>=b[i] and b.back()<=a[i])){
            flag = true;
        }
        if(a[i]<=b[i] and (b.back()<=b[i] and b.back()>=a[i])){
            flag = true;
        }
    }
    if(flag){
        cnt++;
    }else{
        cnt++;
        for(int i=0;i<n;i++){
            xx = min(xx,abs(b[i]-b.back()));
            xx = min(xx,abs(a[i]-b.back()));
        }
        cnt+=xx;
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