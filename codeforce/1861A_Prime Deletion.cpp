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

bool prime(int num){
	if(num==1) return false;
	for(int i=2;i<num;i++){
		if(num%i==0) return false;
	}
	return true;
}

void solve()
{
	string num;
	cin>>num;
	for(int i=0;i<sz(num)-1;i++){
		for(int j=i+1;j<sz(num);j++){
			string temp;
			temp+=num[i];
			temp+=num[j];
			if(prime(stoi(temp))){
				cout<<temp<<endl;
				return;
			}
		}
	}

	// for(int i=0;i<sz(num);i++){
	// 	if(num[i]=='1'){
	// 		cout<<13<<endl;
	// 		return;
	// 	}
	// 	if(num[i]=='3'){
	// 		cout<<31<<endl;
	// 		return;
	// 	}
	// }
}

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