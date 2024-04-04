#include<iostream>
using namespace std ;
class node{
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
void inserthead(node* &head,node* &tail,int data){
    
    if (head ==NULL)
    {
        node* newnode = new node(data);
        head=newnode;
        tail=newnode;
        
    }
    else{
        node* newdata= new node(data);
        newdata->next=head;
        head=newdata;
    }
    
}
void inserttail(node* &head ,node* &tail ,int data){
    if(tail==NULL){
        node* newdata = new node(data);
        head=newdata;
        tail=newdata;
    }
    else{
        node*  newdata = new node(data);
        tail->next=newdata;
        tail=newdata;
            }
}
void printll(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(node* &head,node* &tail){
    node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
node* middle(node* head){
    if(head == NULL){
        return head;
    }
        node* slow=head;
        node* fast=head;
        while(fast != NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    

}
node* reverse(node* &head,node* &tail){
    node* curr = head;
    node* prev =NULL;
    node* temp= head;
    while(curr != NULL){
        node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;

}
bool compare(node* head ,node* head2){
     while(head2 != NULL){
        if(head->data != head2->data){
            return false;
        }
        else{
            head=head->next;
            head2=head2->next;
        }
     }
     return true;

}
bool palidrom (node* &head ,node* &tail )
{
    // sbsse phele middle nikalo
    node* middnode = middle(head); 
    // uske bdh head 2 bna lao
    node* head2 = middnode->next;
      middnode->next=NULL;
    // reverse kra dao head 2 se 2 ll ko
    
    node* prev=NULL;
    node* curr=head2;
    head2=reverse(prev,curr);
    // compare both ll

   return compare(head,head2);
    }

bool loop(node* &head){
        node* slow =head;
        node* fast =head;
        while(fast != NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast){
                return true;
            } 
        }return false;
        

    }
    int main() {
    node* head = NULL;
    node* tail = NULL;
    inserthead(head, tail, 3);
    inserthead(head, tail, 2);
    inserthead(head, tail, 1);
    inserttail(head, tail, 4);
    inserttail(head, tail, 5);
    inserttail(head, tail, 6);

    // Create a loop for testing
    tail->next = head->next->next;

    // Detect loop
    bool is_loop = loop(head);
    if (is_loop) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}



// int main (){
// node* head=NULL;
// node* tail=NULL;
// inserthead(head,tail,3);
// inserthead(head,tail,2);
// inserthead(head,tail,1);
// inserttail(head,tail,4);
// inserttail(head,tail,5);
// inserttail(head,tail,6);
// tail->next=head->next->next;
// printll(head);
// // int lenght= getlength()

// // cout<<"Lenght of LL is : "<<getlength(head,tail)<<endl;
// // node* middlenode = middle(head);    
// // cout<<middlenode->data;
// // if (middlenode != NULL) {
// //         cout << "Middle of LL is: " << middlenode->data << endl;
// //     } else {
// //         cout << "List is empty or has even number of elements." << endl;
// //     }

// // reverse(head,tail);
// // printll(head);
// // bool is_palidrom=palidrom(head,tail);
// //     if(is_palidrom){
// //          cout << "The linked list is a palindrome." << endl;
// //     }
// bool is_loop =loop(head);
// if(is_loop){
//     cout<<"true"<<endl;
// }
// else{
//     cout<<"false"<<endl;;

// }

//     return 0;

// }
