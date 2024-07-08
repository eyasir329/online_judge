#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
	int n; cin >> n;
	std::vector<int> v(n), odd, even;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int x = 0, y = 0;
	for(int i=0;i<n;i++){
		if(i&1){
			x = gcd(x,v[i]);
		}else{
			y = gcd(y,v[i]);
		}
	}
	bool f1 = true,f2= true;
	for(int i=0;i<n;i++){
		if(i&1){
			if(v[i]%y==0){
				f2 = false;
			}
		}else{
			if(v[i]%x==0){
				f1 = false;
			}
		}
	}

	if(f1){
		cout<<x<<endl;
	}else if(f2){
		cout<<y<<endl;
	}else{
		cout<<0<<endl;
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