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
        int n,cnt=0;

       
        cin>>n;
       map<char,int>m;
        for (int i = 0; i < n; i++)
        {
           char c;
           cin>>c;
           m[c]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
            {
                cnt+=2;
            }
            else{
                cnt+=it.second+1;
            }
        }cout<<cnt<<endl;
        
     }
    return 0;
}