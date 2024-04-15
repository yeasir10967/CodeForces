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
        int n,even=0,odd=0;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                even+=arr[i];
            }
            else if(arr[i]%2!=0)
            {
                odd+=arr[i];
            }
        }
        if(even>odd)
        {
            cout<<"YES"<<endl;
        } else 
        {
            cout<<"NO"<<endl;
        }
        
     }
    return 0;
}