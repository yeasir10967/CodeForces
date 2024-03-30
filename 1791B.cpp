
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int n,x=0,y=0;
        string s;
        cin>>n>>s;
        bool flag=false;
       for(int i=0;i<n;i++){
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if(s[i]=='R') x++;
        else if(s[i]=='L') x--;


        if(x==1 &&y==1)
        {
            flag=true;
            break;
        }
       }
       if(flag) cout<<"YES"<<endl;
       else  cout<<"NO"<<endl;
     }
    return 0;
}