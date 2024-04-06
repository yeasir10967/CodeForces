#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n;
     cin>>n;
     if(n==1 || n==2) cout<<"-1"<<endl;
     else 
     {
        for(int i=n;i>0;i--)
        {
            cout<<i<<" ";
        }
     }
    return 0;
}