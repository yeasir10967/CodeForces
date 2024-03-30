#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int sum = 0;
        string sample, main;
        cin >> sample >> main;
        for (int i = 0; i < main.size() - 1; i++) {
            int pos1 = sample.find(main[i]);
            int pos2 = sample.find(main[i + 1]);
            sum += abs(pos1 - pos2);
        }
        cout << sum << endl;
    }
    return 0;
}
