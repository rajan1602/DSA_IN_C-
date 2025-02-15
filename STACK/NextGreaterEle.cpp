#include<bits/stdc++.h>
using namespace std;

vector<int> nge(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
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
     vector<int> res = nge(v);
     for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
     }
}
