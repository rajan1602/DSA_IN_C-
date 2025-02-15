#include<iostream>
using namespace  std;
int main(){
   
   int arr [] = {3,1,2,4,0,6};
   int n = 6;

   int targetSum = 7;
   int pairs = 0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
        if(arr[i] + arr[j] +arr[k] == targetSum)
        pairs++;
        }
    }
   }
   cout << pairs << endl;
}

