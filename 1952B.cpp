#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool flag = false; 
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'i' && s[i + 1] == 't') {
                flag = true;
                break; 
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
