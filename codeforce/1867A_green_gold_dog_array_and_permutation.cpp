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
	int n,m;
	cin>>n;
	vi a;
	vi d;
	int b =1;
	for(int i=0;i<n;i++){
		cin>>m;
		int div = m - b;
		d.pb(div);
		b++;

	}

	//print(d);
	int x=1;
	for(int i=0;i<sz(d);i++){
		cout<<x<<" ";
		x++;
	}
	cout<<endl;

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