#include <iostream>

using namespace std;

void takeIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    takeIO();

    int r{0},c{0};
    int n=5;
    int arr[6][6];
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>arr[i][j];
    	}
    }

    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                r=i;
                c=j;
            }
    	}
    }

    int t = abs(r-2)+abs(c-2);
    cout<<t;
    
    return 0;
}