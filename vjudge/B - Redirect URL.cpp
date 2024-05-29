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
    if(s[4]!='s'){
    	string s1(s.begin(),s.begin()+4);
    	s1+='s';
    	string s2(s.begin()+4,s.end());
    	s1+=s2;
    	cout<<s1<<endl;
    }else{
    	cout<<s<<endl;
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
    int test = 1;
    while (t--) {
    	cout<<"Case "<<test++<<": ";
    	solve();
    }
    return 0;
}