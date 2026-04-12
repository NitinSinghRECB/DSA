#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    Node(int value){
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(int value, Node* &head , Node* &tail){
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void printDLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}




void printReversedDLL(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(int value , Node* &head , Node* &tail){
    if(head ==NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLenDLL(Node* head){
    int c = 0;
    Node* temp = head;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    return c;
}

void insertAtPosition(int position , int value , Node* &head , Node* &tail){
    int len = getLenDLL(head);
    if(position==1){
        insertAtHead(value,head,tail);
        return;
    }
    else if(position== len+1){
        insertAtTail(value,head,tail);
        return ;
    }
    else{
        Node* temp = head;
        for(int i = 0 ; i<position-2 ; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next = forward;
        forward->prev = newNode;

    }
}
bool searchInDLL(int target , Node* &head , Node* &tail){
    Node* temp = head ; 
    while(temp!=NULL){
        if(temp->data == target){
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    return false;

}

void deleteInDLL(int position , Node* &head , Node* &tail){
    int len = getLenDLL(head);
    if(head == NULL && tail == NULL){
        return;
    }
    else if(head==tail){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;

    }
    else if (position==1){
        Node* temp = head;
        head = head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    
    else if (position == len){
        //we want to delete tail node
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{
        Node* temp = head;
        for(int i = 0 ;  i<position-2 ; i++){
            temp=temp->next;
        }
        Node* curr = temp->next;
        Node* forward = curr->next;
        temp->next=forward;
        forward->prev = temp;
        curr->next= NULL;
        curr->prev=NULL;
        delete curr;
    }
    

}



void reversedLL(Node* &head){
    if(head==NULL){
        return; 
    }
    Node* prev = NULL;
    Node* curr = head;
    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next = prev; 
        prev = curr;
        curr = forward;
    }
    head = prev;
}

Node* recursiveReverseLL(Node* &head , Node* prev){
    if(head==NULL){
        return prev;
    }
    Node* curr = head;
    Node* forward = curr->next;
    curr->next = prev;
    return recursiveReverseLL(forward , curr);
 
}


Node* getMidNode(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool checkPalindrome(Node* head){
    int len = getLenDLL(head);
    Node* mid = getMidNode(head);
    Node* final = NULL;
    if(len&1){//odd
        final = mid->next;
    }
    else{
        //even
        final = mid;
    }

    reversedLL(final);


    Node* temp = head;
    while(head!=NULL && final!=NULL){
        if(temp->data != final->data ){
            return false;
        }
        temp = temp->next;
        final = final->next;
    }

    return true;

    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtHead(50,head,tail);
    insertAtHead(60,head,tail);
    // printDLL(head);
    // reverDLL(tail);
    // insertAtTail(500,head,tail);
    // printDLL(head);
    // reverDLL(tail);
    

    // insertAtPosition(5,11,head,tail);
    // printDLL(head);

    // cout<<searchInDLL(300 , head , tail)<<endl;
    // cout<<"Length of DLL="<<getLenDLL(head)<<endl;
    // deleteInDLL(3,head,tail);
    printDLL(head);

    // reversedLL(head);
    // Node* prev = NULL;
    // head = recursiveReverseLL(head,prev);
    // printDLL(head);


    // Node* mid = getMidNode(head);
    // cout<<mid->data<<endl;




    // insertAtHead(1,head,tail);
    // insertAtHead(2,head,tail);
    // insertAtHead(3,head,tail);
    // insertAtHead(2,head,tail);
    // insertAtHead(1,head,tail);
    cout<<checkPalindrome(head)<<endl;






    return 0;
}