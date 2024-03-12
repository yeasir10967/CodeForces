#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n, h, i;
    char k;
    cin >> t;
    while (t--)
    {
        h = 0;
        string s;
        k = 'a';
        cin >> s >> n;
        while (k <= 'z')
        {
            for (i = 0; i < s.size(); i++)
            {
                if (s[i] == k)
                {
                    h = h + (s[i] - 'a' + 1);
                    if (h > n)
                    {
                        s.erase(s.begin() + i);
                        i--;
                    }
                }
            }
            k++;
        }
        cout << s << "\n";
    }
    return 0;
}




