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
    int n; cin>>n;
    std::vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    map<int,int>m;
    int a = 0,b = 0;
	for(auto x:v) m[x]++;
    bool flag = true;
	for(auto x:m){
		if((int)x.ss%2==0){
			a = x.ff;
			b = x.ff;
            flag=false;
			break;
		}
	}
    if(flag){
        int cnt =LLONG_MAX>>1;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x = abs(v[i]-v[j]);
                cnt = min(cnt,x);
            }
        }
        if(cnt == LLONG_MAX>>1){
            cnt = 0;
        }
        cout<<cnt<<endl;
        return;
    }
	cout<<abs(a-b)<<endl;
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