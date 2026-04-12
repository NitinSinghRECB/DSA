#include<iostream>
#include<limits.h>
#include<vector>
#include<string>
#include<queue>

using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }

};

Node* builtBST(Node* root , int val){
    if(root==NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(val > root->data){
            root->right = builtBST(root->right , val);
        }
        else{
            root->left = builtBST(root->left , val);
        }
        return root;
    }
}

Node* createBST(Node* root){

    cout<<"Enter the value of the Node = "<<endl;
    int val;
    cin>>val;
    while(val!=-1){
        root = builtBST(root,val);
        cout<<"Enter the value for the Node = "<<endl;
        cin>>val;
    }
    return root;
    
}

void preorderTraversal(Node* root){ //NLR
    if(root ==  NULL) return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);

}

void inorderTraversal(Node* root){ //LNR
    if(root == NULL) return;

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
    
}

void postorderTraversal(Node* root){ //LRN
    if(root == NULL) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
    
}

void levelorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout<< front->data<<" " ;

        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }
}


int getMin(Node* root){
    if(root==NULL) return -1;

    while(root->left){
        root=root->left;
    }

    return root->data;
}
int getMax(Node* root){
    if(root==NULL) return -1;

    while(root->right){
        root=root->right;
    }

    return root->data;
}

 


int main(){

    Node* root = NULL;
    root = createBST(root);
    cout<<endl;

    cout<<endl<<"Printing Preorder : ";
    preorderTraversal(root);

    cout<<endl<<"Printing Inorder : ";
    inorderTraversal(root);

    cout<<endl<<"Printing Postorder : ";
    postorderTraversal(root);

    cout<<endl<<"level order : ";
    levelorderTraversal(root);


    cout<<"Minimum is : "<<getMin(root)<<endl;
    cout<<"Maximum is : "<<getMax(root)<<endl;







    return 0;
}




//insertion  O(logn)
    //worst case : skew tree  O(n)

// min max O(n)
