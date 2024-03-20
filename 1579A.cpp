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
        string s;
     int a=0,b=0,c=0;
     cin>>s;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='A') a++;
         if(s[i]=='B') b++;
          if(s[i]=='C') c++;
     }
     if(b-(a+c)==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
     }
    return 0;
}