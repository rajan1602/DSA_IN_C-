#include <bits/stdc++.h>
using namespace std;

class Stack {
    int capacity;
    int* arr;
    int top;
    
public:
    Stack(int c) {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    
    void push(int data) {
        if (this->top == this->capacity - 1) { // Fixed overflow condition
            cout << "Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }
    
    int pop() {
        if (this->top == -1) {
            cout << "Underflow\n";
            return INT_MIN; 
        }
        return arr[this->top--]; // Return the value before decrementing top
    }
    
    int gettop() {
        if (this->top == -1) {
            cout << "Underflow\n";
            return INT_MIN; 
        }
        return this->arr[this->top];
    }
    
    bool isEmpty() {
        return this->top == -1;
    }
    
    int size() {
        return this->top + 1;
    }
    
    bool isFull() {
        return this->top == this->capacity - 1;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.gettop() << endl; // prints 3
    st.push(4);
    st.push(5);
    cout << st.gettop() << endl; // prints 5
    st.push(8); // triggers Overflow message
    st.pop();
    st.pop();
    cout << st.gettop() << endl; // prints 3
    return 0;
}