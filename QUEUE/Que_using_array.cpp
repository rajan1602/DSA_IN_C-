// #include<bits/stdc++.h>
// using namespace std;

// class Queue(){
//     int front;
//     int rear;
//     vector<int> v;
// public:
//      Queue(){
//         this->front = -1;
//         this->rear = -1;
//      }
//      void enqueue(int data){
//         v.push_back(data);
//         this->rear++;
//         if(this->rear == 0) this->front = 0;
//         this->v.clear();
//      }
//      void dequeue(){
//         if(this->front == this->rear ){
//             this->front = -1;
//             this->rear = -1;
//      }else{
//         this->front++;
//      }
//      int getfront(){
//         if(this->front == -1) return -1;
//         return this->v[this->front];
//      }
//     bool isEmpty(){
//         return this->front == -1;
//     }
//   }
// };
// int main(){
//      Queue qu;
//      qu.enqueue(1);
//      qu.enqueue(2);
//      qu.enqueue(3);
//      qu.dequeue();
//      while(not qu.isEmpty()){
//         cout<<qu.getfront()<<endl;
//         qu.dequeue();
//      }
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Queue {
//     int front;
//     int rear;
//     vector<int> v;

// public:
//     Queue() {
//         this->front = -1;
//         this->rear = -1;
//     }

//     void enqueue(int data) {
//         if (this->front == -1) {
//             // Queue is initially empty
//             this->front = 0;
//         }
//         this->rear++;
//         if (this->rear < v.size()) {
//             v[this->rear] = data; // Reuse vector space if possible
//         } else {
//             v.push_back(data); // Add new element
//         }
//     }

//     void dequeue() {
//         if (this->front == -1 || this->front > this->rear) {
//             // Queue is empty
//             this->front = -1;
//             this->rear = -1;
//         } else {
//             this->front++;
//             if (this->front > this->rear) {
//                 // Queue becomes empty
//                 this->front = -1;
//                 this->rear = -1;
//             }
//         }
//     }

//     int getfront() {
//         if (this->front == -1) {
//             return -1; // Queue is empty
//         }
//         return v[this->front];
//     }

//     bool isEmpty() {
//         return this->front == -1;
//     }
// };

// int main() {
//     Queue qu;
//     qu.enqueue(1);
//     qu.enqueue(2);
//     qu.enqueue(3);
//     qu.dequeue();

//     while (!qu.isEmpty()) {
//         cout << qu.getfront() <<" ";
//         qu.dequeue();
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> st;
   public:
      Queue() {}
      void push(int x){
        this->st.push(x);
      }
      void pop(){
        if(this->st.empty()) return;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        this->st.pop();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
      }
    bool empty(){
        return this->st.empty();
    }
    int front(){
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        return result;
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
