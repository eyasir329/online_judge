#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define sz(a) ((int) a.size())

const int m = 1e5 + 1;
int extra[m];

void binaryDecimal(vector<int>&dp) {
	for (int i = 0; i < m; i++) {
		string s = to_string(i);
		if (*max_element(s.begin(), s.end()) <= '1') {
			dp.push_back(i);
		}
	}
}

void solve() {
	int n;
	cin >> n;
	if (extra[n]) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;

	vector<int>dp;
	binaryDecimal(dp);
	extra[1] = 1;
	for (int x : dp) {
		for (int i = 0; i < m; i++) {
			if (extra[i]) {
				if (i * x < m) extra[i * x] = 1;
			}
		}
	}

	while (t--) solve();
	return 0;
}