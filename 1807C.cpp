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
        int n;
        bool flag=true;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i+=2)
        {
          for (int j = 1; j < n; j+=2)
          {
            if(s[i]==s[j])
            {
                flag= false;
                break;
            }
          }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        } else
        {
             cout<<"NO"<<endl;
        }
        
     }
    return 0;
}