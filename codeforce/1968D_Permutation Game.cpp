#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define F0R(i,a,b) for(int i=a; i<(b); i++)
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n, k, pb, ps; cin >> n >> k >> pb >> ps;
    std::vector<int> p(n + 1), a(n + 1);
    F0R(i, 1, n + 1) cin >> p[i];
    F0R(i, 1, n + 1) cin >> a[i];

    std::vector<int> pathB;
    std::vector<int> pathS;
    std::vector<int> vis(n + 1, 0);
    pathB.push_back(pb);
    vis[pb] = 1;
    while (true) {
        if (vis[p[pathB.back()]] != 1) {
            pathB.push_back(p[pathB.back()]);
            vis[pathB.back()] = 1;
        } else {
            break;
        }
    }
    fill(all(vis), 0);
    pathS.push_back(ps);
    vis[ps] = 1;
    while (true) {
        if (vis[p[pathS.back()]] != 1) {
            pathS.push_back(p[pathS.back()]);
            vis[pathS.back()] = 1;
        } else {
            break;
        }
    }
    // print(pathB);
    // print(pathS);

    int bans = 0, sans = 0, preSum = 0;

    for(int i=0;i<pathB.size();i++){
        if(k<=i){
            break;
        }
        int curSum = preSum + a[pathB[i]]*(k-i);
        bans = max(bans,curSum);
        preSum+=a[pathB[i]];
    }

    preSum = 0;
    
    for(int i=0;i<pathS.size();i++){
        if(k<=i){
            break;
        }
        int curSum = preSum + a[pathS[i]]*(k-i);
        sans = max(sans,curSum);
        preSum+=a[pathS[i]];
    }

    // cout<<bans<<" "<<sans<<endl;

    if(bans>sans){
        cout<<"Bodya"<<endl;
    }else if(bans<sans){
        cout<<"Sasha"<<endl;
    }else{
        cout<<"Draw"<<endl;
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
