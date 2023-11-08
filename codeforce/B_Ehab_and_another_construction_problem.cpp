#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define vi vector <int>
#define vc vector <char>
#define pb push_back
#define all(a) a.begin(),a.end()
#define sz(a) ((int) a.size())
#define print(a) for(auto x:a) cout<<x<<" ";cout<<endl
#define endl '\n'

void solve()
{
	int xi;
	cin>>xi;
	vi arr;
    vector<pair<int,int>>vp;
	for(int i=1;i<=xi;i++){
		arr.pb(i);
	}
	//print(arr);
    int m=0,n=0;
    for (int i = 0; i < sz(arr); i++)
    {
        int x = arr[i];
        for (int j = i + 1; j < sz(arr); j++)
        {
            int y = arr[j];
            if(x>=1 and y<=xi){
                int kk = y/x;
                if(kk*x==y){
                    if(x*y>xi && (x/y)<xi){
                        m=x;
                        n=y;
                        break;
                    }
                }
            }
            if(m!=0){
                break;
            }
            vp.push_back({x,y});
        }
    }
    // for(int i=0;i<sz(vp);i++){
    //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
    // }
    if(m==0){
        cout<<-1<<endl;
    }else{
        cout<<m<<" "<<n<<endl;
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
    //cin >> t;

    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  :::::::::::::::eyasir329.com:::::::::::::::::::
  ===============================================*/