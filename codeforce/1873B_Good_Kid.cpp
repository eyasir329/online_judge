#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve()
{
   int n;
   cin>>n;
   vector<int> arr;
   for(int i=0;i<n;i++){
   	int a;
   	cin>>a;
   	arr.push_back(a);
   }

   sort(arr.begin(), arr.end());
   arr[0]=arr[0]+1;
   int product{1};
   for(int i=0;i<n;i++){
   	product*=arr[i];
   }
   	cout<<product<<endl;

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


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  ===============================================*/