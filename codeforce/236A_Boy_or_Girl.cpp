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
	string s;
	cin>>s;
	int n = s.length();
	int t=0;
	for(int i=0;i<n;i++){
		int count=1;
		int j=i;
		while(j<n-1){
			if(s[j+1]==s[i] && s[i]!='1'){
				count++;
				s[j+1]='1';
			}
			j++;
		}
		if(s[i]!='1'){
			if(count==1 || count>=2){
				t++;
			}
		}
	}
	if(t%2==0){
		cout<<"CHAT WITH HER!"<<endl;
	}else{
		cout<<"IGNORE HIM!"<<endl;
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
    //cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/