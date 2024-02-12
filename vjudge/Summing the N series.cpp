#include <bits/stdc++.h>

using namespace std;

int summingSeries(int n,long long M) {
	int t = 0;
	for (int i = 1; i <= n; i++) {
		t += (i * i)%M - ((i - 1) * (i - 1)%M);
	}
	return t;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long M = 1000000007;
		cout<<summingSeries(n,M)<<endl;
		// cout << ((n%M)*(n%M))%M << endl;
	}
	return 0;
}