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
void insertAtlast(Node* &head,int val){
    Node* new_node = new Node(val);
      if(head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void display(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;
}
void removeKthnodefromend(Node* &head, int k) {
    Node* ptr1 = head;
    Node* ptr2 = head;

    // Move ptr2 by k steps ahead
    for (int i = 0; i < k; i++) {
        if (ptr2 == NULL) {
            // If k is larger than or equal to the list length, return without deletion
            return;
        }
        ptr2 = ptr2->next;
    }

    // If ptr2 is NULL, it means we need to delete the head node
    if (ptr2 == NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Now move both pointers until ptr2 reaches the end
    while (ptr2->next != NULL) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // ptr1 is at the node before the node to be deleted
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    delete temp;
}
int main(){
    Node* head = NULL;
    insertAtlast(head,1);
    insertAtlast(head,2);
    insertAtlast(head,3);
    insertAtlast(head,4);
    insertAtlast(head,5);
    display(head);

    removeKthnodefromend(head,4);
    display(head);
}