#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl

void solve()
{
	int n,t=0;
	cin>>n;
	vc d;
	vc sa={'R','L'};
	char c;
	
	for(int i=0;i<n;i++){
		cin>>c;
		d.pb(c);
	}

	auto result = search(all(d),all(sa));

	if(sz(d)<2){
		t=-1;
	}
	else if(sz(d)==2){
		if(d[0]=='R'&&d[1]=='L'){
			t=0;
		}else if(d[0]=='L'&&d[1]=='R'){
			t=1;
		}else{
			t=-1;
		}
	}else{
		if(result!=d.end()){
			t=0;
		}else{
			auto findR = find(all(d),'R');
			auto findL = find(all(d),'L');
			if(findR!=d.end()&&findL!=d.end()){
				t=findR-d.begin();
			}else{
				t=-1;
			}
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

    ll t = 1;
    cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/