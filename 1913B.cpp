
#include <bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int cnt0 = 0, cnt1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i<s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        for (int i = 0; i< s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (cnt0 == 0)
                {
                    break;
                }
                cnt0--;
            }

            else
                {
                    if (cnt1 == 0)
                    {
                        break;
                    }
                    cnt1--;
                }
            
        }
        cout << cnt0 + cnt1 << endl;
    }
    return 0;
}