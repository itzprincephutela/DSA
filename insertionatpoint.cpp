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
int main(){
 node* head = NULL;
node* tail =NULL;
inserthead(head,tail,10);
inserthead(head,tail,20);
inserthead(head,tail,30);
insertatanyposition(head,tail,500,3);
printLL(head);


}