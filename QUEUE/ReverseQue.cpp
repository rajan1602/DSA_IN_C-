#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    stack<int> st;
    while (not qu.empty()){
       st.push(qu.front());
       qu.pop();
    }
    while (not st.empty()){
        qu.push(st.top());
        st.pop();
    }
    while (not qu.empty()){
        cout << qu.front() << " ";
        qu.pop();
    }
}