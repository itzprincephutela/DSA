// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int val){
//         this->data=val;
//         this->left=NULL;
//         this->right=NULL;
        
//     }
    

// };
//     // it return node of the create tree; 

//     node* createtree(){
//     cout<<"Enter the data"<<endl;
//     int data;
//     cin>>data;
//     if(data==-1){
//         return NULL;
//     }
//     // step 1 create node;
//     node* root = new node(data);
//     cout<<"left of node : "<<root->data<<endl;
//     // step 2 create left node
//     root->left=createtree();
//     cout<<"Right of node : "<<root->data<<endl;
//     // step 3 create right node;
//     root->right=createtree();
//     return root;
//     }


// int main(){
//     node* root  = createtree();
//     cout<<root->data<<endl;
// }

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }

};
node* createtree(){
    cout<<"ENter the ROOT :"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    //step 1 create a root node
    node* root = new node(data);
    //step 2 create left node
    cout<<"left of node : "<<root->data<<endl;
   root->left =createtree();
//    step 3 create right node;
cout<<"right of node : "<<root->data<<endl;
 root->right=createtree();
 return root;
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    // NLR
    //N
    cout<<root->data<<" ";
    //L
    preorder(root->left);
    //R
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
     postorder(root->right);
    cout<<root->data<<" ";
   
}

void levelorder(node* root){
    queue<node*>q; 
    q.push(root);
    while(!q.empty()){
        node* front=q.front();
        q.pop();
        cout<< front->data <<" " ;
        
        if(front->left !=NULL){
            q.push(front->left);
        }
        if(front->right !=NULL){
            q.push(front->right);
        }
    }
    }
int main(){
    node* root=createtree();
    // cout<<root->data;
    cout<<"Printing Order  preorder: "<<endl;
    preorder(root);

    cout<<endl;
    cout<<"Printing Order  inorder : "<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Printing Order  postorder: "<<endl;
    postorder(root);
    cout<<endl;

    cout<<"Printing Order  levelorder: "<<endl;
    levelorder(root);
    cout<<endl;

}