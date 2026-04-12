#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

Node* InsertAtHead(int value , Node* &head , Node* &tail){

    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }
    else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    return head;

}


Node* InsertAtTail(int value , Node* &head , Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }
    else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail=newNode;
    }
    
}


void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


bool searchInLL(Node* head , int target){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->value==target){
            return true;
        }
        else temp = temp->next;
    }
    return false;
}


int lengthLL(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}


void insertAtPosition(int position , int value , Node* &head, Node* &tail){
    if(position==1){
        InsertAtHead(value,head,tail);
        return;
    }
    int length = lengthLL(head);
    if(position==length+1){
        InsertAtTail(value,head,tail);
        return;
    }
    else{
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i = 0 ; i<=position-2 ; i++){
            temp=temp->next;

        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

}



void deleteFromPositionn(int position, Node* &head, Node* &tail){
    if(head==NULL && tail==NULL){
        return;
    }
    if(position>lengthLL(head)){
        return;
    }
    if(head==NULL && tail==NULL){
        return;
    }
    if(head==tail && position ==1){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        Node * previous = head;
        for(int i =1 ; i<=position-2 ; i++){
            previous=previous->next;
        }
        Node* current = previous->next;
        Node* forward = current->next;

        current->next = NULL;
        previous->next = forward;
        delete current;
    }
}

int main(){


    Node* head = NULL;
    Node* tail = NULL;
    InsertAtHead(10,head,tail);
    InsertAtHead(20,head,tail);
    InsertAtHead(30,head,tail);
    InsertAtHead(40,head,tail);
    printLL(head);
    cout<<searchInLL(head,1000)<<endl;
    cout<<lengthLL(head);

    insertAtPosition(5,500,head,tail);
    cout<<"New Listt"<<endl;
    printLL(head);

    cout<<"Ater deletion"<<endl;
    deleteFromPositionn(1,head,tail);
    printLL(head);



    return 0;
}