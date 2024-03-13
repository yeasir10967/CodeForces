#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
           cin>>n>>k;
        if(k==4*n-2)
        {
            cout<<2*n<<"\n";
        }
        cout<<(k+1)/2<<"\n";
    }

    return 0;
}