#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_multiset<int> ms1;
    ms1.insert(4);
    ms1.insert(8);
    ms1.insert(3);
    ms1.insert(1);
    ms1.insert(4);

    for(auto val:ms1){
        cout << val << " ";
    }
    cout << endl;
}