#include<bits/stdc++.h>
using namespace std;
#define ll long long
using vi = vector<int>;
using vl = vector<ll>;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize() ;
    int test_cases;
    cin >> test_cases;
   
    
    while (test_cases--) {
        int length;
        cin >> length;
        
        string word;
        cin >> word;
        
        if (length == 5) {
            sort(word.begin(), word.end());
            if (word[0] == 'T' && word[1] == 'i' && word[2] == 'm' && word[3] == 'r' && word[4] == 'u')
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}