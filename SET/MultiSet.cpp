#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;

    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(3);

    for(auto val:ms){
        cout << val << " ";
    } cout << endl;
}