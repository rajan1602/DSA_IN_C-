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
void insertAthead(Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void display(Node* &head){
    Node* temp = head;
    while (temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}
bool CheckEqualLL(Node* head1,Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    while (ptr1!=NULL && ptr2!= NULL){
        if(ptr1->val != ptr2->val) return false;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1==NULL && ptr2 == NULL);
}
int main(){
     Node* head1 = NULL;
     insertAthead(head1,3);
     insertAthead(head1,2);
     insertAthead(head1,1);
     insertAthead(head1,0);
     display(head1);
     Node* head2 = NULL;
     insertAthead(head2,3);
     insertAthead(head2,2);
     insertAthead(head2,1);
     insertAthead(head2,0);
     display(head2);

    //  bool isequal = CheckEqualLL(head1,head2);
    //  if(isequal){
    //     cout <<"YES";
    //  }
    //  else{
    //     cout << "NO";
    //  }

    cout << CheckEqualLL(head1,head2);
     return 0;
}
