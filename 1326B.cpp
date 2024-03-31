#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n;
     cin>>n;
     vector<int>v(n);
     int x=0;
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
        v[i]+=x;
        x=max(x,v[i]);
        cout<<v[i]<<" ";
     }
    return 0;
}