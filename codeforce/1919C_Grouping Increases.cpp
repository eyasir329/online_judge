#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define vi vector <int>
#define vii vector <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define F0R(i,a,b) for(int i=a; i<(b); i++)
#define FOR(i,a) for(int i=0; i<(a); i++)
/* --------------------------------------------
---must be initialise in another variable ----*/
#define is(num) to_string(num);
#define ci(ch) static_cast<int>(ch)-48;//A-65 0-48 a-97
#define si(str) stoi(str);
/*-------------------------------------------*/
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define SUM(a)  accumulate(all(a), 0LL)
#define SRT(a)  is_sorted(all(a))//range1,range2
#define IN(a,pos,num) a.insert(pos,num)
#define DE(a,pos) a.erase(a.begin()+pos)
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void solve()
{
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,n) cin>>arr[i];

    vi s,t;
    int k = 1;
    s.pb(arr[0]);
    bool flag = true;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[0]){
            t.pb(arr[i]);
            flag = false;
            break;
        }
    }

    if(flag){
        for(int i=1;i<n;i++){
            k++;
            if(arr[i]!=arr[0]){
                t.pb(arr[i]);
                break;
            }else{
                s.pb(arr[i]);
            } 
        }
    }

    for(int i=k;i<n;i++){
        if(arr[i]<=s.back() and arr[i]<=t.back()){
            if(s.back()>t.back()){
                if(arr[i]!=t.back()){
                    t.pb(arr[i]);
                }
            }else{
                s.pb(arr[i]);
            }
        }
        else if(arr[i]<=s.back()){
            s.pb(arr[i]);
        }
        else if(arr[i]<=t.back()){
            if(arr[i]!=t.back()){
                t.pb(arr[i]);
            }
        }else{
            // greater than both of s and t
            if(s.back()>t.back()){
                if(arr[i]!=t.back()){
                    t.pb(arr[i]);
                }
            }else{
                s.pb(arr[i]);
            }
        }
    }
    // print(s);
    // print(t);
    int temp1=0,temp2=0;

    for(int i=0;i<sz(s)-1;i++){
        if(s[i]<s[i+1]){
            temp1++;
        }
    }
    for(int i=0;i<sz(t)-1;i++){
        if(t[i]<t[i+1]){
            temp2++;
        }
    }

    cout<<temp1+temp2<<endl;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1,i=1;
    cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" RT :"<<e-s<<endl;
        i++;
    }
    cerr<<"TRT :"<<((double)(clock() - z) / CLOCKS_PER_SEC)<<endl;
    return 0;
}