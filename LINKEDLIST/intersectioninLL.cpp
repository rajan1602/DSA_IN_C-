#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAthead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Function to display linked list
void display(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Function to get the length of a linked list
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        length++;
    }
    return length;
}

// Function to move head by k steps
Node* moveHeadByK(Node* head, int k) {
    Node* ptr = head;
    while(k--) {
        ptr = ptr->next;
    }
    return ptr;
}

// Function to find intersection point of two linked lists
Node* intersectInLL(Node* head1, Node* head2) {
    if(head1 == NULL || head2 == NULL) {
        return NULL;
    }

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    // Calculate the length of both linked lists
    int l1 = getLength(head1);
    int l2 = getLength(head2);

    // Find the difference `k` between the lengths and move the pointer of the longer list by `k` steps
    if(l1 > l2) {
        int k = l1 - l2;
        ptr1 = moveHeadByK(ptr1, k);
    } else {
        int k = l2 - l1;
        ptr2 = moveHeadByK(ptr2, k);
    }

    // Compare both pointers step by step to find intersection
    while(ptr1 && ptr2) {
        if(ptr1 == ptr2) {
            return ptr1;  // Intersection found
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL; // No intersection
}

int main() {
    Node* head1 = NULL;
    insertAthead(head1, 4);
    insertAthead(head1, 3);
    insertAthead(head1, 2);
    insertAthead(head1, 1);
    display(head1);

    Node* head2 = NULL;
    insertAthead(head2, 7);
    insertAthead(head2, 6);
    
    // Assume both lists intersect at node with value 3
    head2->next->next = head1->next->next;  // Making an intersection point at value 3
    display(head2);

    Node* intersection = intersectInLL(head1, head2);
    if(intersection) {
        cout << "The intersection point is at node with value: " << intersection->val << endl;
    } else {
        cout << "There is no intersection." << endl;
    }

    return 0;
}
