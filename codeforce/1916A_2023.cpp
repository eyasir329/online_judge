#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector <int>
#define vii vector <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
/* --------------------------------------------
---must be initialise in another variable ----*/
#define is(num) to_string(num);
#define ci(ch) static_cast<int>(ch)-48;//A-65 int('0')
#define si(str) stoi(str);
/*-------------------------------------------*/
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define srt(a) is_sorted(all(a))//range1,range2
#define in(a,pos,num) a.insert(pos,num)
#define er(a,pos) a.erase(a.begin()+pos)
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    vi arr(n,0);
    float temp=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        temp*=arr[i];
    }
    // cout<<temp<<endl;
    float x = 2023.0/temp;
    // cout<<x<<endl;
    if(x==(int)x){
        cout<<"YES"<<endl;
        cout<<(int)x;
        for(int i=0;i<k-1;i++){
            cout<<" "<<1;
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
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