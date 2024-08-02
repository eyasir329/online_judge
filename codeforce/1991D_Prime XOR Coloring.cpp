#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<2<<endl;
        cout<<"1 2"<<endl;
        return;
    }if(n==3){
        cout<<2<<endl;
        cout<<"1 2 2"<<endl;
        return;
    }if(n==4){
        cout<<3<<endl;
        cout<<"1 2 2 3"<<endl;
        return;
    }if(n==5){
        cout<<3<<endl;
        cout<<"1 2 2 3 3"<<endl;
        return;
    }
    cout<<4<<endl;
    for(int i=1;i<=n;i++){
        cout<<(i%4)+1<<" ";
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
    cin >> t;
    while (t--) solve();
    return 0;
}