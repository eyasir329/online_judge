#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    deque<char>d;
    for (auto x : s) {
        d.push_back(x);
        if (x == ')') {
            if (d.size() > 1) {
                d.pop_back();
                bool fl = false;
                for (int i = 0; i < d.size(); i++) {
                    if (d.at(i) == '(') {
                        d.erase(d.begin() + i);
                        fl = true;
                        break;
                    }
                }
                if (fl == false) {
                    for (int i = 0; i < d.size(); i++) {
                        if (d.at(i) == '?') {
                            d.erase(d.begin() + i);
                            fl = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < d.size(); i++) {
        if (d.at(i) == '(') {
            for (int j = i + 1; j < d.size(); j++) {
                if (d.at(j) == '?') {
                    d.erase(d.begin() + j);
                    d.erase(d.begin() + i);
                    break;
                }
            }
        }
    }
    // for (int i = 0; i < d.size(); i++) {
    //     cout << d.at(i) << " ";
    // }
    // cout << endl;

    if (d.size() % 2) {
        cout << "NO" << endl;
    } else {
        for (int i = 0; i < d.size(); i++) {
            if (d.at(i) != '?') {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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