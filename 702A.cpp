// #include<iostream>
// #include<cmath>
// #include<string>
// using namespace std;
// #define my_code ios_base::sync_with_stdio(0); cout.tie(0);

// int main() {
//     my_code
//     int n;
//     cin >> n;
//     long long a[n];

//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     long long count = 1, maxCount = 1;

//     for(int i = 1; i < n; i++) {
//         if(a[i] > a[i - 1]) {
//             count++;
//         } else {
//             if(count > maxCount) {
//                 maxCount = count;
//             }
//             count = 1;
//         }
//     }

//     if(count > maxCount) {
//         maxCount = count;
//     }

//     cout << maxCount << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            count++;
        } else {
            count = 1;
        }
    }

    cout << count << endl;

    return 0;
}
