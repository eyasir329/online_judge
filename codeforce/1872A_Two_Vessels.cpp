#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   int t{0};
   if(a>b || b>a){
    if(a>b){
        while(a>b){
            a=a-c;
            b=b+c;
            t++;
        }
    }else{
        while(a<b){
            a=a+c;
            b=b-c;
            t++;
        }
    }
   }
    cout<<t<<endl;
   
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
    while (t--)
    {
        solve();
    }

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;
    cout << endl;

    return 0;
}


/*===============================================
  :::::::::::::Author :Eyasir Ahamed:::::::::::::
  ===============================================*/