#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const int MOD = 1e9 + 7;

int subOccur(string &s,string sub){
    int cnt = 0;
    size_t pos = s.find(sub);
    while (pos != string::npos) {
        cnt++;
        s[pos+2]='1';
        pos = s.find(sub, pos + 1);
    }
    return cnt;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    cnt +=subOccur(s,"map");
    cnt +=subOccur(s,"pie");
    cout << cnt << endl;
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