#include <bits/stdc++.h>

using namespace std;
#define ll long long int
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

int prec(char c){
    if(c=='^'){
        return 3;
    }else if(c=='/' || c=='*'){
        return 2;
    }else if(c=='+' || c=='-'){
        return 1;
    }else{
        return -1;
    }
}

char associativity(char c){
    if(c=='^'){
        return 'R';
    }
    return 'L';
}

void solve()
{
	string s;
	cin>>s;
    stack<char>st;
    vc ch;
    for(int i=0;i<sz(s);i++){
        char c = s[i];
        if((c>='a' and c<='z')||(c>='A' and c<='Z')||(c>='0' and c<='9')){
            ch.pb(c);
        }
        else if(c=='('){
            st.push('(');
        }
        else if(c==')'){
            while(st.top()!='('){
                ch.pb(st.top());
                st.pop();
            }
            st.pop();
        }else{
            while(!st.empty() and prec(s[i])<prec(st.top()) || !st.empty() and prec(s[i])==prec(st.top()) and associativity(s[i])=='L'){
                ch.pb(st.top());
                st.pop();
            }
            st.push(c);
        }
    } 
    while(!st.empty()){
        ch.pb(st.top());
        st.pop();
    } 
    for(int i=0;i<sz(ch);i++){
        cout<<ch[i];
    }
    cout<<endl;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    ll t = 1,i=1;
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