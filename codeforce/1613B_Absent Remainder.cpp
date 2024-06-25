#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    std::vector<int> v(n);
    int mn = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    mn = *min_element(v.begin(),v.end());
    int x = n / 2;
    for(int i=0;i<n;i++){
        if(v[i]!=mn and x>0){
            cout<<v[i]<<" "<<mn<<endl;
            x--;
        }
        if(x==0){
            break;
        }
    }
    
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