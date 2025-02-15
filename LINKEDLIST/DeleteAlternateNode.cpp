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
void insertAtHead(Node* &head,int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void deleteAlternateNode(Node* &head){
    Node* curr_node = head;
    while (curr_node!=NULL && curr_node->next!=NULL){
         Node* temp = curr_node->next;
         curr_node->next = curr_node->next->next;
         free(temp);
         curr_node = curr_node->next;
    }
}
void deleteDuplicateNodes(Node* &head){
    Node* curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            Node* temp = curr_node->next;// node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
           // curr_node = curr_node->next;
            }
            curr_node = curr_node->next;
        }
    }
void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL" << endl;
}
void reverse(Node* head){
    // base case
    if(head == NULL) return;
    // recursive case
    reverse(head->next);
    cout<<head->val<<"->";
}
void reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    // curr->next = prev;
    // move all 3 ptrs by one step ahead
    while(curr!=NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // when this loop will ends,prev pointing to last node which is new head
    head = prev;
}
Node* reverseLLRecursion(Node* &head){
    // base case
    if(head == NULL || head->next == NULL) {
        return head;
    }
    // recursive case
    Node* new_head = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}
Node* reversekLL(Node* &head,int k){
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    while(curr!=NULL && count < k){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(curr!=NULL){
        Node* new_head = reversekLL(curr,k);
        head->next = new_head;
    }
    return prev;
}
int main(){
       Node* head = NULL;
    //    insertAtHead(head,5);
    //    insertAtHead(head,4);
    //    insertAtHead(head,3);
    //    insertAtHead(head,2);
    //    insertAtHead(head,1);
       insertAtHead(head,4);
       insertAtHead(head,3);
       insertAtHead(head,3);
       insertAtHead(head,3);
       insertAtHead(head,2);
       insertAtHead(head,2);
       insertAtHead(head,1);
       display(head);
    //    deleteAlternateNode(head);
    //    display(head);

       deleteDuplicateNodes(head);
       display(head);
    //    reverse(head);
       head = reversekLL(head,4);
       display(head);
}
