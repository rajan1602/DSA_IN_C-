#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Rotate(vector<vector<int>> &v) {
    int n = v.size();
    
    // Transpose the matrix (swap elements in the upper triangle)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {  // Change j from i to n-1
            swap(v[i][j], v[j][i]);
        }
    }
    
    // Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
    }
    return;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));
    
    // Input the elements of the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> vec[i][j];
        }
    }

    // Rotate the matrix
    Rotate(vec);

    // Output the rotated matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
