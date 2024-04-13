#include<bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        vi x(4), y(4);
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        int dis = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
        cout << dis * dis << endl;
    }
    return 0;
}