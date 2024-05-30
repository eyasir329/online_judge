#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

void solve() {
    string s; cin>>s;
    int cnt = 0;
    int one = 0;
    for(int i=0;i<4;i++){
    	if(s[i]=='1'){
    		one++;
    	}
    }
   	if(one == 1){
   		cout<<11<<endl;
   	}else if(one == 2){
   		if(s[0]=='1' and s[1]=='1'){
   			cout<<21<<endl;
   		}else if(s[2]=='1' and s[3]=='1'){
   			cout<<21<<endl;
   		}else{
   			cout<<11*11<<endl;
   		}
   	}else if(one == 3){
   		cout<<21*11<<endl;
   	}else if(one == 4){
   		cout<<441<<endl;
   	}else{
   		cout<<0<<endl;
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