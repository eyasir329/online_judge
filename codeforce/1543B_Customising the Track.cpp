#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin>>n;
    std::vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long cnt = 0;
    for(long long i=0;i<n;i++){
        cnt+=(v[i]);
    }
    long long diff = cnt/n;
    long long extra = cnt-n*diff;
    long long so = n-extra;
    cout<<so*extra<<endl;
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