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

void sort1(vector<string>vs){
	sort(all(vs));
	for(int i=0;i<sz(vs);i++){
		cout<<vs[i]<<endl;
	}
	cout<<endl;
	for(int i=sz(vs)-1;i>=0;i--){
		cout<<vs[i]<<endl;
	}
	cout<<endl;
}
void sort2(vector<string>vs){
	vector<pair<int,string>>vis;

	for(int i=0;i<sz(vs);i++){
		vis.pb({sz(vs[i]),vs[i]});
	}
	sort(all(vis));
	for(int i=0;i<sz(vis);i++){
		cout<<vis[i].ss<<endl;
	}
	cout<<endl;
}
void sort3(vector<string>vs){
	vector<pair<int,string>>vis;
	for(int i=0;i<sz(vs);i++){
		vis.pb({sz(vs[i]),vs[i]});
	}
	sort(all(vis));

	vector<pair<string,int>>vv1;
	for(int i=0;i<sz(vs);i++){
		vv1.pb({vis[i].ss,vis[i].ff});
	}
	sort(all(vv1));

	vector<pair<int,string>>vis1;
	for(int i=0;i<sz(vs);i++){
		vis1.pb({vv1[i].ss,vv1[i].ff});
	}
	sort(all(vis1));
	for(int i=0;i<sz(vs);i++){
		cout<<vis1[i].ss<<endl;
	}
	cout<<endl;
}

void solve()
{
	int n;
	cin>>n;
	vector<string>vs;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		vs.pb(s);
	}
	sort1(vs);
	sort2(vs);
	sort3(vs);
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1,i=1;
    // cin >> t;
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