#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        bool fl = false;
        for (int i = s.size() - 2; i >= 0; i--) {
            if (s[i] - '0' + s[i + 1] - '0' > 9) {
                cout << s.substr(0, i) << s[i] - '0' + s[i + 1] - '0' << s.substr(i + 2, s.size() - 1) << endl;
                fl = true;
                break;
            }
        }
        if(!fl)cout<<(s[0]-'0'+s[1]-'0')<<s.substr(2,s.size())<<endl;
    }
    return 0;
}