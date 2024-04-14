#include<bits/stdc++.h>
using namespace std;

#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();

    int t[4], ans = 0;


    for (int i = 0; i < 4; i++) {
        cin >> t[i];
    }

    string s;
    cin >> s;


    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            ans += t[0];
        } else if (s[i] == '2') {
            ans += t[1];
        } else if (s[i] == '3') {
            ans += t[2];
        } else if (s[i] == '4') {
            ans += t[3];
        }
    }

    cout << ans << endl;

    return 0;
}
