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

void solve() {
    int n; cin >> n;
    if (n < 2) {
        cout << 1 << endl;
        cout << 1 << endl;
    } else {
        int y = n, two = 0, sum = 2, cnt = 1;
        if (n & 1) n++;
        std::vector<int> v;
        v.pb(1);
        for (int i = 0; i <= 32; i++) {
            if (cnt + v.back() >= n) {
                break;
            }
            cnt *= 2;
            two++;
            int temp = cnt + v.back();
            v.pb(temp);
            if (cnt > n) {
                break;
            }
            sum += cnt;
        }
        int need = abs(sum - n);
        int sn = 0,sd =0;
        if(need!=0 and log2(need)!=(int)(log2(need))){
            sd = 1;
        }
        if (sum > n) {
            sn = 0;
        } else {
            sn = 1;
        }
        cout << two + 2 << " " << sum << " " << cnt << " "
         << v.back() << " " << need << " " << sn <<" "<<n<< endl;
        print(v);
        int t2 = 1;
        cout<<two+2<<endl;
        for (int i = 0; i <= two; i++) {
            if (i == 0 and y & 1) {
                cout << -1 << " ";
                continue;
            }
            if(i>0){
                t2 *= 2;
            }
            if(sd and need>0 and i>0){
                need-=t2;
                // cout<<need<<" ";
                if (sn) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
                continue;
            }
            // cout<<t2<<" "<<need<<" n";
            if (t2 == need) {
                if (sn) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
                continue;
            }
            cout << 0 << " ";
        }
        cout << 1 << endl;
    }
}

int32_t main() {
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