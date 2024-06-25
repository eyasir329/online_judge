#include <bits/stdc++.h>
using namespace std;

int lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}

void solve() {
    string s,t;cin>>s>>t;
    int lc = lcm(s.size(),t.size());
    string s1,t1;
    int x = lc;
    while(x>0){
        s1+=s;
        x-=s.size();
    }
    x = lc;
    while(x>0){
        t1+=t;
        x-=t.size();
    }
    if(s1==t1){
        cout<<s1<<endl;
    }else{
        cout<<-1<<endl;
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