#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int maxn = v[0],minx = INT_MAX;
    int cnt = 1;
    for(int i=1;i<n;i++){
        cnt++;
        maxn = max(maxn,v[i]);
        minx = min(minx,abs(v[i]-v[i-1]));
        if(v[i]>0){
            break;
        }
    }
    if(minx<maxn) cnt--;
    cout<<cnt<<endl;
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