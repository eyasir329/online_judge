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
    int m,n;
    cin>>m>>n;
    int a = m*n;
    int t = a/2;
    cout<<t<<endl;
    return 0;
}