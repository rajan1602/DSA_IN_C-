#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) { // Node constructor
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    Node* head;
    int capacity;
    int currSize;
    
    Stack(int c) { // Correct constructor name
        this->capacity = c;
        this->currSize = 0;
        this->head = NULL;
    }
    
    bool isEmpty() {
        return this->head == NULL; // Correct comparison
    }
    
    bool isFull() {
        return this->currSize == this->capacity;
    }
    
    void push(int data) {
        if (this->currSize == this->capacity) {
            cout << "Overflow" << endl;
            return; // Return after overflow message
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    }
    
    int pop() {
        if (this->head == NULL) {
            cout << "Underflow" << endl;
            return INT_MIN; // Return sentinel value on underflow
        }
        Node* toBeRemoved = this->head;
        int result = toBeRemoved->data;
        this->head = this->head->next;
        delete toBeRemoved;
        this->currSize--;
        return result;
    }
    
    int getTop() {
        if (this->head == NULL) {
            cout << "Underflow" << endl;
            return INT_MIN; // Return sentinel value on underflow
        }
        return this->head->data; // Return data at the top
    }
    
    int size() {
        return this->currSize;
    }
};

int main() {
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl; // prints 3
    st.push(4);
    st.push(5);
    cout << st.getTop() << endl; // prints 5
    st.push(8); // triggers Overflow message
    st.pop();
    st.pop();
    cout << st.getTop() << endl; // prints 3
    return 0;
}
