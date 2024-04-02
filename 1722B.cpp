#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
     cin>>t;
     while (t--)
     {
        int n;
        cin>>n;
        string a,s;
        cin>>a>>s;
        replace(begin(a),end(a),'G','B');
        replace(begin(s),end(s),'G','B');
        if(a==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     
    return 0;
}