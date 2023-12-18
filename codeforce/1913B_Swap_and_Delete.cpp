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
    string s, t;
    cin >> s;
    t = s;
    vi z, o;
    int ans = -1;
    bool m = false;

    vc to(sz(s),'0');

    for(int i=0;i<sz(s);i++){
        if(s[i]!=to[i]){
            m=true;
            break;
        }
    }

    if (sz(s) < 2)
    {
        ans = 1;
    }
    else if (sz(s) < 3)
    {
        if (s[0] != s[1])
        {
            ans = 0;
        }
        else
        {
            ans = 2;
        }
    }
    else
    {
        if (m)
        {

            for (int i = 0; i < sz(s); i++)
            {
                if (s[i] == '0')
                {
                    z.pb(i);
                }
                else
                {
                    o.pb(i);
                }
            }

            if (sz(z) <= sz(o))
            {
                for(int i=0;i<sz(z);i++){
                    swap(s[z[i]], s[o[i]]);
                }
            }
            else
            {
                for(int i=0;i<sz(o);i++){
                    swap(s[o[i]], s[z[i]]);
                }
            }


            int k = 0;
            for (int i = 0; i < sz(t); i++)
            {
                if (t[i] == s[i])
                {
                    break;
                }
                else
                {
                    k++;
                }
            }
            ans = sz(t) - k;
        }
        else
        {
            ans = sz(s);
        }
    }
    cout << ans << endl;
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