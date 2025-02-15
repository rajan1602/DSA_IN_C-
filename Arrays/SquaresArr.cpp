#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedSquares(vector<int>&a){
    vector<int>ans;
    int left = 0;
    int right = ans.size()-1;

    while (left<=right){
        if(abs(a[left]) < abs(a[right])){ ans.push_back(a[right]*a[right]);
        right--;}
        else{ ans.push_back(a[left]*a[left]);
        left++;}
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } cout << endl;
  }
int main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
   sortedSquares(a);
}