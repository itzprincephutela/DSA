#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(){
        this->next=NULL;
        this->prev=NULL;

    }
    node(int data){
        this->data=data;
         this->next=NULL;
        this->prev=NULL;

    }

};
void printll(node* head){
    node* temp =head;
    while(temp != NULL ){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int findlength(node* &head){
    int length =0;
     node* temp =head;
    while(temp != NULL)
{
    length++;
    temp=temp->next;
}
return length;
}

void inserthead(node* &head,node* &tail,int data){
    // isme 2 case bne ge or isme prev or next ka dyan rkhna 
    if (head ==NULL){
        node* newnode=new node(data);
        // data dalne ke bad node hai jo vo head or tail dono uss pe aah jaye ge
        head=newnode;
        tail=newnode;
    }
    else{
        // sbse phele ek node bna lao 
        node* newnode=new node(data);
        // uske bdh new node ko head se coonect kro
        newnode->next=head;
        head->prev= newnode;
        head=newnode;
    }
    
}



void inserttail(node* &head,node* &tail,int data ){
    // isme vi do case bnte hai agr tail null hua to kha add hoga 
    node* newnode=new node(data);
    if(tail==NULL){
        // phele hmne ek newnode create ki
        
        
        head=newnode;
        tail=newnode;
    }
    else{
        // node* newnode = new node(data);
        // tail -> next ko newnode se connnect kro
        tail->next=newnode;
        newnode->prev=tail;
          tail=newnode;
         
    }
}


void insertatanypoint(node* &head,node* &tail,int data,int position){
    int len=findlength(head);
    if(head ==NULL){
         node* newnode=new node(data);
        // data dalne ke bad node hai jo vo head or tail dono uss pe aah jaye ge
        head=newnode;
        tail=newnode;
    } 
    if(position <= 1){
        inserthead(head,tail,data);
    }
    else if(position ==len +1 ){
        inserttail(head,tail,data);
    }
    else{

    node* newnode=new node(data);
    node* prev=NULL;
    node* curr=head;
    while(position !=1){
        position--;
        prev=curr;
        curr=curr->next;
    }
     prev->next=newnode;
     newnode->prev=prev;
    newnode->next=curr; 
    curr->prev=newnode;
    }
}
int main (){

node* head=NULL;
node* tail=NULL;
inserthead(head,tail,5);
inserthead(head,tail,4);
inserthead(head,tail,3);
inserthead(head,tail,2);
inserthead(head,tail,1);
printll(head);
inserttail(head,tail,5);
printll(head);
insertatanypoint(head,tail,100,2);
printll(head);

}


