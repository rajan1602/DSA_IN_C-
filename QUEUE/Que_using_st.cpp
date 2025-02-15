#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st;
   public:
      Queue() {}
      void push(int x){
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            this->st.pop();
        }
        st.push(x); // this line insert the element from bottom of the stack
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
      }
      void pop(){
        if(st.empty()) return;
        this->st.pop();
      }
    bool empty(){
        return this->st.empty();
    }
    int front(){
        if(this->st.empty()) return -1;
        return st.top();
    }
};

int main(){
    Queue dq;
    dq.push(10);
    dq.push(20);
    dq.push(30);
    dq.push(40);
    dq.pop();
    while (!dq.empty()){
        cout << dq.front() << endl;
        dq.pop();
    }
    return 0;
}
