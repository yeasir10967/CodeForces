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
        int n,m,a,sum=0;
        cin>>n>>m>>a;
        vi b(n),c(m);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            
        }
        for (int j = 0; j < m; j++)
        {
            cin>>c[j];
            
        }
        for (int k = 0; k < n; k++)
        {
           for (int l = 0; l < m; l++)
           {
            if(b[k]+c[l]<=a)
            {
                sum+=1;
            }
           }
            
        }
        cout<<sum<<endl;
        

     }
    return 0;
}