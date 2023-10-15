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
    int t{0},temp{0};
    cin>>t;
    string s{0};
    for(int i=0;i<t;i++){
    	cin>>s;
    	if(s=="X++"||s=="++X"){
    		temp++;
    	}else{
    		temp--;
    	}
    }
    cout<<temp<<endl;
    return 0;
}