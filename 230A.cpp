// #include <iostream>
// using namespace std;

// int main() {
//     int s, n, flag = 1; 
//     cin >> s >> n;

//     int strength = s;

//     for (int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;

//         if (strength >= a && a != 0) {
//             strength += b;
//             a = 0;
//             i = -1;
//             flag = 1;
//             continue;
//         } else {
//             flag = 0;   
//         }
//     }

//     if (flag)
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    int a[1000], b[1000];
    int count = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < n; i++) {
        if (s > a[i] && a[i] != 0) {
            s += b[i];
            a[i] = 0;
            i = -1;
            count += 1;
        }
    }

    if (count == n) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

