
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
        vi v(n);
       unordered_map<int,int> m;
        for (int i = 0; i < n; i++)
        {
           cin>>v[i];
           m[v[i]]++;
        }
        for(auto &it:m)
        {
            cnt+=it.second/2;
        }
        cout<<cnt<<endl;
     }
    return 0;
}