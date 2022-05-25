#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head;
Node* getNewnode(int x){
    Node* myNode=new Node();
    myNode->data=x;
    myNode->next=NULL;
    myNode->prev=NULL;
    return myNode;
}
void insertNodeAtHead(int x){
    Node* myNode=getNewnode(x);
    if(head==NULL){
        head=myNode;
        return;
    }
    head->prev=myNode;
    myNode->next=head;
    head=myNode;
    return;

}
void recursivePrint(Node* p){
    if(p==NULL){
        return;
    }
    cout<<"data : "<<p->data<<endl;
    recursivePrint(p->next);
    
}
int main(){
    head=NULL;
    insertNodeAtHead(1);
    insertNodeAtHead(2);
    insertNodeAtHead(3);
    insertNodeAtHead(4);
    recursivePrint(head);
    return 0;
}