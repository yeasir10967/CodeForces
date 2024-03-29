#include <bits/stdc++.h>
using namespace std;
#define optimize()  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int x, y,z;
        cin >> x >> y >> z;
        if (x < y && y < z)
        {
            cout << "STAIR" << endl;
        }
        else if (x < y && y > z)
        {
            cout << "PEAK" << endl;
        }
        else 
        {
            cout << "NONE" << endl;
        }
    }
    return 0;
}