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
	int a,b,c;
	cin>>a>>b>>c;
	int t1=0;
	if(a>b){
		t1=1;
	}else if(b>a){
		t1=0;
	}else if(a==b &&c%2==0){
		t1=0;
	}else if(a==b &&c%2!=0){
		t1=1;
	}

	if(t1==0){
		cout<<"Second"<<endl;
	}else if(t1==1){
		cout<<"First"<<endl;
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