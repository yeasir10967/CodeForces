#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void print(int n) {
    int size = 2 * n;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i / 2 + j / 2) % 2 == 0) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}

int main() {
    optimize();
  int t;
  cin>>t;
  while(t--)
  {
      int n;
   
    cin >> n;

    print(n);
  }

    return 0;
}