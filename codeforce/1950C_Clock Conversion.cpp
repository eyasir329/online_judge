#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
    string s;
    cin >> s;
    string hr = s.substr(0, 2);

    int h = stoi(hr);

    if (h < 12) {
        if(h==0){
            cout << 12 << s.substr(2, 5) << " AM" << endl;
            return;
        }
        cout << s << " AM" << endl;
    } else {
        int h1 = h - 12;
        if (h1 == 0) h1 = 12;
        if (h1 < 10) {
            string h2 = "0";
            h2 += to_string(h1);
            cout << h2 << s.substr(2, 5) << " PM" << endl;
            return;
        }
        cout << h1 << s.substr(2, 5) << " PM" << endl;
    }
}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}