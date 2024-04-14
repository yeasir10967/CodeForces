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
      int a,b,c,rem,ans;
      cin>>a>>b>>c;
      ans=a;
      rem=b%3;
      if(rem==0)
      {
         ans+=b/3;
         if(c%3==0)
         {
            ans+=c/3;
         }
         else{
            ans+=c/3 +1;
         }
         cout<<ans<<endl;
      }
      else if(c>=3-rem)
      {
         b+=3-rem;
         c-=3-rem;
         ans+=b/3;
         if(c%3==0)
         {
            ans+=c/3;
         }
         else 
         {
            ans+=c/3 +1;
         }
         cout<<ans<<endl;
      }
      else {
         cout<<"-1"<<endl;
      }
      
    }
    return 0;
}