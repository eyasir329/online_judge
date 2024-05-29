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
    int n,b,d; cin>>n>>b>>d;
    std::vector<int> v(n);
    for(auto &i:v) cin>>i;
    vector<int>a;
	for(int i=0;i<n;i++){
		if(v[i]<=b){
			a.pb(v[i]);
		}
	}
	int cnt = 0;
	int tot = 0;
	for(int i=0;i<sz(a);i++){
		if(tot+a[i]<=d){
			tot+=a[i];
		}else{
			tot = 0;
			cnt++;
		}
	}
	cout<<cnt<<endl;
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