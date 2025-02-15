#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

     Node(int data){
        val = data;
        next = NULL;
    }
};
class CircularLinkedList{
    public:
    Node* head;
    CircularLinkedList(){
        head = NULL;
    }
void insertAtstart(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }
    Node* tail = head;
    while (tail->next != head)
    {
       tail = tail->next;
    }
    // now tail is pointing to the last node
    tail->next = newNode;
    newNode = head;
    head = newNode;
}
void insertAtEnd(int val){
    Node* new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
        return;
    }
    Node* tail = head;
    while (tail->next!=head)
    {
       tail = tail->next;
    }
    tail->next = new_node;
    new_node->next = head;
    
}
    void display() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->val << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "NULL" << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertAtstart(3);  // Corrected function call
    cll.insertAtstart(5);  // Corrected function call

    cll.display();
    cll.insertAtEnd(8);
    cll.display();

    return 0;
}