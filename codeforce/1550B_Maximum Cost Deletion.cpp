#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    std::vector<char> v;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            v.push_back(s[i]);
        }
    }
    if(s[0]!=s[s.size()-1]){
        v.push_back(s[0]);
    }
    int x = size(v);
    cout<<n*a+max(n*b,(x/2+1)*b)<<endl;
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