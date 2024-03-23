#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n, l, diff = INT_MIN; 
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] - v[i] > diff)
        {
            diff = v[i + 1] - v[i];
        }
    }
    int f_ele = v[0];
    double final_diff = double(diff) / 2.0; 
    double ans = max(double(f_ele), final_diff);
    double x = l - v[n - 1];
    double fans = max(x, ans);

    cout << fixed << setprecision(10) << fans << endl;
    return 0;
}
