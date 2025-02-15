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
Node* swapAdjacent(Node* &head){
  // base case
  if (head == NULL || head->next == NULL) {
    return head;
  }
  // recursive case
  Node* secnode = head->next;
  head->next = swapAdjacent(secnode->next);
  secnode->next = head;
  return secnode;

}
int main(){
  Node* head = NULL;
    insertAtlast(head, 1);
    insertAtlast(head, 2);
    insertAtlast(head, 3);
    insertAtlast(head, 4);
    insertAtlast(head, 5);
    insertAtlast(head,6);
    display(head);

    swapAdjacent(head);
    display(head);
    
}