#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        long long n,k;
        cin>>n>>k;
        long long ans=k+((k-1)/(n-1));
        cout<<ans<<endl;
     }
    return 0;
}