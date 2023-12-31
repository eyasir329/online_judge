#include <bits/stdc++.h>

using namespace std;
#define ll long long int
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
	char arr[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	string ch = "DRAW";
	if(arr[0][0]==arr[1][0] and arr[1][0]==arr[2][0] and arr[0][0]!='.'){
		ch=arr[0][0];
		
	}
	if(arr[0][1]==arr[1][1] and arr[1][1]==arr[2][1] and arr[0][1]!='.'){
		ch=arr[0][1];
		
	}
	if(arr[0][2]==arr[1][2] and arr[1][2]==arr[2][2] and arr[0][2]!='.'){
		ch=arr[0][2];
		
	}
	if(arr[0][0]==arr[0][1] and arr[0][1]==arr[0][2] and arr[0][0]!='.'){
		ch=arr[0][0];
	}
	if(arr[1][0]==arr[1][1] and arr[1][1]==arr[1][2] and arr[1][0]!='.'){
		ch=arr[1][0];
	}
	if(arr[2][0]==arr[2][1] and arr[2][1]==arr[2][2] and arr[2][0]!='.'){
		ch=arr[2][0];
	}
	if(arr[0][0]==arr[1][1] and arr[1][1]==arr[2][2] and arr[0][0]!='.'){
		ch=arr[0][0];
	}
	if(arr[2][0]==arr[1][1] and arr[1][1]==arr[0][2] and arr[2][0]!='.'){
		ch=arr[2][0];
	}
	
	if(ch!="DRAW"){
		cout<<ch<<endl;
	}else{
		cout<<"DRAW"<<endl;
	}
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
        cerr<<"Case # "<<i<<" Run Time "<<e-s<<endl;
        i++;
    }
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/