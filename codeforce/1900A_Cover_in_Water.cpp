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
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = false;
    for(int i=2;i<n;i++){
        if(s[i]=='.'&&s[i-1]=='.'&&s[i-2]=='.'){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"2"<<endl;
    }else{
        int k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                k++;
            }
        }
        cout<<k<<endl;
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