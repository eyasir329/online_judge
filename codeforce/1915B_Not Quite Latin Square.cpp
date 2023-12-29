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
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int t=-1,k;
	for(int j=0;j<3;j++){
			if(s1[j]=='?'){
				if(j==0){
					if((s1[1]=='A' and s1[2]=='B') or(s1[1]=='B' and s1[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s1[1]=='C' and s1[2]=='A') or(s1[1]=='A' and s1[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else if(j==1){
					if((s1[0]=='A' and s1[2]=='B') or(s1[0]=='B' and s1[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s1[0]=='C' and s1[2]=='A') or(s1[0]=='A' and s1[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else{
					if((s1[0]=='A' and s1[1]=='B') or(s1[0]=='B' and s1[1]=='A') ){
						cout<<'C'<<endl;
					}else if((s1[0]=='C' and s1[1]=='A') or(s1[0]=='A' and s1[1]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}
				return;
				
			}
			else if(s2[j]=='?'){
				if(j==0){
					if((s2[1]=='A' and s2[2]=='B') or(s2[1]=='B' and s2[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s2[1]=='C' and s2[2]=='A') or(s2[1]=='A' and s2[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else if(j==1){
					if((s2[0]=='A' and s2[2]=='B') or(s2[0]=='B' and s2[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s2[0]=='C' and s2[2]=='A') or(s2[0]=='A' and s2[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else{
					if((s2[0]=='A' and s2[1]=='B') or(s2[0]=='B' and s2[1]=='A') ){
						cout<<'C'<<endl;
					}else if((s2[0]=='C' and s2[1]=='A') or(s2[0]=='A' and s2[1]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}
				return;
			}
			else if(s3[j]=='?'){
				if(j==0){
					if((s3[1]=='A' and s3[2]=='B') or(s3[1]=='B' and s3[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s3[1]=='C' and s3[2]=='A') or(s3[1]=='A' and s3[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else if(j==1){
					if((s3[0]=='A' and s3[2]=='B') or(s3[0]=='B' and s3[2]=='A') ){
						cout<<'C'<<endl;
					}else if((s3[0]=='C' and s3[2]=='A') or(s3[0]=='A' and s3[2]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}else{
					if((s3[0]=='A' and s3[1]=='B') or(s3[0]=='B' and s3[1]=='A') ){
						cout<<'C'<<endl;
					}else if((s3[0]=='C' and s3[1]=='A') or(s3[0]=='A' and s3[1]=='C') ){
						cout<<'B'<<endl;
					}else{
						cout<<'A'<<endl;
					}
				}
				return;
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