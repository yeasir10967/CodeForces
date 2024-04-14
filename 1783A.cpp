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
        int n;
        cin>>n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int maxele=*max_element(v.begin(),v.end());
        int minele=*min_element(v.begin(),v.end());
        
        if(maxele==minele)

        {
            cout<<"NO"<<endl;
        }
        else 
        {
            sort(v.begin(),v.end());
            swap(v[0],v[n-1]);
            swap(v[1],v[n-1]);
             cout << "YES\n";
        for (int i = 0; i < n; ++i) {
            cout << v[i] <<" ";
        }
        }

        cout<<endl;
     }
    return 0;
}