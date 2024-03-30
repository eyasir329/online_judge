#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())


void solve()
{
    int n;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> n;
    if (n % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        int j = 0;
        for (int i = 0; i < n / 2; i++) {
            if (j >= sz(s)) {
                j = 0;
            }
            cout << s[j] << s[j];
            j++;

        }
        cout << endl;
    }
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" RT :"<<e-s<<endl;
        i++;
    }
    cerr<<"TRT :"<<((double)(clock() - z) / CLOCKS_PER_SEC)<<endl;
    return 0;
}