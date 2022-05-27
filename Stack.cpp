 #include<iostream>
 #define MAX_SIZE 10
 using namespace std;
int top=-1;
int A[MAX_SIZE];
void push(int x){
    if(top== MAX_SIZE -1){
        cout<<"STACK OVERFLOW\n";
        return;
    }
    cout<< x <<" Inserted in stack"<<endl;
    A[++top]=x;
}
void pop(){
    if(top==-1){
        cout<<"STACK IS EMPTY\n";
        return;
    }
    top--;
}
void Print(){
    cout<<"STACK IS : "<<endl;
    for(int i=0;i<=top;i++){
        cout<<A[i]<<endl;
    }
}
 int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    Print();
    pop();
    pop();
    pop();
    Print(); 
     return 0;
 }