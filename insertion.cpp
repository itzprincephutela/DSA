#include<iostream>
using namespace std ;
class node {
    public:
    int data;
    node* next;

    node(){
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertionhead(node* &head,node* &tail ,int data){
   if(head == NULL){
    // empty ll
    // step: 1 create a newnode 
    node* newnode = new node(data);
    // step 2 : update node with head
    head = newnode;
    tail = newnode;
   }
   
   else{
    // creating new node
    node* newdata = new node(data);
    // attach new node to head
    newdata->next=head;
    head=newdata;
   }

} 

void insertiontail(node* &head ,node* &tail, int data){
    if(tail == NULL){
    // empty ll
    // step: 1 create a newnode 
    node* newnode = new node(data);
    // step 2 : update node with head
    head = newnode;
    tail = newnode;
   }

   else{
//    creatin a new node ;
    node* newnode = new node(data);
    // tail ke null next ko attach kre ge newnode se
    tail->next=newnode;
    tail=newnode;


   }
}

int main (){
    // node* first = new node(10);
    // node* sec = new node(20);
    // node* third = new node(30);
    // node* fou = new node(40);
    // node* five = new node(50);

    // first->next=sec;
    // sec->next=third;
    // third->next=fou;
    // fou->next=five;
    // five->next=NULL;
    // node*head =first;
    // node*tail =five;
    // printLL(head);
    // insertiontail(head ,tail,5);
    //  printLL(head);






















// sab kuch new se 
node* head = NULL;
node* tail =NULL;
insertionhead(head,tail,10);
insertionhead(head,tail,20);
insertionhead(head,tail,30);
printLL(head);
insertiontail(head,tail,30);
insertiontail(head,tail,20);
insertiontail(head,tail,10);
printLL(head);

}