#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    vector<int>even,odd,extra;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }
    for(int i=0;i<(int)even.size();i++){
        extra.push_back(even[i]);
    }
    for(int i=0;i<(int)odd.size();i++){
        extra.push_back(odd[i]);
    }
    int cnt =0;
    for(int i=0;i<(int)extra.size();i++){
        for(int j=i+1;j<(int)extra.size();j++){
            if(gcd(extra[i],2*extra[j])>1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}