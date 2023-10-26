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
	string s1,s2;
	cin>>s1>>s2;
	int t;
	for(auto& c:s1){
		c=tolower(c);

	}
	for(auto& c:s2){
		c=tolower(c);

	}
	if(s1==s2){
		t=0;
	}else if(s1>s2){
		t=1;
	}else{
		t=-1;
	}
	cout<<t<<endl;;

}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    //cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/