#include <bits/stdc++.h>
using namespace std;

// __builtin_popcount(n)
int numofOne(uint32_t n){
    int count = 0;
    while(n){
        count += n&1;
        n>>=1;
    }
    return count;
}

void solve() {
    int n; cin>>n;
    n--;
    while(true){
        cout<<n<<" ";
        if(numofOne(n)==1){
            break;
        }
        n--;
    }
    for(int i=0;i<n;i++){
        cout<<i<<" ";
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