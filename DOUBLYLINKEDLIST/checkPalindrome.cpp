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
    bool isPalindrome(Node* head,Node* tail){
        while (head!=tail && tail!= head->prev){
            if (head->val!= tail->val){
                return false;
            }
            head = head->next;
            tail = tail->prev;
        }
       return true;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(3);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();
    cout << dll.isPalindrome(dll.head,dll.tail) << endl;
}