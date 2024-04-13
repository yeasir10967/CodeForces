#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int n,m,k;
     cin>>n>>m>>k;
     int dif= (n+m-1)/m;
     if(n-dif>k) {cout<<"YES"<<endl;}
     else {cout<<"NO"<<endl;}
     }
    return 0;
}