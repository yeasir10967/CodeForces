#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string newstr(str);
        reverse(newstr.begin(), newstr.end());
        if (str <= newstr)
        {
            cout << str << endl;
        }
        else
        {
            cout << newstr + str << endl;
        }
        // cout << (str <= newstr ? str : newstr + str) << endl;
    }
    return 0;
}

