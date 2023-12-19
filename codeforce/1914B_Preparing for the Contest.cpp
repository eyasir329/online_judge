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
    vi v(n,0);
    for(int i=0;i<n;i++){
         v[i]=i+1;
    }
    if(k==n){
        print(v);
    }else if(k==0){
        reverse(all(v));
        print(v);
    }else{
        int m=n-k+1;
        vi p(k,0),q(n,0);
        int l=0;
        while(k--){
            p[l]=m;
            m++;
            l++;
        }
        sort(all(p));

        cout<<1<<" ";
        for(int i=0;i<sz(p);i++){
            cout<<p[i]<<" ";
        }
        int y = p[0];
        while(y--){
            if(y>1){
                cout<<y<<" ";
            }else{
                break;
            }
            
        }
        
        cout<<endl;
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