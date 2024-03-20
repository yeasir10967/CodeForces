#include<bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int n,a=0,b=0;

        cin>>n;
               int arr[n];
        
        for(int i=1,j=0;i<=n,j<n;i++,j++)
        {
            arr[j]=pow(2,i);
          
        }
        int max=arr[n-1];
        a=a+max;
        for(int i=0;i<(n-2)/2;i++)
        {
            a+=arr[i];
        }
        for(int i=(n/2)-1;i<=n-2;i++)
        {
            b+=arr[i];
        }
        cout<<abs(a-b)<<endl;

     }
    return 0;
}