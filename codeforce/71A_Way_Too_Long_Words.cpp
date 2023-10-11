#include <iostream>
#include<string>

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
    while(t--){

    	string ch;
    	cin>>ch;
    	int sl = ch.size();
    	if(sl>10){
    		cout<<ch.at(0)<<sl-2<<ch.back()<<endl;
    	}else{
    		cout<<ch<<endl;
    	}

    }
    
    return 0;
}