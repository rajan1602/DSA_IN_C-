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
bool CycleInLL(Node* &head){
    Node* slow = head;
    Node* fast = head;
        if(head == NULL || head->next == NULL){
            return false;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
        return true;
    }
    return false;
}
bool removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    do
    {
       slow = slow->next;
       fast = fast->next->next;
    } while (slow!=fast);

    fast = head;
    while (slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    
}
int main(){
    Node* head = NULL;
    insertAtlast(head, 1);
    insertAtlast(head, 2);
    insertAtlast(head, 3);
    insertAtlast(head, 4);
    insertAtlast(head, 5);
     insertAtlast(head, 6);
     insertAtlast(head,7);
     insertAtlast(head,8);

    // display(head);

    head->next->next->next->next->next->next->next->next = head->next->next;
    cout << CycleInLL(head)<<endl;
    cout << "After removing cycle"<<endl;
    // Node* remove =  removeCycle(head);
    // cout << remove << endl;
    removeCycle(head);
    cout << CycleInLL(head)<<endl;
    // display(head);
}