#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
void Reverse(char arr[],int n){

stack<char> s;
for (int i = 0; i < n; i++)
{
    s.push(arr[i]);
}

for (int i = 0; i < n; i++)
{
    arr[i]=s.top();
    s.pop();
}


}
 int main(){
     char arr[50];
     cout<<"ENTER A STRING : ";
     gets(arr);
     Reverse(arr,strlen(arr));
     cout<<"OUTPUT IS : "<<arr<<endl;
          
 }