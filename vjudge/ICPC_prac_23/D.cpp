#include<iostream>

using namespace std;

int main(){

    int n{0},m{0},t{0};
    cin>>n>>m;
    if(m>=n &&n>=1){
        t=n+(3*(n-1));
    }else if(n>m){
        t=m+(3*(m-1));
    }else{
        t=0;
    }

    cout<<t<<endl;
    return 0;
}