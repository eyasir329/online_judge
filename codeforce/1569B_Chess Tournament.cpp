#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    std::vector<vector<char>> v(n, vector<char>(n));
    std::vector<int> b(n);
    int tcnt = count(s.begin(), s.end(), '2');
    if (tcnt and tcnt <= 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    v[i][j] = 'X';
                } else {
                    if (s[i] == '1') {
                        v[i][j] = '=';
                        v[j][i] = '=';
                    } else {
                        if (v[i][j] != '=') {
                            if (b[i]&1) {
                                v[i][j] = '+';
                                v[j][i] = '-';
                                b[j]++;
                                b[i]++;
                            } else {
                                v[i][j] = '-';
                                v[j][i] = '+';
                                b[j]++;
                                b[i]++;
                            }

                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j];
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