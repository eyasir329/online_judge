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
    int a,b;
    int xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;

    int count = 0;

    set<pair<int,int>>k,q;

    // king
    k.insert({xk+a,yk+b});
    k.insert({xk+a,yk-b});
    k.insert({xk-a,yk+b});
    k.insert({xk-a,yk-b});

    k.insert({xk+b,yk+a});
    k.insert({xk+b,yk-a});
    k.insert({xk-b,yk+a});
    k.insert({xk-b,yk-a});

    // queen
    q.insert({xq+a,yq+b});
    q.insert({xq+a,yq-b});
    q.insert({xq-a,yq+b});
    q.insert({xq-a,yq-b});

    q.insert({xq+b,yq+a});
    q.insert({xq+b,yq-a});
    q.insert({xq-b,yq+a});
    q.insert({xq-b,yq-a});

    for(auto x:k){
        if(q.find(x)!=q.end()){
            count++;
        }
    }
    cout<<count<<endl;
    
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