#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

bool prime(int n) {
    bool f = true;
    if (n > 1) {
        for (int j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                f = false;
                break;
            }
        }
    }else{
        f=false;
    }
    if (f) {
        return true;
    } else {
        return false;
    }
}
int maximumPrimeDifference(vector<int>& nums) {
    int s = 0, e = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (prime(nums[i])) {
            s = i;
            break;
        }
    }
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (prime(nums[i])) {
            e = i;
            break;
        }
    }
    return abs(s - e);
}

void solve() {
    vector<int>v = {1, 7};
    cout << maximumPrimeDifference(v) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}