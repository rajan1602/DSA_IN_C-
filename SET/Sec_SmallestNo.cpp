#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    set<int> s;
    for(auto val:v){
        s.insert(val);
    }
    auto itr = s.begin();
    itr++;
    cout << "Second Smallest Number "<< *itr << endl;
}