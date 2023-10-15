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
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    	int n,k;
    	cin>>n>>k;
    	string s;
    	cin>>s;
    	vector<int> v;
    	for(int j=0;j<n;j++){
    		if(s[j]=='B'){
    			v.push_back(j);
    		}
    	}

    	int temp{0};

    	for(int m=0;m<v.size();m++){
    		int a = v[m+1]-v[m];
    		if(a<=k){
    			temp++;
    		}else{
    			temp+=2;
    		}
    	}

    	cout<<temp<<endl;

    }

    return 0;
}