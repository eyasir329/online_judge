#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s,s1,s2; cin>>s;
    char clr1 = 'B',clr2='R';
    for(int i=0;i<n;i++){
    	if(s[i]=='?'){
    		s1.push_back(clr1);
    		s2.push_back(clr2);
    		if(clr1!=clr2){
    			swap(clr1,clr2);
    		}else{
    			if(clr1=='B'){
    				clr1=clr2='R';
    			}else{
    				clr1=clr2='B';
    			}
    		}
    	}else if(s[i]=='B'){
    		s1.push_back('B');
    		s2.push_back('B');
    		clr1=clr2='R';
    	}else{
    		s1.push_back('R');
    		s2.push_back('R');
    		clr1=clr2='B';
    	}
    }
    int cnt1 =0,cnt2 =0;
    for(int i=0;i<n-1;i++){
    	if(s1[i]==s1[i+1]){
    		cnt1++;
    	}
    	if(s2[i]==s2[i+1]){
    		cnt2++;
    	}
    }
    cout<<((cnt1>=cnt2)?s2:s1)<<endl;
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