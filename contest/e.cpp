#include <bits/stdc++.h>

using namespace std;

#define int long long int

void printSubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

void solve()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printSubarray(arr,n);

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
    for (int i=0;i<t;i++)
    {
    	//cout<<"Case "<<i+1<<": ";
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    //cout << endl;

    return 0;
}