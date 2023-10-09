/*
	=======বিসমিল্লাহির রাহমানির রাহিম=======
	Author : Eyasir Ahamed
	Sheikh Hasina University, Netrokona
	===================================
*/

#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve()
{
	int n{0}, w{0}, s{0}, e{0}, E{0}, temp{0};
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> s >> e;
		if (j == 0)
		{
			w = s;
			E = e;
		}

		if (e >= E && j != 0)
		{
			if (s >= w)
			{
				temp = 1;
			}
		}

		if (temp == 1 && j == n - 1)
		{
			cout << "-1" << endl;
		}
		else
		{
			if (j == n - 1)
			{
				cout << w << endl;
			}
		}
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	cout << endl;

	return 0;
}