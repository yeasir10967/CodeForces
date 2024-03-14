#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, lcm, ans;
        cin >> a >> b;
        
        lcm = (long long)(a * b) / __gcd(a, b);
        
      
        if (lcm == b) {
            ans = (lcm * b / a); 
        } else {
            ans = lcm; 
        }
        
        cout << ans << "\n"; 
    }
    return 0;
}
