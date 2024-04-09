#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		if(b>2*a) b=2*a;
		cout<<(n/2)*b + (n%2)*a<<"\n";
    }
    return 0;
}