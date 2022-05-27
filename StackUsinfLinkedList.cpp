#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* top=NULL;
void push(int x){
    Node* temp=new Node();
    (*temp).data=x;
    temp->link=top;
    top=temp;
}
void pop(){
    Node* temp=new Node();
    top=top->link;
}
void print(){
    Node*temp=top;
    while (temp!=NULL)
    {
        cout<<"data : "<<temp->data<<endl;
        temp=temp->link;
    }
    
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    print();
    pop();
    print();
    return 0;
}