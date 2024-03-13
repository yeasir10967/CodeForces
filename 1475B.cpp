

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int remainder = n % 2020;
        int quotient = n / 2020;
        if (remainder <= quotient) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
