#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve()
{
	int n;
	cin>>n;
	vector<int> aa;
	vector<int> bb;
	int a=1;
	int b=1;
	int d,e;
	for(int i=0;i<n;i++){
		cin>>d>>e;
		aa.push_back(d);
		bb.push_back(e);	
	}

	for(int j=0;j<n;j++){
		a*=aa[j];
		b*=bb[j];
		//cout<<aa[j]<<" "<<bb[j]<<" ";
	}


	cout<<a/2*b<<endl;
   
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