#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    
    public:
    Queue(){
       this-> head = NULL;
       this->tail = NULL;
        }
    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head == NULL){
            // ll is empty
            this->head = this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this->tail = newNode;
        }
    }
    void dequeue(){
        if(this->head == NULL){
            // ll is empty
            return;
        }else{
            Node* oldhead = this->head;
            Node* newHead = this->head->next;
            this->head = newHead;
            if(this->head == NULL) this->tail = NULL;
            oldhead->next = NULL;
            delete oldhead;
            //this->head = this->head->next;
        }
    }
    bool isEmpty(){
        return this->head == NULL;
    }
    int front(){
        if(this->head == NULL) return -1;
        return this->head->data;
    }
};
    
int main(){
    Queue que;
    que.enqueue(10);
    que.enqueue(20);
    que.enqueue(30);
    que.dequeue();
    que.enqueue(40);

    while (not que.isEmpty()){
        cout << que.head->data << " ";
         que.dequeue();
    }
    
}