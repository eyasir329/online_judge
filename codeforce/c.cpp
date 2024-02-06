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

    vi aa, bb;
    for (int i = 1; i <= k; i++) {
        auto t = find(all(a), i);
        if (t != a.end()) {
            aa.pb(i);
        }

        auto tt = find(all(b), i);
        if (tt != b.end()) {
            bb.pb(i);
        }
    }

    cout<<k<<endl;
    sort(all(aa));
    sort(all(bb));
    print(aa);
    print(bb);


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