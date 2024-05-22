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

// void solve() {
//     int n,k; cin>>n>>k;
//     int sum = k*k*1LL;
//     if(n%2==0){
//         if(k%2==1 or sum>n){
//             no;
//         }else{
//             yes;
//         }
//     }else{
//         if(k%2==0 or sum>n){
//             no;
//         }else{
//             yes;
//         }
//     }
// }

void solve() {
    int n,k; cin>>n>>k;
    int sum = k*k*1LL;
    if(sum>n or (n%2==0 and k%2==1) or (n%2==1 and k%2==0)){
        no;
    }else{
        yes;
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