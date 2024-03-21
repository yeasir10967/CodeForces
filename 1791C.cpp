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
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && s[n-1-i]=='0' || s[i]=='0' && s[n-1-i]=='1' )
            {
                count+=2;
            }
            else break;
        }
        cout<<(((n-count)<0)?0:n-count)<<endl;

     }
    return 0;
}