#include<bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int n;
     cin>>n;
     map<string,int>m;
     while(n--)
     {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]>1)
        cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
     }
    return 0;
}