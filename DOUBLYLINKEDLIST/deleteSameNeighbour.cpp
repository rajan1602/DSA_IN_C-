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
    void deleteSameNeighbour(Node* &head,Node* &tail){
        Node* currNode = tail->prev;// second last node
        while (currNode!=head){
            Node* prevNode = currNode->prev;
            Node* nextNode = currNode->next;
            if(prevNode->val == nextNode->val){
                prevNode->next = nextNode;
                nextNode->prev = prevNode;
                free(currNode);
            }
            currNode = prevNode;
        }
         
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    // dll.insertAtEnd(3);
    dll.display();
    dll.deleteSameNeighbour(dll.head,dll.tail);
    dll.display();
    
}