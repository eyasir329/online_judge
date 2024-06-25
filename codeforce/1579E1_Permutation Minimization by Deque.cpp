#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    std::vector<int> v(n);
    bool fl = true;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    deque<int>dq;
    dq.push_front(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]<dq.front()){
            dq.push_front(v[i]);
        }else{
            dq.push_back(v[i]);
        }
    }
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
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