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
        vector<int> arr(3);
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(),arr.end());
        if(arr[1]!=arr[2]) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;

        }


     }
    return 0;
}