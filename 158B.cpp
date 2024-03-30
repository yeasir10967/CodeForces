#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
     optimize();
     int n, t;       
    int arr[5]={0};  
    cin >> n;   

    while (n--) {   
        cin >> t;   
        arr[t]++;     
    }

    cout << arr[4] + arr[3] + (arr[2] * 2 + max(arr[1] - arr[3], 0) + 3) / 4;
    return 0;
}