#include<iostream>
#include<vector>
using namespace std;
void EvenOddSort(vector<int>&v){
    int left = 0;
    int right = v.size()-1;

    while (left<right){
        if(v[left]%2 != 0 && v[right]%2 == 0)
        swap(v[left++],v[right--]);

        if(v[left]%2 == 0) left++;
        if(v[right]%2 != 0) right--;
    }
    return;
    
}
int main(){
    int n; cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    EvenOddSort(v);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}