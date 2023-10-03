#include<bits/stdc++.h>

using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int t{0};
	cin>>t;
	for(int i{0};i<t;i++){
		int n{0},w{0},s{0},e{0},E{0},temp{0};
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>s>>e;
			if(j==0){
				w=s;
				E=e;
			}

			if(e>=E && j!=0){
				if(s>=w){
					temp=1;
				}
			}

			if(temp==1 && j==n-1){
				cout<<"-1"<<endl;
			}else{
				if(j==n-1){
					cout<<w<<endl;
				}
			}
		}		
	}

	cout<<endl;
	return 0;
}