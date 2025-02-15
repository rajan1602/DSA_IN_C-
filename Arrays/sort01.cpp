#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>&v){

  // FIRST APPROACH

    // int countzeroes = 0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i] == 0) countzeroes++;
    // }
    // for(int i=0;i<v.size();i++){
    //     if(i<countzeroes) v[i] = 0;
    //     else v[i] = 1;
    // }

  // SECOND APPROACH

    int left = 0;
    int right = v.size()-1;

    while (left < right){
       if(v[left] == 1 && v[right] == 0)
       v[left++] = 0;
       v[right--] = 1;

       if(v[left] == 0) left++;
       if(v[right] == 1) right--;
    }
    return;
}

int main(){
    int n; cin >> n;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort01(v);
    for(int i=0;i<n;i++){
    cout << v[i] << " ";
    }
    cout << endl;
}
