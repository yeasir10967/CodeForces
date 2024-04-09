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
      ll n,c,d,matsize,row_element=1,column_element=1;
     cin>>n>>c>>d;
    matsize=n*n;
    vector<ll>v(matsize);
     vector<ll>ans;
     for(int i=0;i<matsize;i++)
     {
        cin>>v[i];
     }
     sort(v.begin(),v.end());
     
     int first_element=v[0];
     row_element=first_element;
     int mat[n][n];
     for(int i=0;i<n;i++)
     {
        row_element=first_element+i*c;
          for(int j=0;j<n;j++)
          {
            mat[i][j]=row_element;
            ans.push_back(row_element);
            row_element+=d;
          }
     }
     sort(ans.begin(),ans.end());
     
     int count=0;
     for(int i=0;i<matsize;i++)
     {
        if(v[i]==ans[i]) count++;
     }
     if(count==matsize) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
   }

    return 0;
}