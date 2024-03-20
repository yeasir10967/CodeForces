#include<bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        int x,y,a;
        cin>>x>>y>>a;
        if(x>y) cout<<x<<endl;
        else if(x+a>=y) cout<<y<<endl;
        if(x+a<y)
        {
            cout<<y+(y-(x+a))<<endl;
        }
     }
    return 0;
}