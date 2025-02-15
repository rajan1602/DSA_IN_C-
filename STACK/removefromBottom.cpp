#include <bits/stdc++.h>
using namespace std;

void RemoveFromBottom(stack<int> &st) {
    stack<int> temp;

    // Move all elements except the bottom one to a temporary stack
    while (st.size() > 1) {  // Fix: check st.size() instead of n
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    // Move elements back from the temporary stack to the original stack
    while (!temp.empty()) {
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    RemoveFromBottom(st);

    // Print the modified stack
    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }
    return 0;
}
