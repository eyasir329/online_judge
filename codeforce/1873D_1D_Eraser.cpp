#include <bits/stdc++.h>

using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;

   int j=0,count=0;

   while(j<s.size()){
        if(s[j]=='B'){
            int m = j+k;
            while(m--){
                if(s[m]=='B'){
                    count++;
                    j=m+1;
                    break;
                }
                if(m==j){
                    break;
                }
            }
        }else{
            j++;
        }
   }
   cout<<count<<endl;
}

int main()
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