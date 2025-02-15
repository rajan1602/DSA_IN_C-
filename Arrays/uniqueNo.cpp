#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,1,3,4,2,1};
    int size = 7;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] == arr[j])
            arr[i] = arr[j] = -1;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i] > 0)
        cout <<arr[i];
    }

}