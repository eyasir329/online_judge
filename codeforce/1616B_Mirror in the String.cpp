#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s,k,k1; cin>>s;
    k+=(s[0]);
    for(int i=1;i<n;i++){
        if(s[i]<=k.back()){
            k+=s[i];
        }else{
            break;
        }
    }
    k1 = k;
    reverse(k1.begin(),k1.end());
    k+=k1;
    if(k[0]==k[1]){
        cout<<k[0]<<k[0]<<endl;
        return;
    }
    cout<<k<<endl;
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