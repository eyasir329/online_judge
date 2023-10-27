#include <bits/stdc++.h>

using namespace std;	
#define int long long int
#define vi vector <int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl

void solve()
{
	int r, c;
	cin >> r >> c;
	char a;
	vi mm(1, 0), nn, oo, pp;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> a;
			if (a == 'v')
			{
				mm.pb(j);
			}
			else if (a == 'i')
			{
				nn.pb(j);
			}
			else if (a == 'k')
			{
				oo.pb(j);
			}
			else if (a == 'a')
			{
				pp.pb(j);
			}
		}
	}
	sort(all(mm));
	sort(all(nn));
	sort(all(oo));
	sort(all(pp));

	int m = 0, n = 0, o = 0, p = 0;
	if (sz(mm) > 1)
	{
		m = mm[1];
		for (int i = 0; i < sz(nn); i++)
		{
			if (nn[i] > m)
			{
				n = nn[i];
				break;
			}
		}
		for (int i = 0; i < sz(oo); i++)
		{
			if (oo[i] > n)
			{
				o = oo[i];
				break;
			}
		}
		for (int i = 0; i < sz(pp); i++)
		{
			if (pp[i] > o)
			{
				p = pp[i];
				break;
			}
		}
	}

	if (m < n && n < o && o < p)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
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

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/