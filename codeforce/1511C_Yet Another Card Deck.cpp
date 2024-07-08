#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,q; cin>>n>>q;
    std::deque<int> a;
    std::vector<int> query(q);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<q;i++){
        cin>>query[i];
    }
    for(int i=0;i<q;i++){
        int x = query[i];
        auto it = find(a.begin(),a.end(),x);
        if(it!=a.end()){
            cout<<it-a.begin()+1<<" ";
            int color = a[it-a.begin()];
            a.erase(a.begin()+(it-a.begin()));
            a.push_front(color);
        }
    }
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}