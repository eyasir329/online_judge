#include <bits/stdc++.h>

using namespace std;
#define int long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0,b=0;
	int aa=0,bb=0,t1=0,t2=0;
	int i=0;
	while(i<s.size()){
		if(s.size()<2){
			if(s[i]=='A'){
				t1++;
			}else{
				t2++;
			}
		}else{
			if(a<=3||b<=3){
			if(s[i]=='A'){
				a++;
				aa++;
			}else{
				b++;
				bb++;
			}

			if(b==3){
				t2++;
				a=0;
				b=0;
			}else{
				if(a==3||i==s.size()-1){
				// if(b>=3){
				// 	if(b%3==0 && b>3){
				// 		t2=t2+b/3;
				// 	}else{
				// 		t2++;
				// 	}
					
				// }else{
				// 	t1++;
				// }
				t1++;
				a=0;
				b=0;
			}
			}
			
		}
		}
		
		i++;
		
	}

	if(t1>t2){
		cout<<'A'<<endl;
	}else{
		if(t1==t2){
			if(aa>bb){
				cout<<'A'<<endl;
			}else{
				cout<<'B'<<endl;
			}
		}else{
			cout<<'B'<<endl;
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

    int t = 1;
    cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/