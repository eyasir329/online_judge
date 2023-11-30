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
    int n,k;
    cin>>n>>k;
    vi arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vi arr2 = arr;
    sort(all(arr2));
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr2[i]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }else{
        
            if(k>=2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
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