#include<iostream>
#include<vector>
using namespace std;
int rectaSum(vector<vector<int>>&matrix,int l1,int r1,int l2,int r2){
    int sum = 0;
    for(int i = l1;i <= l2;i++){
        for(int j = r1;j <= r2;j++){
            sum += matrix[i][j];
        }
    }  
     return sum;
}
int main(){
    int n,m; cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m)); 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >>matrix[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //        cout <<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int l1,r1,l2,r2;
    cin >> l1>>r1>>l2>>r2;
    int sum1 = rectaSum(matrix,l1,r1,l2,r2);
    cout << "Sum:-"<<sum1<<endl;
    return 0;
}