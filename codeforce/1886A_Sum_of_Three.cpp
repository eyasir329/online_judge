/*
    =======বিসমিল্লাহির রাহমানির রাহিম=======
    Author : Eyasir Ahamed
    Sheikh Hasina University, Netrokona
    ===================================
*/

#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve()
{
	int n;
	cin>>n;
	int a{1},b{2},temp{n-3},t1{0};

	while(temp>0){
		if(temp%3==0){
			temp=temp-2;
			b=b+2;
		}else{
			break;
		}
	}

	if(a==b ||  a==temp || b==temp ||temp<=0){
		cout<<"NO"<<endl;
		
	}else{
		cout<<"YES"<<endl;
		cout<<a<<" "<<b<<" "<<temp<<endl;
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
    while (t--)
    {
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    cout << endl;

    return 0;
}