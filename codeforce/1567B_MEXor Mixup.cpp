#include <bits/stdc++.h>
using namespace std;

int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    return 0;
}

void solve() {
    int a, b; cin >> a >> b;
    int prexor = computeXOR(a - 1);
    if (prexor == b) {
        cout << a << endl;
    } else if ((prexor^b) == a) {
        cout << a + 2 << endl;
    } else {
        cout << a + 1 << endl;
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