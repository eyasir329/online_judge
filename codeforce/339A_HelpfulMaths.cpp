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

    string s;
    cin>>s;
    vector<int> arr;
   
    for(char c:s){
        if(c>='0'&&c<='9'){
            int a = static_cast<int>(c)-48;
            arr.push_back(a);
        }
    }

    sort(arr.begin(), arr.end());

    for(int j=0;j<arr.size();j++){
        if(j==arr.size()-1){
            cout<<arr[j];
        }else{
            cout<<arr[j]<<"+";
        }
    }
    cout<<endl;


    return 0;
}