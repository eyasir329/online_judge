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
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    std::vector<int> v(n+1);
    for (int i = 1; i <= n; i++) {
        v[i] = i;
    }
    if (k%2) {
        no;
    } else {
        for(int i=1,j=n;i<j;){
            int x = abs(v[i]-v[j]);
            if(x*2<=k){
                k-=x*2;
                swap(v[i],v[j]);
                i++;
                j--;
            }else{
                j--;
            }
        }
        if(k!=0){
            no;
        }else{
            yes;
            for(int i=1;i<=n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
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