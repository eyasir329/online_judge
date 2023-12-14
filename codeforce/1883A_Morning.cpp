#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define vi vector <int>
#define vii vector <pair<int,int>>
#define si set <int>
#define sii set <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define tos(x) to_string(x);
#define sin(x) static_cast<int>(x)-48;
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	string s = "1234567890";
	string x;
	cin>>x;
	int count = 0;
	for(int i=0;i<4;i++){
		if(i>0){
			if(x[i]==x[i-1]){
				count++;
			}else{
				int m = s.find(x[i]);
				int n = s.find(x[i-1]);
				count+=(abs(m-n)+1);
			}
		}else{
			int p=s.find(x[i]);
			if(p==0){
				count=1;
			}else{
				count=1+p;
			}
		}
	}
	cout<<count<<endl;
}
// 4
// 9
// 31
// 27
// 28
// 13
// 25
// 16
// 33
// 24


int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    ll t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" Run Time "<<e-s<<endl;
        i++;
    }
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/