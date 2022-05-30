#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkParenthesis(char a[]){
    stack<char> s;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='{' ||a[i]=='(' ||a[i]=='['){
            s.push(a[i]);
        }else if(a[i]=='}' ||a[i]==')' ||a[i]==']'){
            if(s.empty()||(a[i]=='}'&&s.top()!='{')||(a[i]==')'&&s.top()!='(')||(a[i]==']'&&s.top()!='[')){
                return false;
            }
            else{
                s.pop();
            }
        }
    }
    return s.empty();
}
int main(){
    char a[101];
    cout<<"ENTER A STRING WITH PARENTHESIS : ";
    gets(a);
    string answer=checkParenthesis(a)? "TRUE" : "FALSE";
    cout<<"Result : "<<answer<<endl;
    return 0;
}