#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl

void solve()
{
	int n;
	cin>>n;
	vi q;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==(i+1)){
			q.pb(a);
		}
	}
	
	int tt=0;
	if(sz(q)==0){
		tt=0;
	}else if(sz(q)==1){
		tt=1;
	}else if(sz(q)==2 || sz(q)==3){
		tt=sz(q)-1;
	}else{
		if(sz(q)%2==0){
			tt=sz(q)/2;
		}else{
			tt=sz(q)/2+1;
		}
		
	}
	cout<<tt<<endl;
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