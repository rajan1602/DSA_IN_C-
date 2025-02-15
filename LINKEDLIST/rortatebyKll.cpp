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
Node* rotatebyK(Node* &head, int k){
    // find length of ll
    int n = 0;
   // find tail node
   Node* tail = head;
   while(tail->next){
    n++;
    tail = tail->next;
    }
    n++; // for including last node
    k = k % n;
    if(k == 0){
        return head;
    }
    tail->next = head;
    // traverse n-k nodes
    Node* temp = head;
    for(int i=0;i<n-k;i++){
        temp = temp->next;
    }
    // temp is now pointing to (n-k)th node
    Node* new_head = temp->next;
    temp->next = NULL;
    return new_head;
}
int main(){
    Node* head = NULL;
    insertAtlast(head, 1);
    insertAtlast(head, 2);
    insertAtlast(head, 3);
    insertAtlast(head, 4);
   

     display(head);
     rotatebyK(head,1);
     display(head);
}