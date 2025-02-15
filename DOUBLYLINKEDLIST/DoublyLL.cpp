#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    
    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
    public:
    Node* head;
    Node* tail;
    
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void InsertAtStart(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(tail == NULL) {
        head = newNode;
        tail = newNode;
        }
      else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
      }
    }
    void insertAtpos(int val, int k){
       Node* newNode = new Node(val);
       Node* temp = head;
       int count = 1;
       while(count < k-1){
           temp = temp->next;
           count++;
    }
          newNode->next = temp->next;
          temp->next = newNode;

          newNode->prev = temp;
          newNode->next->prev = newNode;
          return;
    }
    void deleteAtStart(){
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
        }
        free(temp);
        return;
    }
    void deleteAtend(){
        if (head == NULL) {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        } else{
            tail->next = NULL;
        }
        free(temp);
        return;
    }
    void deleteAtpos(int k){
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        int count = 1;
        while(count < k){
            temp = temp->next;
            count++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }
};

int main() {
    DoublyLinkedList dll;
    // dll.InsertAtStart(1);
    // dll.display();
    // dll.InsertAtStart(2);
    // dll.display();
    // dll.InsertAtStart(3);
    // dll.display(); 
    
    dll.insertAtEnd(1);
    dll.display();
    dll.insertAtEnd(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();
    
    dll.insertAtpos(4, 2);
    dll.display();
    // dll.deleteAtStart();
    // dll.display();
    // dll.deleteAtend();
    // dll.display();
    dll.deleteAtpos(2);
    dll.display();
}

