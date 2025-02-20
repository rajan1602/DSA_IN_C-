#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    map<int,int> m1;
    for(int i=0;i<n;i++){
        // storing frequency of every element in vector array
        m1[v[i]]++;
    }
    int sum = 0;
    // finding some of repetative elements
    // pair -> element, frequency
    for(auto pair:m1){
        if(pair.second>1){
        sum+= pair.first;
        }
    }
    cout << "ANS - "<< sum << endl;
}