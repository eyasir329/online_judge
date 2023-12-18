#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define F first
#define S second
#define pb push_back
#define pp pop_back
#define vi vector <int>
#define vii vector <pair<int,int>>
#define si set <int>
#define sii set <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define tos(x) to_string(x);
#define sin(x) static_cast<int>(x)-48;
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
    string s,t;
    cin>>s;
    int ans=-1;
    queue<int>st;
    if(sz(s)==1){
        ans=1;
    }else if(sz(s)==2){
        if(s[0]!=s[1]){
            ans = 0;
        }else{
            ans = 2;
        }
    }else{
        st.push(s[0]);
        for(int i=1;i<sz(s);i++){
            if((s[i]=='0' and s[i-1]=='1')||(s[i]=='1' and s[i-1]=='0')){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }

    if(ans==-1){
        ans = 0;
        while(!st.empty()){
            ans++;
            // cout<<st.front()<<" ";
            st.pop();
        }
    }

    cout<<ans<<endl;

}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    ll t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" Run Time "<<e-s<<endl;
        i++;
    }
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/