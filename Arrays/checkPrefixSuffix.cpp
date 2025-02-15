#include<iostream>
#include<vector>
using namespace std;
bool prefixSuffix(vector<int> &a){
     int total_sum = 0;
     
    for(int i=0;i<a.size();i++){
          total_sum += a[i];
    }
    int prefix_sum = 0;
    for(int i=0;i<a.size();i++){
        prefix_sum += a[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum) return true;
    }
    return false;
}
int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << prefixSuffix(a) << endl;
    
}