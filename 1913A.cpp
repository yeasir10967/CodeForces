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
        string s;
           int a,b;
        bool flag=false;
        cin>>s;
        for(int i=1;i<s.size();i++)
        {
            string x=s.substr(0,i);
            string y=s.substr(i);
         
            a=stoi(x);
            b=stoi(y);

            if(x[0]!='0' && y[0]!='0' && a<b)
            {
               
              flag=true; 
              break;
            }

        }
        if(flag)
        {
            cout<<a<<" "<<b<<endl;
        } 
        else {
            cout<<"-1"<<endl;
        }
     }
    return 0;
}
