#include <iostream>
#include <string>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t; 
    while (t--) {
        string x, y;
        cin >> x >> y;
        int l = x.size(); 
        for (int i = 0; i < l; i++) { 
            if ((x < y && x[i] < y[i]) || (x > y && x[i] > y[i])) { 
                swap(x[i], y[i]);
            }
        }
       
        cout << x << endl << y << endl;
    }
    return 0;
}
