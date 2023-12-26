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
	int n;
	cin>>n;
	vi arr(n,0);
	for(int i=0;i<sz(arr);i++){
		cin>>arr[i];
	}
	vi v;
	v.insert(v.end(),all(arr));
	sort(all(v));
	bool f=true;
	for(int i=0;i<n;i++){
		if(arr[i]!=v[i]){
			f=false;
		}
	}
	if(f){
		cout<<0<<endl;
	}else{
		int c=n,x;
		while(c--){
			int k=c;
			if(arr[k-1]>arr[c]){
				x=c;
				break;
			}
		}
		int a = *max_element(arr.begin(),arr.begin()+x);
		cout<<a<<endl;
	}
	
}

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