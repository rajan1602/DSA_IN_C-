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
Node* reorderLL(Node* &head){
    // can check if ll has atleast 3 nodes
    
    // find middle ele
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    // now slow is pointing to middle ele
    // 2. seprate the ll and reverse second half
    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;
    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // 3. merging two half of ll
    Node* ptr1 = head;
    Node* ptr2 = prev;
    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
      return head;
}
int main(){
  Node* head = NULL;
    insertAtlast(head, 1);
    insertAtlast(head, 2);
    insertAtlast(head, 3);
    insertAtlast(head, 4);
    insertAtlast(head, 5);
    // insertAtlast(head,6);
    display(head);

    reorderLL(head);
    display(head);
    
}