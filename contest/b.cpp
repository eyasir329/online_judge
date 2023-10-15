#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int a,n;
        cin>>a>>n;
        long long int sum=0;
        for(int i=1;i<=n;i++)
        {
        sum=sum+abs(i%a -i%(a-1));
        }
       
        cout<<"Case "<<i<<": "<< sum<<endl;

    }
}