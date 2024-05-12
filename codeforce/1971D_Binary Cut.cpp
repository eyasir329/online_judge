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
    string s1 = s;
    sort(all(s1));
    if(s==s1){
    	cout<<1<<endl;
    	return;
    }
    int aa=0,ab=0,bb=0;
    std::vector<size_t> v;
    size_t pos = s.find("10");
    while(pos!=string::npos){
    	v.pb(pos);
    	pos = s.find("10",pos+1);
    }
    if(sz(v)==1 and s[0]=='1'){
    	cout<<2<<endl;
    	return;
    }
    bool zero = false, one = false;
    int x = 0;
    for(int i=0;i<sz(s);i++){
    	if(s[i]=='0'){
    		zero = true;
    	}
    	if(s[i]=='1'){
    		one = true;
    	}
    	if(x<sz(v) and i==v[x]){
    		x++;
    		if(zero and one){
    			ab++;
    		}else if(zero){
    			aa++;
    		}else{
    			bb++;
    		}
    		zero = false;
    		one = false;
    	}
    	if(i==sz(s)-1 and i>v[sz(v)-1]){
    		if(zero and one){
    			ab++;
    		}else if(zero){
    			aa++;
    		}else{
    			bb++;
    		}
    	}
    }
    // cout<<aa<<" "<<ab<<" "<<bb<<endl;
    if(ab>1){
    	cout<<aa+bb+((ab-1)*2)+1<<endl;	
    }else{
    	cout<<aa+bb+ab<<endl;
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