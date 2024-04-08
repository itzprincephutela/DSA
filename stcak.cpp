#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation 
    stack<int> str;
    // insertion;
    str.push(5);
    str.push(4);
    str.push(3);
    str.push(2);
    str.push(1);
    // delection;
    str.pop();
    // last element;
    cout<< "elemnent on top "<<str.top()<<endl;
   cout<<"kya stack khali hai "<< str.empty()<<endl; 
   cout<<"size of stack "<< str.size()<<endl; 

   while (!str.empty()){
              cout<<str.top() <<" ";
              str.pop();
   }
   cout<<endl;

    return 0;

}