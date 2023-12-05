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
    int k = sz(s);
    vc ch;
    for(int i=0;i<sz(s);i++){
        ch.pb(s[i]);
        if(s[i]=='b'){
            ch.pop_back();
            int l=sz(ch);
            while(l--){
                if(ch[l]>='a'&& ch[l]<='z'){
                    if(l>=0){
                        ch.erase(ch.begin()+l);
                        break;
                    }
                }
            }
        }
    }
    vc chh;
    int x = sz(ch);
    for(int i=0;i<x;i++){
        chh.pb(ch[i]);
        if(ch[i]=='B'){
            chh.pop_back();
            int l=sz(chh);
            while(l--){
                if(chh[l]>='A'&& chh[l]<='Z'){
                    if(l>=0){
                        chh.erase(chh.begin()+l);
                        break;
                    }
                }
            }
        }
    }
    for(auto x:chh){
        cout<<x;
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