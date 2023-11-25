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
	string s;
	cin>>s;
	stack<int>stk;
	
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			stk.push(i);
		}
	}

	int count=0;

	while(!stk.empty()){
		int a = stk.top();
		if(a<n-1){
			if(s[a+1]=='B'){
				swap(s[a+1],s[a]);
				count++;
				stk.pop();
			}
		}
		
	}
	cout<<count<<endl;
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