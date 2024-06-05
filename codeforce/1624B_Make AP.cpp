#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c; cin >> a >> b >> c;
    long long new_a,new_b,new_c;
    new_a = b - (c-b);
    if(new_a>=a and new_a!=0 and new_a%a==0){
        cout<<"YES"<<endl;
        return;
    }
    new_b = a+(c-a)/2;
    if(new_b>=b and new_b!=0 and new_b%b==0 and (c-a)%2==0){
        cout<<"YES"<<endl;
        return;
    }
    new_c = b+(b-a);
    if(new_c>=c and new_c!=0 and new_c%c==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
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