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
 int a,b;
 cin>>a>>b;
 int t=0;
 if(a==b){
 	t = pow(a+a,2);
 }else if(a>b){
 	if(a<(b+b)){
 		t = pow(b+b,2);
 	}else{
 		t = pow(a,2);
 	}
 	
 }else{
 	if(b<(a+a)){
 		t = pow(a+a,2);
 	}else{
 		t = pow(b,2);
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