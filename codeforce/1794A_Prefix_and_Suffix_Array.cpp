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
	int n;
	cin>>n;
	vector<pair<string,string>>vss;
	vector<string>vs;
	string st;
	for(int i=0;i<2*n-2;i++){
		cin>>st;
		vs.pb(st);
	}
	for(int i=0;i<sz(vs);i++){
		int len = sz(vs[i]);
		int k=i+1;
		while(k<sz(vs)){
			int len2 = sz(vs[k]);
			if(len==len2){
				vss.pb({vs[i],vs[k]});
			}
			k++;
		}
	}
	int t=0;
	for(auto c:vss){
		string tt;
		for(int i=sz(c.second)-1;i>=0;i--){
			tt = c.second;
		}
		if(c.first!=tt){
			//cout<<c.first<<" "<<tt<<endl;
			for(int ii=0,kk=sz(tt)-1;ii<sz(tt);ii++,kk--){
				if(tt[ii]!=c.first[kk]){
					t=-1;
					break;
				}
			}
			if(t==-1){
				break;
			}
			
		}
		//cout<<c.first<<" "<<c.second<<endl;
	}
	if(t==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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