#include <iostream>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            
            if (s == 0) {
                continue;
            }
            
            string str;
            cin >> str;
            
            for (int j = 0; j < s; j++) {
                if (str[j] == 'U') {
                    arr[i]--;
                } else if (str[j] == 'D') {
                    arr[i]++;
                }
                
                if (arr[i] < 0) {
                    arr[i] += 10;
                } else if (arr[i] >= 10) {
                    arr[i] -= 10;
                }
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
