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
	std::vector<int> v(n);
	for (auto &i : v) cin >> i;
	sort(all(v));
	vector<int>a, b, c,d;
	print(v);

	for (int i = 0; i < n; i++) {
		if (a.empty() || v[i] == a.back() + 1) {
			a.pb(v[i]);
		}
		if (v[i] % 2 == 0) {
			b.pb(v[i]);
		} else {
			c.pb(v[i]);
			d.pb(v[i]);
		}
	}
	if((sz(a)==n) or (sz(b)==n) or (sz(c)==n)){
		yes;
	}else{
		print(a);
		print(b);
		print(c);
		print(d);
		if((sz(a)==sz(b) or sz(a)==sz(d) or sz(b)==sz(d)) and (sz(a)==n/2 or sz(b)==n/2)){
			yes;
		}

		cout<<"ajjs"<<endl;
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