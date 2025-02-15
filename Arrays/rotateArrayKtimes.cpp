#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5};
    // int n = 5;
    // int ansarray[5];
    // int k = 1;
    // int j = 0;

    // k = k % n;

    // for(int i=n-k;i<n;i++){
    //     ansarray[j++] = arr[i];
    // }

    // for(int i=0;i< n-k;i++){
    //     ansarray[j++] = arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout << ansarray[i]<<" ";
    // }

     vector<int> v = {1,2,3,4,5};
    //  v.push_back(1);
    //  v.push_back(2);
    //  v.push_back(3);
    //  v.push_back(4);
    //  v.push_back(5);
    //  int n = 5;
     int k = 7;
     k = k % v.size();

     reverse(v.begin(),v.end());
     reverse(v.begin(),v.begin()+k);
     reverse(v.begin()+k,v.end());

     for(int a:v){
        cout << a << " ";
     }
     cout << endl;
}