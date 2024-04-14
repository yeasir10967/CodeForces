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
        cin>>n;
        string s[3][n];
        map<string,int>m;
        for (int i = 0; i < 3; i++)
        {
           for (int j = 0; j < n; j++)
           {
            cin>>s[i][j];
            m[s[i][j]]++;
           }
        }
            for (int i = 0; i < 3; i++)
            {
                int ans=0;
                 for (int j = 0; j < n; j++)
                 {
                    if(m[s[i][j]]==1)
                    {
                        ans+=3;
                    }
                    else if(m[s[i][j]]==2)
                    {
                        ans+=1;
                    }
                 }
                 cout<<ans<<" ";
            }
        cout<<endl;
     }
    return 0;
}