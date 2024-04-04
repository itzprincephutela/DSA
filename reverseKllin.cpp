#include<iostream>
using namespace std;

Node* reverse(Node* &head,int k){
    if(head == NULL){
        return NULL;
    }
    Node* current = head;
    Node* previous = NULL;
    Node* forward = NULL;
    int count = 0;
    while(temp ! = NULL &&count <k){
        forward - current -> next;
        current -> next =previous;
        previous  = current;
        current = forward;
    } 
    while(forward  != NULL){
        head -> next = reverse(forward,k);
        
    }
    return  previous;
}