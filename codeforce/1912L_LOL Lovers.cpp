#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define pb push_back
#define pp pop_back
#define vi vector <int>
#define vii vector <pair<int,int>>
#define vc vector <char>
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
/* --------------------------------------------
---must be initialise in another variable ----*/
#define is(num) to_string(num);
#define ci(ch) static_cast<int>(ch)-48;//A-65 int('0')
#define si(str) stoi(str);
/*-------------------------------------------*/
#define MIN(a) *min_element(all(a))
#define MAX(a) *max_element(all(a))
#define srt(a) is_sorted(all(a))//range1,range2
#define in(a,pos,num) a.insert(pos,num)
#define er(a,pos) a.erase(a.begin()+pos)
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;

	int l1=0,o1=0,o=0,l=0;
	if(s[sz(s)-1]=='L'){
		l1++;
	}else{
		o1++;
	}

	for(int i=0;i<n-1;i++){
		if(s[i]=='L'){
			l++;
		}else{
			o++;
		}
	}

	if(l1==l or o1==o){
		bool flag = false;
		bool f1 = true;
		bool f2 = false;

		int l2=0,ll=0,o2=0,oo=0;

		if(s[0]=='L'){
			l2=1;
			ll=l-1;
			if(s[sz(s)-1]=='L'){
				ll++;
			}
		}else{
			o2=1;
			oo=o-1;
			if(s[sz(s)-1]=='O'){
				oo++;
			}
		}

		if(l2==ll and o2==oo){
			f2=true;
			flag=false;
		}else{
			flag = true;		
		}

		if(flag){
			cout<<1<<endl;
		}else{
			int t;
			if(f1){
				int x = n-1;
				int t1=1;
				while(x--){
					if(s[x]==s[n-1]){
						t1++;
					}else{
						break;
					}
				}
				t=t1;
			}

			if(f2){
				int x = 1;
				int t1=1;
				while(x<n){
					if(s[x]==s[0]){
						t1++;
					}else{
						break;
					}
					x++;
				}
				t=t1;
			}

			if((f1 or f2) and t>1){
				cout<<t<<endl;
			}else{
				cout<<-1<<endl;
			}
			
		}
		
	}else{
		cout<<l+o<<endl;
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
    // cin >> t;
    while (t--){
        auto s = ((double)(clock() - z) / CLOCKS_PER_SEC);
        solve();
        auto e = ((double)(clock() - z) / CLOCKS_PER_SEC);
        cerr<<"Case # "<<i<<" Run Time "<<e-s<<endl;
        i++;
    }
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/