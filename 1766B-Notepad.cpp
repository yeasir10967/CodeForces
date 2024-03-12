#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string str;
        cin>>n>>str;
        bool flag=false;
        for(int i=0;i<n-1;i++)
        {
            string ss=str.substr(i,2); // setting size of substring inside the parenthesis
            if(str.find(ss,i+2)!=str.npos) // check if substring occurs after the next position also stting size from where to start searching inside parenthesis
           {
            flag=true;
            break;
           } 
        }
        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

    return 0;
}