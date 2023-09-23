#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t{0},r{0},t1{0};
    vector<int> num{0};
    cin>>t;
    if(t<10 &&t!=0){
        cout<<"Yes"<<endl;
    }else{
        while(t!=0){
            r=t%10;
            //t3=t3*10+r;
            num.push_back(r);
            t/=10;
        }
        size_t i{0};
        reverse(num.begin(),num.end());
        for(i=0;i<num.size()-1;i++){
            if(num[i]>num[i+1]){
                t1++;
                if(num[i]==num[num.size()-2]){
                    cout<<"Yes"<<endl;
                }
            }else if(num[i]==num[i+1] && t1==num.size()-2){
                if(num[num.size()-2]==num[num.size()-1]){
                    cout<<"Yes"<<endl;
                }
            }else{
                cout<<"No"<<endl;
                break;
            }
        }
    }

    return 0;
}