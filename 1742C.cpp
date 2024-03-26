#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
cin>>t;
while(t--)
{
    string s;
    bool flag=false;
    for(int i=0;i<8;i++)
    {
        cin>>s;
        if(s=="RRRRRRRR")
        {
            flag=true;
        }
    }
    cout<<(flag?"R":"B")<<endl;
}
    return 0;
}
