#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(ceil(((float)a+(float)b)/2)>c){
		yes;
	}else{
		no;
	}
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" RT :"<<e-s<<endl;
        i++;
    }
    cerr<<"TRT :"<<((double)(clock() - z) / CLOCKS_PER_SEC)<<endl;
    return 0;
}