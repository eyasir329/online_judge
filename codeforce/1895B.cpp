#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define pb push_back
#define all(a) a.begin(), a.end()
#define sz(a) ((int)a.size())
#define print(a)          \
	for (auto x : a)      \
		cout << x << " "; \
	cout << endl
#define endl '\n'

void solve()
{
	int n;
	vector<pair<int, int>> coord,best;
	vi arr,l;
	cin >> n;
	int a;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> a;
		arr.pb(a);
	}
	int t = 0;
	int length = 0;
	sort(all(arr));
	if (sz(arr) >= 4)
	{
		if (sz(arr) == 4)
		{

			for (int i = 0; i < 4; i++)
			{
				int x = arr[i];
				for (int j = i + 1; j < 4; j++)
				{
					int y = arr[j];
					coord.pb({x, y});
				}
			}

			// coord.push_back({arr[0],arr[1]});
			// coord.push_back({arr[2],arr[3]});
			// length = abs(arr[0]-arr[1])+abs(arr[2]-arr[3]);
		}
	}

	// print(l);
	// cout<<length<<endl;
	for(pair<int,int>p:coord){
		cout<<p.first<<" "<<p.second<<endl;
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	ll t = 1;
	cin >> t;

	while (t--)
		solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
	return 0;
}

/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/