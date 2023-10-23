#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define vi vector <int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl

int largestSubarraySum(vi arr){
    //kadane's algorithms bigO(n)
    int n = sz(arr);
    int cs = 0;
    int largest = 0;

    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        largest = max(largest,cs);
    }
    return largest; 
}

void solve()
{
	int n,k,x;
	cin>>n>>k>>x;
	int a=0,t=0;
	vi arr;
	for(int i=0;i<n;i++){
		if(a<k){
			arr.pb(a);
			if(a<x){
				a++;
			}
			
		}else{
			int l=a;
			if(a>=k && x!=k){
				a=x;
			}else{
				a=l-1;
			}
			arr.pb(a);
		}
		
	}

	if(k>n || x+1<k){
		t=-1;
		
	}
	else{
		t=largestSubarraySum(arr);
	}
	cout<<t<<endl;
	//cout<<arr[sz(arr)-1]<<endl;
	//print(arr);
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