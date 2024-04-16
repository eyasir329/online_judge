#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ocnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            ocnt++;
        }
    }
    if(ocnt==2){
        if(s.find("11")!=string::npos){
            no;
            return;
        }
    }
    if(n<3 and ocnt==0){
        yes;
        return;
    }
    if(n>2 and !(ocnt&1)){
        yes;
    }else{
        no;
    }
}

int32_t main() {
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