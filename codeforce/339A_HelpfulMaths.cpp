#include <bits/stdc++.h>

using namespace std;

void takeIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    takeIO();
    string s;
    cin>>s;
    vector<int> v;
    for(auto i=0;i<s.size();i++){
    	if(s[i]!='+'){
    		v[i]=(int)s[i];
    	}
    }

    sort(v.begin(), v.end());

    for(auto i=0;i<v.size();i++){
    	cout<<v[i]<<"+";
    }
    cout<<endl;

    return 0;
}