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

void decToBinary(int n,string &s)
{
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s+='1';
        else
            s+='0';
    }
}

int power(int a,int b){
    if(b==0)
        return 1;
    int half_power = pow(a,b/2);
    if(b%2==0)
        return half_power*half_power;
    else
        return half_power*half_power*a;
}

void solve() {
    int x,y; cin>>x>>y;
    string s1,s2;
    decToBinary(x,s1);
    decToBinary(y,s2);
    int cm = 0;
    int i,j;
    for(i=sz(s1)-1,j=sz(s2)-1;i>=0,j>=0;i--,j--){
        if(s1[i]==s2[j]){
            cm++;
        }else{
            break;
        }
    }
    // cout<<cm<<" ";
    cout<<power(2,cm)<<endl;
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