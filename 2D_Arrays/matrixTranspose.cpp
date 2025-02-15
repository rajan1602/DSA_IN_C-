#include<iostream>
using namespace std;

int main(){
    int n,m; cin >>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout << a[i][j]<< " ";
        }
        cout << endl;
    }
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           b[i][j] = a[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout << b[i][j]<< " ";
        }
        cout << endl;
    }
}