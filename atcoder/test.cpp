#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    cout<<abs(a-b)<<" "<<abs(b-c)<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}