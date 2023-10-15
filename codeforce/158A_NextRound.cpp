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
	int n,k;
	cin>>n>>k;
	int t=0,a;
	vector<int>arr;

	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}
	int temp = arr[k-1];
	for(auto j=0;j<arr.size();j++){
		if(arr[j]>=temp && arr[j]!=0){
			t++;
		}
	}
	cout<<t<<endl;
	return 0;
}