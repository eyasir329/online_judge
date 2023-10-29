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
	vc d;
	char c;
	for(int i=0;i<n;i++){
		cin>>c;
		d.pb(c);
	}
	int t;
	if(n<2){
		t=-1;
	}else if(n==2){
		if(d[0]=='L'&&d[1]=='L'||d[0]=='R'&&d[1]=='R'){
			t=-1;
		}else if(d[0]=='L'&&d[1]=='R'){
			t=1;
		}else if(d[0]=='R'&&d[1]=='L'){
			t=0;
		}
	}

	cout<<t<<endl;
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