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

void solve()
{
    string s;
    cin>>s;
    vi m,n;
    for(int i=0;i<sz(s);i++){
        if((s[i]>='a'&& s[i]<='z') && s[i]!='b'){
            m.pb(i);
        }

        if(s[i]=='b' && sz(m)>=1){
            m.pop_back();
        }
    }

    for(int i=0;i<sz(s);i++){
        if(s[i]>='A'&& s[i]<='Z' && s[i]!='B'){
            n.pb(i);
        }

        if(s[i]=='B' && sz(n)>=1){
            n.pop_back();
        }
    }

    m.insert(m.end(),n.begin(),n.end());
    sort(all(m));
    for(auto i:m){
        cout<<s[i];
    }
    cout<<endl;
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