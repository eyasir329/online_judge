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
    int n,k;cin>>n>>k;
    std::vector<int> v(n);
    for(auto &x:v) cin>>x;
    vector<int>a;
	for(int i=0;i<n;i++){
		if(v[i]+k<=5){
			a.pb(v[i]);
		}
	}
	int cnt = sz(a);
	if(cnt>=3){
		cout<<cnt/3<<endl;
	}else{
		cout<<0<<endl;
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
    // cin >> t;
    while (t--) solve();
    return 0;
}