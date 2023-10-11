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
	int w{0};
	cin>>w;
	if(w%2!=0 || w<=2){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	
	return 0;
}

