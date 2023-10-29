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
	int n;
	cin>>n;
	vi arr;
	int a;
	int tt;
	int b,c=-1,t1=0,t2=0,t3=0,k=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(i==0){
			b=a;
			t1++;
		}
		if(a!=b && c==-1){
			c=a;
			t2++;
			k=i;
		}
		if(i!=k && a==c){
			t2++;
		}
		if(i!=0&&a==b){
			t1++;
		}
		if(a!=b && a!=c){
			t3++;
		}
		arr.pb(a);
	}
	if(sz(arr)<2){
		tt=-1;
	}else if(sz(arr)==2){
		tt=1;
	}else{
		int m = sz(arr)/2;
		if(t3>0){
			tt=-1;
		}else if(t1==m||t2==m||t1==sz(arr)||t2==sz(arr)){
			tt=1;
		}else{
			tt=-1;
		}
	}

	if(tt==1){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
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