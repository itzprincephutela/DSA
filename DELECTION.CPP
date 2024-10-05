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
//comment
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


void deletedata(node* &head ,node* &tail ,int position){
    int len=findlength(head);
    if(head==tail){
        node* temp= head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
   else if (head == NULL) { // List is already empty
        return;
    }
    //  else if (head == tail) { // List contains only one node
    //     delete head; // delete the node
    //     head = tail = NULL; // reset head and tail to NULL
    // }
    else if(position ==1 ){
      node* temp = head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;

    delete temp;
    }
    else if(position == len){
        // deeleyte fom tail
        node* privnode =tail->prev;
        privnode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=privnode;

    }
    else {
            // sbse phele ek current pr jso
            node* prevnode= NULL;
            node* currnode=head;
            node* nextnode=head->next;
            while(position !=1){
                position--;
                prevnode=currnode;
                currnode=currnode->next;
            }
            // ab hum position pr hai
            prevnode->next=currnode->next;
            currnode->next=NULL;
            currnode->prev=NULL;
            nextnode->prev=prevnode->prev;
            delete currnode;
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
// inserttail(head,tail,5);
// printll(head);
// insertatanypoint(head,tail,100,2);
// printll(head);
// deletedata(head,tail,1);
deletedata(head,tail,2);
printll(head);

}


