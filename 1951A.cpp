#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int n,cnt=0;
        string s;
        cin>>n>>s;
        for (int i = 0; i <n; i++)
        {
            if(s[i]=='1') {
                cnt++;
            }
        }
        if(cnt%2!=0 || (cnt==2 && s.find("11")!=string::npos))
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }

     }
    return 0;
}