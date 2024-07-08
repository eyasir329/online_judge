#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int a,b,c; cin>>a>>b>>c;
    string a1="1",b1="1";
    for(int i=0;i<a-1;i++){
        a1+='0';
    }
    for(int i=0;i<b-1;i++){
        b1+='0';
    }

    if(c==1){
        a1[a1.size()-1]='1';
    }else{
        int temp = min(a,b);
        if(c!=temp){
            if(a>b){
                b1[b1.size()-c]='1';
            }else{
                a1[a1.size()-c]='1';
            }
        }
    }
    // int x= stoi(a1),y=stoi(b1);
    // cout<<gcd(x,y)<<" "<<c<<endl;
    cout<<a1<<" "<<b1<<endl;
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
    cin >> t;
    while (t--) solve();
    return 0;
}