#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b; cin >> a >> b;
    long long x, y, z;
    bool fl = false;

    if(!(a==b and b==1)){
        fl = true;
        if(b==1){
            x = a*b*2*1ll;
        }else{
            x = a*b*1ll;
        }
        y = x+a;
        z = y+x;
        if(z%(a*b)==0){
            fl = false;
        }
    }

    if (fl) {
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}