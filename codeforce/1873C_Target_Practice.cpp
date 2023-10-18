#include <bits/stdc++.h>

using namespace std;

#define int long long int

void solve()
{
   int point{0};
   int lv1{0},lv2{0},lv3{0},lv4{0},lv5{0};
   char c[10][10];
   for(int i=0;i<10;i++){
   		for(int j=0;j<10;j++){
   			cin>>c[i][j];
   		}
   }

   for(int i=0;i<10;i++){
   		for(int j=0;j<10;j++){
   			if(c[i][j]=='X'){
   				if(i==0 || i==9){
   					lv1++;
   				}
   				else if((i!=0 || i!=9) && (j==0 || j==9)){
   					lv1++;
   				}
   				else if(i==1 || i==8){
   					lv2++;
   				}
   				else if((i!=1 || i!=8) && (j==1 || j==8)){
   					lv2++;
   				}
   				else if(i==2 || i==7){
   					lv3++;
   				}
   				else if((i!=2 || i!=7) && (j==2 || j==7)){
   					lv3++;
   				}
   				else if(i==3 || i==6){
   					lv4++;
   				}
   				else if((i!=3 || i!=6) && (j==3 || j==6)){
   					lv4++;
   				}else{
   					lv5++;
   				}
   			}
   		}
   }
   point = lv1+lv2*2+lv3*3+lv4*4+lv5*5;
   cout<<point<<endl;
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