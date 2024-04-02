#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n,k;
     string s;
     cin>>n>>k>>s;
     sort(s.begin(),s.end());
     int sum=s[0]-96;
     int cnt=1;
     char prev=s[0];
     for(int i=1;i<s.size() && cnt<k;i++)
     {
        if(s[i]-prev>1)
        {
            sum+=s[i]-96;
            prev=s[i];
            cnt++;
        }
     }
    	if(cnt == k){
		cout << sum;
	}else{
		cout << -1;
	}

    return 0;
}








