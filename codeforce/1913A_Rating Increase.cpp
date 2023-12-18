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
    string s;
    cin>>s;
    string output1,output2;
    int a,b;

    for (int i = 0; i<sz(s); i++) 
    {
        if(i>0 and s[i]!='0'){
            break;
        }
        output1 += s[i];
    }
    
    if(sz(output1)<sz(s)){
        for (int i = sz(output1); i<sz(s); i++) 
        {
            output2 += s[i];
        }
        a=stoi(output1);
        b=stoi(output2);

        if(a<b){
            cout<<a<<" "<<b<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        cout<<-1<<endl;
    }
    

    
    
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