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
	char ch[8][8];
	vector<char> n;
	int t=-1;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin>>ch[i][j];
			if(ch[i][j]!='.'){
				t=j;
			}
		}
	}

	for(int i=0;i<8;i++){
		if(ch[i][t]!='.'){
			n.pb(ch[i][t]);
		}
	}
	for(char c:n){
		cout<<c;
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