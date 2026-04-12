#include <iostream>
#include <limits.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
        
    Node(int value){
        data  = value;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree(){
    int val;
    cin>>val;

    if(val==-1){
        return NULL;
    }
    else{
        Node* root  = new Node(val);
        root->left  = buildTree();
        root->right = buildTree();
        return root;
    }
}

void preorderTraversal(Node* root){
    if(root == NULL){
        return ;
    }
    //N
    cout<<root->data<<" ";

    //L
    preorderTraversal(root->left);

    //R
    preorderTraversal(root->right);
}

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //L
    inorderTraversal(root->left);

    //N
    cout<<root->data<<" ";

    //R
    inorderTraversal(root->right); 
}


void postTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //L
    postTraversal(root->left);

    //R
    postTraversal(root->right); 

    //N
     cout<<root->data<<" ";
}


void levelorderTraversal(Node* root){
    if(root  = NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout<< front->data;

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }
    

    

}

int main(){

    Node* root = buildTree();

    cout<<endl;

    cout<<endl<<"Preorder"<<endl;
    preorderTraversal(root);

    cout<<endl<<"Inorder"<<endl;
    inorderTraversal(root);

    cout<<endl<<"Postorder"<<endl;
    postTraversal(root);


    cout<<endl<<"level order "<<endl;
    levelorderTraversal(root);



    return 0;
}