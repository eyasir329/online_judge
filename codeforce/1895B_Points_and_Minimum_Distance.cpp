#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int n,a;
	cin>>n;
	vi arr;
	for(int i=0;i<2*n;i++){
		cin>>a;
		arr.pb(a);
	}
	sort(all(arr));

	vector<pair<int,int>>vp;

	for(int i=0;i<n;i++){
		vp.pb({arr[i],arr[n+i]});
	}
	int len=0;
	for(int i=1;i<n;i++){
		len+=(vp[i].first-vp[i-1].first)+(vp[i].second-vp[i-1].second);
	}
	cout<<len<<endl;
	for(pair<int,int>v:vp){
		cout<<v.first<<" "<<v.second<<endl;
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

