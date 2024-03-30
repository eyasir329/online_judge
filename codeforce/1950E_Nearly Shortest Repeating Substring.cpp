#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

int compString(string &a, string &b) {
	string temp = a;
	while (a.size() < b.size()) {
		a += temp;
	}
	int dissimillar = 0;
	for (int i= b.size()-1; i>=0;i--) {
		if (a[i] != b[i]) {
			dissimillar++;
		}
	}
	return dissimillar;
}

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int>divisors;
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			divisors.push_back(i);
			if (i != n / i) divisors.push_back(n / i);
		}
	}
	sort(divisors.begin(), divisors.end());
	for (int x:divisors) {
		string a = s.substr(0, x);
		if (compString(a, s) <= 1) {
			cout << x << endl;
			return;
		}
		a = s.substr(x, x+x);
		if (compString(a, s) <= 1) {
			cout << x << endl;
			return;
		}
	}
	cout << n << endl;
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}