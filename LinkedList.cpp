// #include<iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node* next;
// };

// ////////////////////// INSERT NODE AT BEGGINING/////////////////////////

// void insert(Node** PoinerTohead,int data){
// Node* temp=new Node();    
// temp->data=data;
// temp->next=*PoinerTohead;
// *PoinerTohead=temp;
// }

// /////////////////// PRINT LINKED LIST ///////////////////////////////

// void print(Node* head){

    
//     while (head != NULL)
//     {
//         cout << "The data is : " << head->data << endl;
//         head = head->next;
//     }
// }

// ////////////////// INDERT VALUE AT THE GIVEN POSITION ////////////////

// void insertAtPosition(int position,int data,Node** head){
//     Node* temp=new Node();
//     Node* a=*head;
//     temp->data=data;
//     int i=1;
//     while(i!=position){
//     a=a->next;
//     i++;    
//     }
//     temp->next=a->next;
// }

// int main(){
//     Node* head=NULL;
//     int count,number;
//     cout<<"how many numbers : ";
//     cin>>count;
//     for (int i = 0; i < count; i++)
//     {
//         cout<<"enter the number : ";
//         cin>>number;
//         insert(&head,number);
//         print(head);
//     }
    
//     return 0;

// }



#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data,int n){
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=1;i<n-1;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;  
}
void DeleteNode(int n){
    Node* temp=head;
    for (int i = 1; i < n-1; i++)
    {
        temp=temp->next;
    }
    Node* temp1=temp->next; 
    temp->next=temp1->next;
    delete temp1;
    
}
void reverseList(){
    Node * current,*prev,*next;
    current =head;
    prev=NULL;
    while (current!=NULL)
    {   
     next=current->next;
     current->next=prev;
     prev=current;
     current=next;     
    }
    head=prev;
}
void print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void recursivePrint(Node* p){
    if(p==NULL){
        return;
    }
    recursivePrint(p->next);
    cout<<"data : "<<p->data<<endl;
}
int main(){
    head=NULL;
    Insert(1,1);
    Insert(2,2);
    Insert(3,3);
    Insert(4,4);
    Insert(5,5);
    Insert(6,6);
    Insert(7,7);
    Insert(8,8);
    // print();
    // reverseList();
    // print();
    cout<<"print using recursive function"<<endl;
    recursivePrint(head);
    return 0;
}