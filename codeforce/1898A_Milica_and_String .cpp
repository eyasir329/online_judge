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
	int n,k;
	cin>>n>>k;
	vc c;
	string s;
	cin>>s;
	int bcount=0;
	for(int i=0;i<sz(s);i++){
		if(s[i]=='B'){
			bcount++;
		}
	}
	int t=0,m=0,t1=0,t2=0;
	char ch;
	if(bcount==k){
		cout<<t<<endl;
		return;
	}else if(bcount>k){
		int c=0;
		for(int i=0;i<sz(s);i++){
			if(s[i]=='B'){
				c++;
				if(bcount-c==k){
					cout<<"1"<<endl;
					cout<<i+1<<" "<<'A'<<endl;
					return;
				}
			}
		}
	}else{
		int y=0;
		for(int i=0;i<sz(s);i++){
			if(s[i]=='A'){
				y++;
				if(y+bcount==k){
					cout<<"1"<<endl;
					cout<<i+1<<" "<<'B'<<endl;
					return;
				}
			}
		}
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