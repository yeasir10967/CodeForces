#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     string s;
     cin>>s;
    if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1  || s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)
    cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;
    return 0;
}