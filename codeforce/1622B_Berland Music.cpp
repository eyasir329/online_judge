#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    std::vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    string s; cin >> s;
    std::vector<pair<int, int>> zp, op;
    int zero = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            zero++;
            zp.push_back({p[i], i});
        } else {
            op.push_back({p[i], i});
        }
    }

    if (zero == 0) {
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    } else {
        sort(op.begin(), op.end(), [](auto & left, auto & right) {
            return left.first < right.first;
        });
        sort(zp.begin(), zp.end(), [](auto & left, auto & right) {
            return left.first < right.first;
        });
        int x = 1;
        for (int i = 0; i < zp.size(); i++) {
            zp[i].first = x;
            x++;
        }
        for (int i = 0; i < op.size(); i++) {
            op[i].first = x;
            x++;
        }
        sort(op.begin(), op.end(), [](auto & left, auto & right) {
            return left.second < right.second;
        });
        sort(zp.begin(), zp.end(), [](auto & left, auto & right) {
            return left.second < right.second;
        });
        int j = 0, k = 0;
        for (int i = 0; i < n; i++) {
            if (op.size()>j and op[j].second == i) {
                cout << op[j].first << " ";
                j++;
            } else {
                if(zp.size()>k){
                    cout << zp[k].first << " ";
                    k++;
                }
            }
        }
        cout << endl;
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