#include<bits/stdc++.h>
using namespace std;

vector<int> pge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            ans[st.top()] = n-i-1;
            st.pop();
        }
        st.push(i);
    }
    reverse(ans.begin(),ans.end());
    reverse(arr.begin(),arr.end());
    return ans;
}

int main(){
     int n; 
     cout << "Enter the size of stack " << endl;
     cin >> n;
     vector<int> v;
     while (n--) {
       int x; 
       //cout << "Enter the element in stack "<< endl;
       cin >> x;
       v.push_back(x);
     }
     vector<int> res = pge(v);
     for (int i = 0; i < res.size(); i++) {
        cout << i - res[i] << " ";
     }
}
