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
    string s,a;
    cin>>s>>a;
    int ans = 0,s1=0,a1=0;
    int flag =true;
    for(int i=0;i<n;i++){
        if((a[i]=='1' and s[i]=='1') or (a[i]=='0' and s[i]=='0') ){
            a[i]='0';
            s[i]='0';
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]!=s[i]){
            flag=false;
            break;
        }
    }


    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            s1++;
        }

        if(a[i]=='1'){
            a1++;
        }
    }

    if(a1>s1){
        int t =0 ;
        for(int i=0;i<n;i++){
            a1--;
            t++;
            if(a1==s1){
                break;
            }
        }
        cout<<t+s1<<endl;
    }else if(a1<s1){
        int t =0 ;
        for(int i=0;i<n;i++){
            s1--;
            t++;
            if(s1==a1){
                break;
            }
        }
        cout<<t+a1<<endl;
    }else{
        if(flag){
            cout<<0<<endl;
        }else{
            cout<<a1<<endl;
        }
        
    }
 
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