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
Node* mergeLL(Node* &head1,Node* &head2){
      Node* dummynode = new Node(-1);
      Node* ptr1 = head1;
      Node* ptr2 = head2;
      Node* ptr3 = dummynode;

      while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
      }
      else{
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
      }
      ptr3 = ptr3->next;
}
        if (ptr1) {
         ptr3->next = ptr1;
        }
        else
        {
            ptr3->next = ptr2;
        }
        
        return dummynode->next;
}
Node* mergeKLL(vector<Node*> &lists){
    if(lists.size() == 0) return NULL;
    // if(lists.size() == 1) return lists[0];

    while (lists.size()>1){
        Node* mergeHead = mergeLL(lists[0],lists[1]);
        lists.push_back(mergeHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}
int main(){
    Node* head1 = NULL;
    insertAtlast(head1,1);
    // insertAtlast(head,2);
    // insertAtlast(head,3);
    insertAtlast(head1,6);
    insertAtlast(head1,7);
    display(head1);

    Node* head2 = NULL;
    insertAtlast(head2,2);
    insertAtlast(head2,3);
    display(head2);
    
    Node* head3 = NULL;
    insertAtlast(head3,4);
    insertAtlast(head3,5);
    display(head3);
    // Node* head3 = mergeLL(head1,head2);
    // display(head3);

    vector<Node*>lists;
    lists.push_back(head1);
    lists.push_back(head2);
    lists.push_back(head3);

    Node* mergeHead = mergeKLL(lists);
    display(mergeHead);
    return 0;
}