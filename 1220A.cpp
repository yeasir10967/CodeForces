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
    //  while(t--)
    //  {
        
    //  }
    string s;
    cin>>s;
    
 for (int i = 0; i < t; i++)
 {
if(s[i]=='n')
        {
             cout<<1<<" ";
        }
 }
 for (int i = 0; i < t; i++)
    {
        if(s[i]=='z')
        {
            cout<<0<<" ";
        }
        
    }
  
    
    return 0;
}