#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    if(is_sorted(s.begin(),s.end())){
        cout<<0<<endl;
        return;
    }
    string t;
    t=s;
    sort(t.begin(),t.end());
    std::vector<int> ans;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            ans.push_back(i+1);
        }
    }
    cout<<1<<endl;
    cout<<ans.size()<<" ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
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