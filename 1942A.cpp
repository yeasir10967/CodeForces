#include<bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int n,k;
        cin>>n>>k;
        if(k==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
        }
        else if(k==n)
        {
             for(int i=0;i<n;i++)
            {
                cout<<1<<" ";
            }
        }
       else{
 cout<<"-1";
       }
        cout<<endl; 
     }
    return 0;
}