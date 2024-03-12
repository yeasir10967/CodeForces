#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, r1, r2, r3, r4;
    cin >> y;
    while (true)
    {
        y += 1;
        string x = to_string(y); 
        sort(x.begin(), x.end());
        if (x[0] != x[1] && x[1] != x[2] && x[2] != x[3])
        {
            break;
        }
    }
    cout << y << endl;

    return 0;
}