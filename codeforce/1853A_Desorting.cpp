#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define vi vector <int>
#define vii vector <pair<int,int>>
#define si set <int>
#define sii set <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define tos(x) to_string(x);
#define sin(x) static_cast<int>(x)-48;
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int n;cin>>n;
	vi arr(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(is_sorted(all(arr))){
		int min_diff = INT_MAX;
		for(int i=0;i<n-1;i++){
			if(abs(arr[i+1]-arr[i])<min_diff){
				min_diff = abs(arr[i+1]-arr[i]);
			}
		}
		if(min_diff<1){
			cout<<min_diff+1<<endl;
		}else if(min_diff<3){
			cout<<min_diff<<endl;
		}else{
			int a=1;
			int b= min_diff+1;
			int ans =ceil(min_diff/2)+1;
			cout<<ans<<endl;
		}
	}else{
		cout<<0<<endl;
	}
}
// 1
// 2
// 0
// 3

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    ll t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" Run Time "<<e-s<<endl;
        i++;
    }
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/