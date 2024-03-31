#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n,k;
     cin>>n>>k;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        if(find(v.begin(),v.end(),x)==v.end())
        {
            if(v.size()>=k)
            {
                v.pop_back();
            }
            v.insert(v.begin(),x);
        }
     }
     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
    return 0;
}