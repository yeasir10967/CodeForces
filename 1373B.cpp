#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int cnt[2]={0,0};
        for(int i=0;i<s.size();i++)
        {
            cnt[s[i]-'0']++;
        }
        if(min(cnt[0],cnt[1])%2!=0)
         cout << "DA\n";
        else
            cout << "NET\n";
        


    }
  

    return 0;
}
