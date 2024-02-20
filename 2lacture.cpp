//  why do we need programming languages
// compilation process it help to covert human language to computer language YA ye ek translator hai
// lets write down own ist code  
#include<iostream>
using namespace std ;
// main fuction;
int main ( ){
    // declaration
    // int take 4 bytes and 1 bytes = 4 bits ; 
    int num;
    // initialation 
    num = 5;
    // check what is the size of int ;
    // we are using sizeof fuction;
    cout<<"size of int  is :"<< sizeof(num)<<endl;
    // this statement is help to print the word ;
    cout<<"Value of num is :"<<num<<endl;
 

    // now we can check about character size 
    char ch = 'a';
    cout<<"size of character is :"<<sizeof(ch)<<endl;
    cout<<"Value of ch is : "<<ch;

    // now we check for float 
    float fl=23;
    cout<<"size of float is : "<<sizeof(fl)<<endl;
    cout <<"Value of float is :"<<fl; 


    return 0;


}