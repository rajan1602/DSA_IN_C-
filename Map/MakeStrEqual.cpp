#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    unordered_map<char, int> countchar;
    
    // Count occurrences of each character
    for (auto str : v) {
        for (auto c : str) {
            countchar[c]++;
        }
    }

    // Check divisibility condition
    for (auto ele : countchar) {
        if (ele.second % n != 0) {
            cout << "NO" << endl;
            return 0;  // Indicates failure condition
        }
    }

    cout << "YES" << endl;
    return 0;  // Indicates success
}
