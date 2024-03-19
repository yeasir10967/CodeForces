#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n, i, a[500] = {};
        cin >> s;
        n = s.size();
        for (i = 0; i < s.size(); i++)
        {
            a[s[i]]++;
            if (a[s[i]] > 2)
                n--;
        }
        cout << n / 2 << endl;
    }
    return 0;
}