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
	int n;
	cin>>n;
	vi a(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    sort(all(a));
    if(a[0]==a[sz(a)-1]){
        cout<<-1<<endl;
        return;
    } 
    vi b,c;
    int k=n;
    for(int i=0;i<n;i++){
        b.pb(a[i]);
        for(int j=i+1;j<n;j++){
            if(a[i]%a[j]==0){
                b.pb(a[j]);
            }else{
                c.pb(a[j]);
            }
        }
        if(i==0){
            break;
        }
        
    }
    cout<<sz(b)<<" "<<sz(c)<<endl;
    print(b);
    print(c);

}
// -1
// 3 2
// 1 3 5 
// 2 4 
// 1 2
// 1 
// 3 5 
// 2 5
// 1 1 
// 2 4 7 7 9 
// 3 2
// 4 8 4 
// 12 12 


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