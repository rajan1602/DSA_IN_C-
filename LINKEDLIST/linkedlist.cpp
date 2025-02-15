#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    struct Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
void insertAthead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insetAtend(Node* &head,int val){
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void InsertAtpos(Node* &head, int val,int pos){
    if(pos == 0){
        insertAthead(head,val);
        return;
    }
    Node* new_node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    }
    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}
void updateAtpos(Node* &head,int k,int val){

    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp = temp->next;
        curr_pos++;
    }
    // temp will be pointing to kth node
    temp->val = val;
}

void deleteAthead(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtend(Node* &head){
    Node* sec_last = head;
    while(sec_last->next->next!=NULL){
        sec_last = sec_last->next;
    }
    // now sec_last points to sec last node
    Node* temp = sec_last->next;
    sec_last->next = NULL;
    free(temp);
}
void deleteAtpos(Node* &head,int pos){
    if(pos == 0){
        deleteAthead(head);
        return;
    }
    Node* prev = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}
void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->val <<"->";
        temp = temp->next;
    }
    cout<<"NULL "<<endl;
}
int main(){
       Node* head = NULL;
       insertAthead(head,20);
       display(head);
       insertAthead(head,10);
       display(head);
       insetAtend(head,30);
       display(head);
       InsertAtpos(head,15,1);
       display(head);
       updateAtpos(head,2,18);
       display(head);

    //    deleteAthead(head);
    //    display(head);
    //    deleteAtend(head);
    //    display(head);
    deleteAtpos(head,1);
    display(head);
    //    cout << n->val << " "<< n->next<<endl;
    
}