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
    vector<int> nums={5,-3,5};
       	int n = nums.size();
        int current_sum = 0;
        int largest_sum = 0;
        int m = *max_element(nums.begin(), nums.end());
        if(m>=0){
        	for(int i=0;i<n;i++){
            	current_sum = current_sum+nums[i];
            	if(current_sum<0){
                	current_sum =0;
            	}
            	largest_sum = max(current_sum,largest_sum);
        	}
        }else{
        	largest_sum = m;
        }
        cout<<largest_sum<<endl;
 
    return 0;
}

