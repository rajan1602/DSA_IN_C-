#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // prints 3
    st.push(4);
    st.push(5);
    cout << st.top() << endl; // prints 5
    st.pop();
    st.pop();
    cout << st.top() << endl; // prints 3
    cout << st.empty() << endl;
    return 0;
}