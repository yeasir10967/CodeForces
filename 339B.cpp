#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n,m;
     cin>>n>>m;
     int arr[m];
     for(int i=0;i<m;i++)
     {
        cin>>arr[i];
     }
     ll sum=arr[0]-1;
     for(int i=0;i<m-1;i++)
     {
        if(arr[i]>arr[i+1])
        {
            sum+=n-(arr[i]-arr[i+1]);
        } else if (arr[i]<arr[i+1])
        {
            sum+=arr[i+1]-arr[i];
        }
     }
     cout<<sum<<endl;
    return 0;
}