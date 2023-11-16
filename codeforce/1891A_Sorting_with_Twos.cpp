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
	cin >> n;
	int a, t = 0, m = 0;
	vi arr;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr.pb(a);
	}

	for (int i = 0; i <n-1; i++)
	{
		if (arr[i+1] < arr[i])
		{
			if(((i+1)&i)!=0){
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
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