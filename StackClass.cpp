#include<iostream>
using namespace std;
#define  MAX_SIZE 101
class Stack
{
private:
    int x;
    int top;
    int A[MAX_SIZE];
public:
    Stack();
    bool push(int);
    int pop();
    int peek();
    void Print();
};

Stack::Stack()
{
    this->top=-1;
}
bool Stack::push(int x){
    if (top >= (MAX_SIZE - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        A[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
int Stack::pop(){
    if(top==-1){
        cout<<"STACK IS UNDERFLOW.......!"<<endl;
        return 0;
    }
    int last_element=A[top];
    top--;
    cout<<last_element<<" ELEMENT POPPED ....! "<<endl;
    return last_element;

}
int Stack::peek(){
    if(top==-1){
        cout<<"STACK IS UNDERFLOW.....!"<<endl;
        return 0;
    }
    else{

        return A[top];
    }
}
void Stack::Print(){
    for (int i = 0; i <=top; i++)
    {
       cout<<"DATA : "<< A[i]<<endl;
    }
    
}
int main(){
    Stack* s=new Stack();
    s->push(9);
    s->push(3);
    s->push(2);
    s->push(11);
    s->Print();
    s->pop();
    s->pop();
    s->pop();
    s->Print();
    s->peek();
    return 0;
}