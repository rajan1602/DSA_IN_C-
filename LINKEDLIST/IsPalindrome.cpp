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
        while(temp->next != NULL){
            temp = temp->next;
        }
       temp->next = new_node;
}
void display(Node* &head){
    Node* temp = head;
    while (temp!=NULL) {
       cout <<temp->val<<"->";
       temp = temp->next;
    }
    cout << "NULL"<<endl;
}
bool isPalindrome(Node* head){
    // find middle element
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // Now slow is pointing to middle element
    // break the ll in middle
    Node* curr = slow->next;
    Node* prev = slow;
    slow->next = NULL;
    // reverse the second half of ll
    while (curr)
    {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // to check if ll are equal
    Node* head1 = head1;
    Node* head2 = head2;

    while (head2){
        if(head1->val!=head2->val){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main(){
  Node* head = NULL;
    insertAtlast(head, 1);
    insertAtlast(head, 2);
    insertAtlast(head, 3);
    insertAtlast(head, 4);
    insertAtlast(head, 5);
    display(head);
    cout << isPalindrome(head)<<endl;
}