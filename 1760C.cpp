// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// using vi = vector<int>;
// using vl = vector<ll>;
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int main()
// {
//     optimize();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vi v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         int maxele = *max_element(v.begin(), v.end());

//         for (int i = 0; i < n; i++)
//         {
//             if (v[i] == maxele)
//             {
//                 int fm = (i > 0) ? *max_element(v.begin(), v.begin() + i) : INT_MIN;
//                 int sm = (i < n - 1) ? *max_element(v.begin() + i + 1, v.end()) : INT_MIN;

//                 int ans = v[i] - max(fm, sm);
//                 cout << ans << " ";
//             }
//             else
//             {
//                 int ans = maxele - v[i];
//                 cout << -ans << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define ll long long
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;

    int fm = INT_MIN; 
    int sm = INT_MIN; 

    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] >= fm) {
            sm = fm; // Update second maximum before updating first maximum
            fm = v[i]; // Update first maximum
        } else if (v[i] > sm) {
            sm = v[i]; // Update second maximum
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] != fm) {
            cout << v[i] - fm << " ";
        } else {
            cout << v[i] - sm << " ";
        }
    }
    cout << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
