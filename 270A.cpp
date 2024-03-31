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
       ll x;
        cin>>x;
        float n=360.0/(180-x);
        if(n==(int)n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
     }
    return 0;
}

