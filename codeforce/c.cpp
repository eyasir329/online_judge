#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void largestSubarraySum(vi arr,int n){
    //kadane's algorithms bigO(n)
    int cs = 0;
    int largest = 0;

    for(int i=0;i<n;i++){
    	if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i-1]%2==0&&arr[i]%2!=0)){
    		cs = cs + arr[i];
        	if(cs<0){
            	cs = 0;
        	}
        	largest = max(largest,cs);
    	}
        
    }
    cout<<"Largest Sub Array Sum :"<<largest<<endl; 
}

void solve()
{
	int n,a,b;
	cin>>n;
	vi arr;
	for(int i=0;i<n;i++){
		cin>>a;
		arr.pb(a);
	}
	//sort(all(arr));
	//print(arr);
	largestSubarraySum(arr,n);
	//printSubarraySum(arr,n);
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    ll t = 1;
    cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/