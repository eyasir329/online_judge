#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n == 1) {
        cout << 1 << endl;
    } else if (n == 2) {
        cout << -1 << endl;
    } else {
        vector<vector<int>> v( n , vector<int> (n));
        int cnt = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[i][j] = cnt;
                cnt+=2;
                if(cnt>n*n){
                    cnt=2; 
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j] << " ";
            }
            cout << endl;
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