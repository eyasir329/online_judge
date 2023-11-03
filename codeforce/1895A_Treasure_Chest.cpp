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
	int x,y,k;
	cin>>x>>y>>k;
	int t=0,t1=0,t2=0;
	if(x<y){
		if(k>0){
			if(y<=(x+k)){
				t = x+(y-x);
			}else{
				if(y>x+k){
					t1 = x+k;
					t2 = y-t1;
					t=t1+(2*t2);
				}else{
					t = x+k+(y-(x+k));
				}
			}
		}else{
			t = x+2*(y-x);
		}
	}else{
		t = y+(x-y);
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