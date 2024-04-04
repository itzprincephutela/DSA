#include<iostream>
using namespace std ;
class node{
    public:
    int data ;
    node* next;

    node(){
        this->next=NULL;
    }
    node (int data){
        this->data=data;
        this->next=NULL;
    }
};
void inserthead(node* &head,node* &tail ,int data){
    // node is empty
    if(head == NULL ){
        //step 1 : create a node ;
        node* newdata = new node(data);
        //step 2:update the head
        head=newdata;
        tail=newdata;
    }
    else{
    // step create a node 
    node* newdata= new node(data);
    // attach newnode with head 
     newdata->next=head;
    // /update head
    head=newdata;
}
}

void inserttail(node* &head,node* &tail,int data){
         if(tail == NULL ){
        //step 1 : create a node ;
        node* newdata = new node(data);
        //step 2:update the head
        head=newdata;
        tail=newdata;
    }
    else {
        // create a new node
        node* newdata = new node(data);
        // attach tail to newdata
        tail->next=newdata;
        // update tail
        tail=newdata;
    }
}
void printLL(node* head){
    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength (node* head){
    node* temp=head;
    int length =0;
    while(temp !=NULL    ){
    length++;
    temp=temp->next;
    }
    return length;
}

void insertatanyposition(node* &head ,node* &tail ,int data,int position ){
    int Length = getlength(head);
    if(position <= 1){
        inserthead(head,tail,data);
    }
    else if(position >= Length + 1){
        inserttail(head,tail,data);
    }
    else{
        // insert at middle of linklist
        // create a new node 
        node* newnode= new node(data);
        // step 2
        node* prev = NULL;
        node* curr =head;
        while(position !=1){
            position--;
            prev=curr;
            curr=curr->next;
        }
        // step3 
        prev->next=newnode;
        newnode->next=curr; 
    }

}

// middle from linklist
node* middle(node* head){
    if (head == NULL) // Handle empty list
        return NULL;

    node* fast=head; //ye 2step chle ga 
    node* slow=head; //ye 4step chle ga
    while(fast !=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
        
    }
    return slow;
}

// reverse the  linkedlist
void reverse(node* &head ,node* &tail){
    node* prev=NULL;
    node* curr=head;
    node* temp= head;
    while(curr != NULL){
            node* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
            head=prev; 
               } 
int main(){
 node* head = NULL;
node* tail =NULL;
inserthead(head,tail,10);
inserthead(head,tail,20);
inserthead(head,tail,30);
inserthead(head,tail,40);
inserthead(head,tail,50);
// insertatanyposition(head,tail,500,3);
printLL(head);
// reverse(head,tail);
// printLL(head);
node* middlenode=middle(head);
cout<<middlenode->data;

}