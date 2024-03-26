#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     string s;
     cin>>s;
     int cnt=1,ans=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            cnt=1;
        } else{
cnt++;
        }
        ans=max(cnt,ans);
        
     }
     cout<<ans;
    return 0;
}