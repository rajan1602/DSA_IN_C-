#include<bits/stdc++.h>
using namespace std;
int Zerosumsubarray(vector<int>&v){
    unordered_map<int,int>m;
    int prefixSum = 0;
    int maxlen=0;
    for (int i = 0; i <v.size(); i++){
        prefixSum+=v[i];
        if(prefixSum == 0){
            maxlen++;
        }
        if(m.find(prefixSum)!=m.end()){
            maxlen = max(maxlen,i-m[prefixSum]);
        }
        else{
            m[prefixSum] = i;
        }
    }
    return maxlen;
}
int main(){
    int n; cin >>n;

    vector<int> v(n);
    for (int  i = 0; i < n; i++){
        cin>>v[i];
    }
    cout <<Zerosumsubarray(v)<< endl;
    
}