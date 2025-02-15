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
    void reverseDll(Node* &head,Node* &tail){
        Node* currptr = head;
        while (currptr){
            Node* nextptr = currptr->next;
            currptr->next = currptr->prev;
            currptr->prev = nextptr;
            currptr = nextptr;
        }
        Node* newhead = tail;
        tail = head;
        head = newhead;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    // dll.insertAtEnd(6);
    dll.display();
    dll.reverseDll(dll.head,dll.tail);
    dll.display();
}