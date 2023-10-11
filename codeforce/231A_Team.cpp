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
    int t{0},i{0};
    cin>>t;
    while(t--){

    	int a,b,c;
    	cin>>a>>b>>c;
    	if((a+b+c)>=2){
    		i++;
    	}

    }
    cout<<i<<endl;
    return 0;
}