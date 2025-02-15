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
Node* oddevenLL(Node* &head){
    if(!head) {
        return head;
    }
    Node* evenHead = head->next;
    Node* oddptr = head;
    Node* evenptr = evenHead;

    while (evenptr && evenptr->next)
    {
        oddptr->next = oddptr->next->next;
        evenptr->next = evenptr->next->next;
        oddptr = oddptr->next;
        evenptr = evenptr->next;
    }
    oddptr->next = evenHead;
    return head;
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

    oddevenLL(head);
    display(head);
}