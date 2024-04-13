#include<bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
         
  int t; cin>>t;
  while(t--){
    ll n,f,a,b; cin>>n>>f>>a>>b;
    ll ar[n];
    for(int i = 0 ; i<n; i++) cin>>ar[i];
    f -= min(ar[0]*a,b);
    for(int i = 1 ; i<n; i++){
      f -= min((ar[i]-ar[i-1])*a,b);
    }
   
    if(f<=0) cout<<"NO\n";
    else cout<<"YES\n";
  }
    return 0;
}