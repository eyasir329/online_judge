#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int n,x;
	cin>>n>>x;
	vi arr;	
	int k=0,a;
	arr.pb(0);
	for(int i=0;i<n;i++){
		cin>>a;
		arr.pb(a);
	}
	if(arr[sz(arr)-1]<x){
		arr.pb(x);
	}
	int m = abs(arr[sz(arr)-1]-arr[sz(arr)-2])*2;
	// print(arr);
	for(int i=1;i<sz(arr);i++){
		int d = abs(arr[i]-arr[i-1]);
		if(d>k){
			k=d;
		}
	}
	if(m>k){
		k=m;
	}
	cout<<k<<endl;
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