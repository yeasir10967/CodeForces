#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, count=0;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
     cin>>a[i];
   }
   int dif=a[0]-a[1];
   for(int i=1; i<n-1; i++)
   {
    if(a[i]-a[i+1]!=dif || a[i]==a[i+1]){
        count++;
        break;
        }
    }
   if(count) cout<<a[n-1];
   else cout<<a[n-1]-dif;
   return 0;
}

