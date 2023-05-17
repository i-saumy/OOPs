#include <iostream>

using namespace std;

class Node{
    public :
    int data;
    Node* prev;
    Node*  next;
    
    //constructor
    Node(int d){
        this -> data=d;
        this-> prev= NULL;
        this -> next = NULL;
        
    }
    
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this->next= NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl;
    }
};
// traversing of lined list double
void print(Node* head){
    Node* temp = head;
    
    while(temp != NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
    
    cout<<endl;
}
int getLength(Node* head){
    
    int len = 0;
    
    Node* temp = head;
    
    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
    return len;
}

void InsertAtHead(Node* &head,int d){               
    Node * temp = new Node (d);
    temp -> next=head;
    head->prev = temp;
    head = temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp= new Node (d); 
    tail -> next = temp;
    temp -> prev = tail;
    tail =temp;
    temp -> next = NULL;
}
void InsertAtPosition(Node* & tail,Node * &head, int pos, int d){
    if(pos==1){
        InsertAtHead(head,d);
        return;
    }
    Node * temp= head;
    int cnt=1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp -> next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert= new Node(d);
     
     nodeToInsert -> next = temp->next;
     temp->next->prev = nodeToInsert;
     temp->next = nodeToInsert;
     nodeToInsert ->prev = temp;
}
void deletenode(int pos,Node * &head){
    
    if(pos==1){
        Node * temp= head;
        temp->next->prev=NULL;
        head= temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {   //deleting any middle node or last node 
        Node * current = head;
        Node * prev = NULL;
        
        int count =1 ;
        while(count<=pos-1){
            prev = current;
            current = current ->next;
            count++;
        }
        current->prev=NULL;
         prev -> next = current -> next;
         current -> next = NULL;
        delete current;
    }
}
int main()
{
    Node * node1 = new Node(10);
    Node * head = node1;
    Node * tail = node1;
    print(head);
    //cout << getLength(head)<<endl;
    
    InsertAtHead(head,12);
    print(head);
    
    InsertAtHead(head,13);
    print(head);
    
    InsertAtTail(tail,14);
    print(head);
    
    InsertAtPosition(tail,head,2,23);
    print(head);
    
    InsertAtPosition(tail,head,1,21);
    print(head);
    
    InsertAtPosition(tail,head,7,23);
    print(head);
    
    deletenode(1,head);
    print(head);
    
    cout << "head "<<head->data<<endl;
    cout<< " tail "<<tail->data<<endl;
    
    deletenode(6,head);
    print(head);
    
    deletenode(3,head);
    print(head);
    return 0;
}
//LIST IS EMPTY
//Node * head = NULL;
//Node * tail = NULL;

