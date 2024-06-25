#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=i;
    }
    std::vector<int> xx;
    for(int i=0;i<v.size();i++){
        int x = v[i],minxr=INT_MAX,y=0,k=0;
        for(int j=i+1;j<v.size();j++){
            int temp = minxr;
            minxr = min(minxr,(x^v[j]));
            if(minxr!=temp){
                y = v[j];
                k=j;
            }
        }
        xx.push_back(x);
        xx.push_back(y);
        v.erase(v.begin()+i);
        v.erase(v.begin()+k);
    }
    for(int i=0;i<xx.size();i++){
        cout<<xx[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}