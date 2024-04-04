#include<iostream>
using namespace std;
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
    ~node(){
        cout<<"Syatum"<<this->data<<endl;
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

void deletnode(node* &head ,node* tail , int position){
    if(head == NULL){
        cout<<"Cannot delete ,coz LL is empty";
        return;
    }
    int len = getlength(head);
    if(position == 1){
        // first node ko delete krna hai 
        node* temp = head;
        head =head->next;
        temp->next=NULL;
        delete temp;
    }
    else if(position == len){
//   last node delete keni hai 
     node* prev = head;
     while(prev->next == tail){
        prev=prev->next;
     }
    //  jb prev last pe aah jaye  
    // ab prev ka next null kr
    prev->next=NULL;
        // or ab node delete kro 
        delete tail;

        //update tail
        tail=prev;  
    }

    else{
        node* prev = NULL;
        node* curr = head;
        while(position != 1){
            position--;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}

int main (){
// sab kuch new se 
node* head = NULL;
node* tail =NULL;
inserthead(head,tail,10);
inserthead(head,tail,20);
inserthead(head,tail,30);
inserttail(head,tail,30);
inserttail(head,tail,20);
inserttail(head,tail,10);
deletnode(head,tail,5);
printLL(head);

}