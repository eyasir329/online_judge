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
	int n, m;
	cin >> n >> m;
	string s;
	string t;
	cin >> s >> t;
	bool sb=true,tb=true;

	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]){
			sb=false;
		}
	}

	if(sb||sz(s)==1){
		cout<<"Yes"<<endl;
	}else{
		for(int i=0;i<m-1;i++){
		 if(t[i]==t[i+1]){
			tb=false;
		 }
		}
		if(tb==false){
			cout<<"No"<<endl;
		}else{
			bool b=true;
			for(int i=0;i<n-1;i++){
				if(s[i]==s[i+1]){
					if(t[0]==s[i] || t[m-1]==s[i]){
						b=false;
					}
				}
				
			}
			if(b){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
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