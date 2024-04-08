#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int t;
    cin >> t;
    
    while (t--) {
       ll n, k;
        cin >> n >> k;
        
        if (n % 2 == 0 && k % 2 == 0 && k * k <= n || n % 2 != 0 && k % 2 != 0 && k*k <= n) {
            cout << "YES" << endl;
        } 
         else {
            cout << "NO" << endl;
        }
    }
    return 0;
}