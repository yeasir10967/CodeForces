#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int num_elements;
    cin >> num_elements;
    vector<int> elements(num_elements);
    for(int i = 0; i < num_elements; i++)
        cin >> elements[i];
    if(count(elements.begin(), elements.end(), elements[0]) == num_elements) {
        cout << -1 << endl;
        return;
    }
    int consecutive_count = 0;
    int min_consecutive = num_elements;
    for(int i = 0; i < num_elements; i++) {
        if(elements[0] == elements[i])
            consecutive_count++;
        else {
            min_consecutive = min(min_consecutive, consecutive_count);
            consecutive_count = 0;
        }
    }
    min_consecutive = min(min_consecutive, consecutive_count);
    cout << min(min_consecutive, consecutive_count) << endl;
}

int main() {
    int num_test_cases;
    cin >> num_test_cases;
    while(num_test_cases--)
        solve();
    return 0;
}
