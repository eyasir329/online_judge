#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define vi vector <int>
#define vii vector <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define F0R(i,a,b) for(int i=a; i<(b); i++)
#define FOR(i,a) for(int i=0; i<(a); i++)
/* --------------------------------------------
---must be initialise in another variable ----*/
#define is(num) to_string(num);
#define ci(ch) static_cast<int>(ch)-48;//A-65 0-48 a-97
#define si(str) stoi(str);
/*-------------------------------------------*/
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define SUM(a)  accumulate(all(a), 0LL)
#define SRT(a)  is_sorted(all(a))//range1,range2
#define IN(a,pos,num) a.insert(pos,num)
#define DE(a,pos) a.erase(a.begin()+pos)
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve()
{
    int m, n, k;
    cin >> m >> n >> k;
    vi a(m), b(n);
    FOR(i, m) cin >> a[i];
    FOR(i, n) cin >> b[i];

    int x = k / 2;

    sort(all(a));
    sort(all(b));

    vi aa, bb,cc;
    int t1=-1,t2=-1;
    for (int i = 1; i <= k; i++) {
        auto t1 = binary_search(all(a), i);
        auto t2 = binary_search(all(b), i);

        if(t1!=0 and t2!=0){
            cc.pb(i);
        }

        else if (t1 != 0) {
            aa.pb(i);
        }

        else if (t2 != 0) {
            bb.pb(i);
        }
    }

    int k1 = sz(aa);
    int k2 = sz(bb);
    int k3 = sz(cc);

    if(k1<x){
        int t = x-k1;
        if(k3>=t){
            k3-=t;
        }else{
            no;
            return;
        }
    }

    if(k2<x){
        int t = x-k2;
        if(k3>=t){
            k3-=t;
        }else{
            no;
            return;
        }
    }
    yes;

}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1, i = 1;
    cin >> t;
    while (t--) {
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr << "Case # " << i << " RT :" << e - s << endl;
        i++;
    }
    cerr << "TRT :" << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}